# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_uwb_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED uwb_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(uwb_FOUND FALSE)
  elseif(NOT uwb_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(uwb_FOUND FALSE)
  endif()
  return()
endif()
set(_uwb_CONFIG_INCLUDED TRUE)

# output package information
if(NOT uwb_FIND_QUIETLY)
  message(STATUS "Found uwb: 0.0.0 (${uwb_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'uwb' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${uwb_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(uwb_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${uwb_DIR}/${_extra}")
endforeach()
