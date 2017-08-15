# Generates an git-version.h, containing some information about the current
# git state in the repository.

execute_process(COMMAND "${GIT}" describe --dirty
    WORKING_DIRECTORY "${GITROOT}/.."
    RESULT_VARIABLE RESULT
    OUTPUT_VARIABLE GIT_DESCRIBE
    OUTPUT_STRIP_TRAILING_WHITESPACE
    )

if(NOT RESULT EQUAL 0)
    message(FATAL_ERROR "Couldn't git describe: ${RESULT}")
endif()

execute_process(
    COMMAND "${GIT}" show -s "--format=%cd"
        "--date=format:%d.%m.%Y" ${GIT_FULL_HASH}
    WORKING_DIRECTORY "${GITROOT}"
    RESULT_VARIABLE RESULT
    OUTPUT_VARIABLE VERSION_AMIGA_DATE
    OUTPUT_STRIP_TRAILING_WHITESPACE
    )

if(NOT RESULT EQUAL 0)
    message(FATAL_ERROR "Couldn't get commiter date in DD.MM.YYYY: ${RESULT}")
endif()

set(VERSION_FULL_STRING "${GIT_DESCRIBE}")
string(REGEX MATCH "[0-9]+(\\.[0-9]+)+" VERSION "${VERSION_FULL_STRING}")
string(REGEX MATCH "[0-9]+\\.[0-9]+" VERSION_AMIGA "${VERSION_FULL_STRING}")

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

