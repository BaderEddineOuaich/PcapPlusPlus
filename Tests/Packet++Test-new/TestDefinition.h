#pragma once

#include "../PcppTestFramework2/PcppTestFramework.h"

// Implemented in EthAndArpTests.cpp
PTF_TEST_CASE(EthPacketCreation);
PTF_TEST_CASE(EthPacketPointerCreation);
PTF_TEST_CASE(EthAndArpPacketParsing);
PTF_TEST_CASE(ArpPacketCreation);
PTF_TEST_CASE(EthDot3LayerParsingTest);
PTF_TEST_CASE(EthDot3LayerCreateEditTest);

// Implemented in VlanMplsTests.cpp
PTF_TEST_CASE(VlanParseAndCreation);
PTF_TEST_CASE(MplsLayerTest);

// Implemented in IPv4Tests.cpp
PTF_TEST_CASE(IPv4PacketCreation);
PTF_TEST_CASE(IPv4PacketParsing);
PTF_TEST_CASE(IPv4FragmentationTest);
PTF_TEST_CASE(IPv4OptionsParsingTest);
PTF_TEST_CASE(IPv4OptionsEditTest);
PTF_TEST_CASE(IPv4UdpChecksum);

// Implemented in IPv6Tests.cpp
PTF_TEST_CASE(IPv6UdpPacketParseAndCreate);
PTF_TEST_CASE(IPv6FragmentationTest);
PTF_TEST_CASE(IPv6ExtensionsTest);

// Implemented in TcpTests.cpp
PTF_TEST_CASE(TcpPacketNoOptionsParsing);
PTF_TEST_CASE(TcpPacketWithOptionsParsing);
PTF_TEST_CASE(TcpPacketWithOptionsParsing2);
PTF_TEST_CASE(TcpMalformedPacketParsing);
PTF_TEST_CASE(TcpPacketCreation);
PTF_TEST_CASE(TcpPacketCreation2);

// Implemented in PacketTests.cpp
PTF_TEST_CASE(InsertDataToPacket);
PTF_TEST_CASE(InsertVlanToPacket);
PTF_TEST_CASE(RemoveLayerTest);
PTF_TEST_CASE(CopyLayerAndPacketTest);
PTF_TEST_CASE(PacketLayerLookupTest);
PTF_TEST_CASE(RawPacketTimeStampSetterTest);

// Implemented in HttpTests.cpp
PTF_TEST_CASE(HttpRequestLayerParsingTest);
PTF_TEST_CASE(HttpRequestLayerCreationTest);
PTF_TEST_CASE(HttpRequestLayerEditTest);
PTF_TEST_CASE(HttpResponseLayerParsingTest);
PTF_TEST_CASE(HttpResponseLayerCreationTest);
PTF_TEST_CASE(HttpResponseLayerEditTest);

// Implemented in PPPoETests.cpp
PTF_TEST_CASE(PPPoESessionLayerParsingTest);
PTF_TEST_CASE(PPPoESessionLayerCreationTest);
PTF_TEST_CASE(PPPoEDiscoveryLayerParsingTest);
PTF_TEST_CASE(PPPoEDiscoveryLayerCreateTest);

// Implemented in DnsTests.cpp
PTF_TEST_CASE(DnsLayerParsingTest);
PTF_TEST_CASE(DnsLayerQueryCreationTest);
PTF_TEST_CASE(DnsLayerResourceCreationTest);
PTF_TEST_CASE(DnsLayerEditTest);
PTF_TEST_CASE(DnsLayerRemoveResourceTest);

// Implemented in IcmpTests.cpp
PTF_TEST_CASE(IcmpParsingTest);
PTF_TEST_CASE(IcmpCreationTest);
PTF_TEST_CASE(IcmpEditTest);

// Implemented in BgpTests.cpp
PTF_TEST_CASE(BgpLayerParsingTest);
PTF_TEST_CASE(BgpLayerCreationTest);
PTF_TEST_CASE(BgpLayerEditTest);