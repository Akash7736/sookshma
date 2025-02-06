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

macro(generate_sources_for_autotools)
    set(fastrtps_SOURCES_TMP log/Log.cpp;log/StdoutConsumer.cpp;log/FileConsumer.cpp;utils/eClock.cpp;utils/IPFinder.cpp;utils/md5.cpp;utils/StringMatching.cpp;utils/IPLocator.cpp;utils/System.cpp;rtps/common/Time_t.cpp;rtps/resources/ResourceEvent.cpp;rtps/resources/TimedEvent.cpp;rtps/resources/TimedEventImpl.cpp;rtps/resources/AsyncWriterThread.cpp;rtps/resources/AsyncInterestTree.cpp;rtps/timedevent/TimedCallback.cpp;rtps/writer/LivelinessManager.cpp;rtps/writer/RTPSWriter.cpp;rtps/writer/StatefulWriter.cpp;rtps/writer/ReaderProxy.cpp;rtps/writer/StatelessWriter.cpp;rtps/writer/ReaderLocator.cpp;rtps/writer/timedevent/PeriodicHeartbeat.cpp;rtps/writer/timedevent/NackResponseDelay.cpp;rtps/writer/timedevent/NackSupressionDuration.cpp;rtps/history/CacheChangePool.cpp;rtps/history/History.cpp;rtps/history/WriterHistory.cpp;rtps/history/ReaderHistory.cpp;rtps/reader/timedevent/HeartbeatResponseDelay.cpp;rtps/reader/timedevent/InitialAckNack.cpp;rtps/reader/WriterProxy.cpp;rtps/reader/StatefulReader.cpp;rtps/reader/StatelessReader.cpp;rtps/reader/RTPSReader.cpp;rtps/reader/FragmentedChangePitStop.cpp;rtps/messages/RTPSMessageCreator.cpp;rtps/messages/RTPSMessageGroup.cpp;rtps/messages/MessageReceiver.cpp;rtps/messages/submessages/AckNackMsg.hpp;rtps/messages/submessages/DataMsg.hpp;rtps/messages/submessages/GapMsg.hpp;rtps/messages/submessages/HeartbeatMsg.hpp;rtps/network/NetworkFactory.cpp;rtps/network/ReceiverResource.cpp;rtps/participant/RTPSParticipant.cpp;rtps/participant/RTPSParticipantImpl.cpp;rtps/RTPSDomain.cpp;Domain.cpp;participant/Participant.cpp;participant/ParticipantImpl.cpp;publisher/Publisher.cpp;publisher/PublisherImpl.cpp;publisher/PublisherHistory.cpp;subscriber/Subscriber.cpp;subscriber/SubscriberImpl.cpp;subscriber/SubscriberHistory.cpp;transport/ChannelResource.cpp;transport/UDPChannelResource.cpp;transport/TCPChannelResource.cpp;transport/TCPChannelResourceBasic.cpp;transport/TCPAcceptor.cpp;transport/TCPAcceptorBasic.cpp;transport/UDPv4Transport.cpp;transport/TCPTransportInterface.cpp;transport/UDPTransportInterface.cpp;transport/TCPv4Transport.cpp;transport/UDPv6Transport.cpp;transport/TCPv6Transport.cpp;transport/test_UDPv4Transport.cpp;transport/tcp/TCPControlMessage.cpp;transport/tcp/RTCPMessageManager.cpp;transport/timedevent/TCPKeepAliveEvent.cpp;types/AnnotationDescriptor.cpp;types/AnnotationParameterValue.cpp;types/DynamicData.cpp;types/DynamicDataFactory.cpp;types/DynamicType.cpp;types/DynamicPubSubType.cpp;types/DynamicTypePtr.cpp;types/DynamicDataPtr.cpp;types/DynamicTypeBuilder.cpp;types/DynamicTypeBuilderPtr.cpp;types/DynamicTypeBuilderFactory.cpp;types/DynamicTypeMember.cpp;types/MemberDescriptor.cpp;types/TypeDescriptor.cpp;types/TypeIdentifier.cpp;types/TypeIdentifierTypes.cpp;types/TypeObject.cpp;types/TypeObjectHashId.cpp;types/TypeObjectFactory.cpp;types/TypeNamesGenerator.cpp;types/TypesBase.cpp;types/BuiltinAnnotationsTypeObject.cpp;attributes/TopicAttributes.cpp;qos/ParameterList.cpp;qos/ParameterTypes.cpp;qos/QosPolicies.cpp;qos/WriterQos.cpp;qos/ReaderQos.cpp;rtps/builtin/BuiltinProtocols.cpp;rtps/builtin/discovery/participant/PDPSimple.cpp;rtps/builtin/discovery/participant/PDPSimpleListener.cpp;rtps/builtin/discovery/participant/timedevent/RemoteParticipantLeaseDuration.cpp;rtps/builtin/discovery/participant/timedevent/ResendParticipantProxyDataPeriod.cpp;rtps/builtin/discovery/endpoint/EDP.cpp;rtps/builtin/discovery/endpoint/EDPSimple.cpp;rtps/builtin/discovery/endpoint/EDPSimpleListeners.cpp;rtps/builtin/discovery/endpoint/EDPStatic.cpp;rtps/builtin/liveliness/WLP.cpp;rtps/builtin/liveliness/WLPListener.cpp;rtps/builtin/liveliness/timedevent/WLivelinessPeriodicAssertion.cpp;rtps/builtin/data/ParticipantProxyData.cpp;rtps/builtin/data/WriterProxyData.cpp;rtps/builtin/data/ReaderProxyData.cpp;rtps/flowcontrol/ThroughputController.cpp;rtps/flowcontrol/ThroughputControllerDescriptor.cpp;rtps/flowcontrol/FlowController.cpp;rtps/exceptions/Exception.cpp;rtps/attributes/PropertyPolicy.cpp;rtps/common/Token.cpp;xmlparser/XMLParserCommon.cpp;xmlparser/XMLElementParser.cpp;xmlparser/XMLEndpointParser.cpp;xmlparser/XMLParser.cpp;xmlparser/XMLProfileManager.cpp;rtps/writer/PersistentWriter.cpp;rtps/writer/StatelessPersistentWriter.cpp;rtps/writer/StatefulPersistentWriter.cpp;rtps/reader/StatelessPersistentReader.cpp;rtps/reader/StatefulPersistentReader.cpp;rtps/persistence/PersistenceFactory.cpp;rtps/persistence/SQLite3PersistenceService.cpp;rtps/persistence/sqlite3.c;transport/TCPChannelResourceSecure.cpp;transport/TCPAcceptorSecure.cpp;SECTION;SECURITY;rtps/security/exceptions/SecurityException.cpp;rtps/security/common/SharedSecretHandle.cpp;rtps/security/SecurityManager.cpp;rtps/security/SecurityPluginFactory.cpp;rtps/security/timedevent/HandshakeMessageTokenResent.cpp;security/OpenSSLInit.cpp;security/authentication/PKIDH.cpp;security/accesscontrol/Permissions.cpp;security/cryptography/AESGCMGMAC.cpp;security/cryptography/AESGCMGMAC_KeyExchange.cpp;security/cryptography/AESGCMGMAC_KeyFactory.cpp;security/cryptography/AESGCMGMAC_Transform.cpp;security/cryptography/AESGCMGMAC_Types.cpp;security/authentication/PKIIdentityHandle.cpp;security/authentication/PKIHandshakeHandle.cpp;security/accesscontrol/AccessPermissionsHandle.cpp;security/accesscontrol/CommonParser.cpp;security/accesscontrol/GovernanceParser.cpp;security/accesscontrol/PermissionsParser.cpp;ENDSECTION;/workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps/thirdparty/tinyxml2/tinyxml2.cpp)
    set(fastrtps_SOURCES_AUTOTOOLS "libfastrtps_la_SOURCES = ")
    set(section_ FALSE)
    set(restart_ FALSE)
    foreach(fastrtps_SOURCE ${fastrtps_SOURCES_TMP})
        if(section_)
            set(section_ FALSE)
            set(fastrtps_SOURCES_AUTOTOOLS "${fastrtps_SOURCES_AUTOTOOLS} \nif ${fastrtps_SOURCE}")
            set(fastrtps_SOURCES_AUTOTOOLS "${fastrtps_SOURCES_AUTOTOOLS} \nlibfastrtps_la_SOURCES += ")
        elseif(restart_)
            set(restart_ FALSE)
            set(fastrtps_SOURCES_AUTOTOOLS "${fastrtps_SOURCES_AUTOTOOLS} \nlibfastrtps_la_SOURCES += ")
            set(fastrtps_SOURCES_AUTOTOOLS "${fastrtps_SOURCES_AUTOTOOLS} ${fastrtps_SOURCE}")
        elseif("${fastrtps_SOURCE}" STREQUAL "SECTION")
            set(section_ TRUE)
            set(restart_ FALSE)
            set(fastrtps_SOURCES_AUTOTOOLS "${fastrtps_SOURCES_AUTOTOOLS} \n")
        elseif("${fastrtps_SOURCE}" STREQUAL "ENDSECTION")
            set(restart_ TRUE)
            set(fastrtps_SOURCES_AUTOTOOLS "${fastrtps_SOURCES_AUTOTOOLS} \nendif\n")
        else()
            set(fastrtps_SOURCES_AUTOTOOLS "${fastrtps_SOURCES_AUTOTOOLS} ${fastrtps_SOURCE}")
        endif()
    endforeach()
endmacro()

macro(generate_public_headers_for_autotools)
    set(fastrtps_PUBLIC_HEADERS_DIRECTORIES_TMP /workspaces/mavlab/build/microxrcedds_agent/fastrtps/src/fastrtps/include)
    set(fastrtps_PUBLIC_HEADERS_AUTOTOOLS "")
    foreach(directory ${fastrtps_PUBLIC_HEADERS_DIRECTORIES_TMP})
        file(GLOB_RECURSE fastrtps_PUBLIC_HEADERS_TMP RELATIVE ${directory} ${directory}/*.h)
        foreach(fastrtps_PUBLIC_HEADER ${fastrtps_PUBLIC_HEADERS_TMP})
            set(fastrtps_PUBLIC_HEADERS_AUTOTOOLS "${fastrtps_PUBLIC_HEADERS_AUTOTOOLS} ${fastrtps_PUBLIC_HEADER}")
        endforeach()
        file(GLOB_RECURSE fastrtps_PUBLIC_HEADERS_TMP RELATIVE ${directory} ${directory}/*.hpp)
        foreach(fastrtps_PUBLIC_HEADER ${fastrtps_PUBLIC_HEADERS_TMP})
            set(fastrtps_PUBLIC_HEADERS_AUTOTOOLS "${fastrtps_PUBLIC_HEADERS_AUTOTOOLS} ${fastrtps_PUBLIC_HEADER}")
        endforeach()
    endforeach()

    set(fastrtps_PUBLIC_HEADERS_FILES_TMP fastrtps/config.h)
    foreach(file ${fastrtps_PUBLIC_HEADERS_FILES_TMP})
        set(fastrtps_PUBLIC_HEADERS_AUTOTOOLS "${fastrtps_PUBLIC_HEADERS_AUTOTOOLS} ${file}")
    endforeach()
endmacro()

