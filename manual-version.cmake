# Generates an manual-version.h, containing some information about the current
# VERSION.

file(READ "${VERSIONFILE}" VERSION_FILE_TEXT)
string(REPLACE "\n" "" VERSION_FILE_TEXT "${VERSION_FILE_TEXT}")

set(VERSION_FULL_STRING "v${VERSION_FILE_TEXT}")
string(REGEX MATCH "[0-9]+(\\.[0-9]+)+" VERSION "${VERSION_FILE_TEXT}")
string(REGEX MATCH "[0-9]+\\.[0-9]+" VERSION_AMIGA "${VERSION_FILE_TEXT}")
file(TIMESTAMP "${VERSIONFILE}" VERSION_AMIGA_DATE "%d.%m.%Y" UTC)

file(REMOVE "${DEST}.tmp")
configure_file("${SRC}" "${DEST}.tmp" @ONLY)
execute_process(
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${DEST}.tmp" "${DEST}"
    RESULT_VARIABLE RESULT
    )

if(NOT RESULT EQUAL 0)
    message(FATAL_ERROR "Couldn't copy_if_different: ${RESULT}")
endif()

file(REMOVE "${DEST}.tmp")

