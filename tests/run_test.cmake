include("${COMMON_INCLUDE}")

# Determine CPU if not set
if(NOT CPU)
    string(REGEX MATCH "([^/]+)/[^/]+/?$" TMPVAR "${SOURCE_DIR}")
    set(CPU "${CMAKE_MATCH_1}")
endif(NOT CPU)
file(GLOB SRCS "*.s") # Get source files
set(LIBSRCS)
set(OBJECTS)
set(LIBRARIES)
set(DEFS)
set(WLA_FLAGS)
set(LINK_FLAGS)

set(OUTPUT "out.bin")
set(EXPECTED "expected.bin")

if(EXISTS "./test.cmake")
    set(COMPILE_NORMALLY OFF)
    set(CHECK_FILE_EQUALS OFF)
    include("./test.cmake")
else()
    set(COMPILE_NORMALLY ON)
    if(EXISTS "${EXPECTED}")
        set(CHECK_FILE_EQUALS ON)
    else()
        set(CHECK_FILE_EQUALS OFF)
    endif()
endif()

if(COMPILE_NORMALLY)
    # Automatic compilation
    wla_all(
        OUTPUT "${OUTPUT}"
        CPU "${CPU}"
        SOURCES ${SRCS}
        LIBSOURCES ${LIBSRCS}
        SOURCES ${OBJECTS}
        LIBSOURCES ${LIBRARIES}
        DEFINES ${DEFS}
        WLA_FLAGS ${WLA_FLAGS}
        LINK_FLAGS ${LINK_FLAGS}
        VERBOSE
        )
endif(COMPILE_NORMALLY)

if(CHECK_FILE_EQUALS)
    if(EXPECTED)
        abort_if_file_unequal("${OUTPUT}" "${EXPECTED}"
            "Output file doesn't equals expected file!")
    endif(EXPECTED)
endif(CHECK_FILE_EQUALS)

# Add temporary files
file(GLOB TEMP_FILES ".wla*a" ".wla*b" "wla_a.tmp" "wla_b.tmp")
list(APPEND FILES_TO_CLEAN_UP ${TEMP_FILES})

end_it()
