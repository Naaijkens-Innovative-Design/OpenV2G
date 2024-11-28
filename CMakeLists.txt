# SPDX-License-Identifier: Apache-2.0

if(CONFIG_OPENV2G)
  zephyr_interface_library_named(OPENV2G)

  zephyr_include_directories(
    src
    src/appHandshake
    src/codec
    src/din
    src/iso1
    src/iso2
    src/transport
    src/xmldsig
  )

  zephyr_library()
  zephyr_library_sources(
    src/projectExiConnector.c
    src/appHandshake/appHandEXIDatatypes.c
    src/appHandshake/appHandEXIDatatypesDecoder.c
    src/appHandshake/appHandEXIDatatypesEncoder.c
    src/codec/BitInputStream.c
    src/codec/BitOutputStream.c
    src/codec/ByteStream.c
    src/codec/DecoderChannel.c
    src/codec/EncoderChannel.c
    src/codec/EXIHeaderDecoder.c
    src/codec/EXIHeaderEncoder.c
    src/codec/MethodsBag.c
    src/din/dinEXIDatatypes.c
    src/din/dinEXIDatatypesDecoder.c
    src/din/dinEXIDatatypesEncoder.c
  )

  zephyr_library_sources_ifdef(ONFIG_OPENV2G_ISO1 src/iso1/iso1EXIDatatypes.c)
  zephyr_library_sources_ifdef(CONFIG_(OPENV2G_ISO1 src/iso1/iso1EXIDatatypesDecoder.c)
  zephyr_library_sources_ifdefCONFIG_OPENV2G_ISO1 src/iso1/iso1EXIDatatypesEncoder.c)
  zephyr_library_sources_ifdef(CONFIG_OPENV2G_ISO2 src/iso2/iso2EXIDatatypes.c)
  zephyr_library_sources_ifdef(CONFIG_OPENV2G_ISO2 src/iso2/iso2EXIDatatypesDecoder.c)
  zephyr_library_sources_ifdef(CONFIG_OPENV2G_ISO2 src/iso2/iso2EXIDatatypesEncoder.c)
  zephyr_library_sources_ifdef(CONFIG_OPENV2G_TP src/transport/v2gtp.c)
  zephyr_library_sources_ifdef(CONFIG_OPENV2G_XMLDSIG src/xmldsig/xmldsigEXIDatatypes.c)
  zephyr_library_sources_ifdef(CONFIG_OPENV2G_XMLDSIG src/xmldsig/xmldsigEXIDatatypesDecoder.c)
  zephyr_library_sources_ifdef(CONFIG_OPENV2G_XMLDSIG src/xmldsig/xmldsigEXIDatatypesEncoder.c)

  zephyr_library_link_libraries(OPENV2G)
  target_link_libraries(OPENV2G INTERFACE zephyr_interface)
endif()
