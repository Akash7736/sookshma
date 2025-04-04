# Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Copy configure.ac
file(INSTALL /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps/configure.ac
    DESTINATION /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps-build/autotools
    )

# Copy m4 diretory
file(INSTALL /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps/m4
    DESTINATION /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps-build/autotools
    )

# Create include/fastrtps
file(MAKE_DIRECTORY /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps-build/autotools/include/fastrtps)

if()
    # Copy script to be installed with autotools
    file(INSTALL /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps/fastrtpsgen/scripts/fastrtpsgen.in
        DESTINATION /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps-build/autotools/.bin
        )
endif()


# Run autoreconf
execute_process(COMMAND autoreconf -fi /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps-build/autotools
    RESULT_VARIABLE EXECUTE_RESULT)

if(NOT EXECUTE_RESULT EQUAL 0)
    message(FATAL_ERROR "Failed the execution of autoreconf")
endif()

# Copy include/fastrtps/config.h.in
file(INSTALL /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps/include/fastrtps/config.h.in
    DESTINATION /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps-build/autotools/include/fastrtps
    )

# Copy licenses
file(INSTALL /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps/LICENSE
    DESTINATION /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps-build/autotools
    )
