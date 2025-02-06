#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "sbg::sbgECom" for configuration ""
set_property(TARGET sbg::sbgECom APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(sbg::sbgECom PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsbgECom.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS sbg::sbgECom )
list(APPEND _IMPORT_CHECK_FILES_FOR_sbg::sbgECom "${_IMPORT_PREFIX}/lib/libsbgECom.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
