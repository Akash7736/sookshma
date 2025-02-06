
if(NOT "/workspaces/mavlab/build/microxrcedds_agent/CLI11/src/cli11-stamp/cli11-gitinfo.txt" IS_NEWER_THAN "/workspaces/mavlab/build/microxrcedds_agent/CLI11/src/cli11-stamp/cli11-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/workspaces/mavlab/build/microxrcedds_agent/CLI11/src/cli11-stamp/cli11-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/workspaces/mavlab/build/microxrcedds_agent/CLI11/src/cli11"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/workspaces/mavlab/build/microxrcedds_agent/CLI11/src/cli11'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --config "advice.detachedHead=false" "https://github.com/CLIUtils/CLI11.git" "cli11"
    WORKING_DIRECTORY "/workspaces/mavlab/build/microxrcedds_agent/CLI11/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/CLIUtils/CLI11.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout v1.7.1 --
  WORKING_DIRECTORY "/workspaces/mavlab/build/microxrcedds_agent/CLI11/src/cli11"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'v1.7.1'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/workspaces/mavlab/build/microxrcedds_agent/CLI11/src/cli11"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/workspaces/mavlab/build/microxrcedds_agent/CLI11/src/cli11'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/workspaces/mavlab/build/microxrcedds_agent/CLI11/src/cli11-stamp/cli11-gitinfo.txt"
    "/workspaces/mavlab/build/microxrcedds_agent/CLI11/src/cli11-stamp/cli11-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/workspaces/mavlab/build/microxrcedds_agent/CLI11/src/cli11-stamp/cli11-gitclone-lastrun.txt'")
endif()

