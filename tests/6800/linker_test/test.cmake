list(APPEND LINK_FLAGS -d -s)

wla(LIBRARY
    ARCH "${ARCH}"
    SOURCE "${SOURCE_DIR}/library.s"
    OUTPUT "${BINARY_DIR}/library.lib"
    VERBOSE)
