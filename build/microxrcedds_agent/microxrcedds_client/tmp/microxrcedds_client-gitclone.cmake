
if(NOT "/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src/microxrcedds_client-stamp/microxrcedds_client-gitinfo.txt" IS_NEWER_THAN "/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src/microxrcedds_client-stamp/microxrcedds_client-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src/microxrcedds_client-stamp/microxrcedds_client-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src/microxrcedds_client"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src/microxrcedds_client'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --config "advice.detachedHead=false" "https://github.com/eProsima/Micro-XRCE-DDS-Client.git" "microxrcedds_client"
    WORKING_DIRECTORY "/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/eProsima/Micro-XRCE-DDS-Client.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout v1.2.1 --
  WORKING_DIRECTORY "/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src/microxrcedds_client"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'v1.2.1'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src/microxrcedds_client"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src/microxrcedds_client'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src/microxrcedds_client-stamp/microxrcedds_client-gitinfo.txt"
    "/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src/microxrcedds_client-stamp/microxrcedds_client-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/workspaces/mavlab/build/microxrcedds_agent/microxrcedds_client/src/microxrcedds_client-stamp/microxrcedds_client-gitclone-lastrun.txt'")
endif()

