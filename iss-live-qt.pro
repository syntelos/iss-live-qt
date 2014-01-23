TEMPLATE = app
TARGET = iss-live
DEPENDPATH += . schema
INCLUDEPATH += . schema

QT += gui
QT += network

CONFIG += debug

HEADERS += HTTPStreamChunk.h \
           HTTPStreamClient.h \
           HTTPStreamHeader.h \
           HTTPStreamIO.h \
           HTTPStreamRequest.h \
           HTTPStreamResponse.h \
           ISSLClient.h \
           ISSLClientCatalog.h \
           ISSLClientData.h \
           ISSLClientDataChunk.h \
           ISSLClientIO.h \
           ISSLClientSession.h \
           ISSLConsole.h \
           ISSLSchema.h \
           ISSLSchematic.h \
           Main.h \
           schema/ADCO.h \
           schema/AIRLOCK000001.h \
           schema/AIRLOCK000002.h \
           schema/AIRLOCK000003.h \
           schema/AIRLOCK000004.h \
           schema/AIRLOCK000005.h \
           schema/AIRLOCK000006.h \
           schema/AIRLOCK000007.h \
           schema/AIRLOCK000008.h \
           schema/AIRLOCK000009.h \
           schema/AIRLOCK000010.h \
           schema/AIRLOCK000011.h \
           schema/AIRLOCK000012.h \
           schema/AIRLOCK000013.h \
           schema/AIRLOCK000014.h \
           schema/AIRLOCK000015.h \
           schema/AIRLOCK000016.h \
           schema/AIRLOCK000017.h \
           schema/AIRLOCK000018.h \
           schema/AIRLOCK000019.h \
           schema/AIRLOCK000020.h \
           schema/AIRLOCK000021.h \
           schema/AIRLOCK000022.h \
           schema/AIRLOCK000023.h \
           schema/AIRLOCK000024.h \
           schema/AIRLOCK000025.h \
           schema/AIRLOCK000026.h \
           schema/AIRLOCK000027.h \
           schema/AIRLOCK000028.h \
           schema/AIRLOCK000029.h \
           schema/AIRLOCK000030.h \
           schema/AIRLOCK000031.h \
           schema/AIRLOCK000032.h \
           schema/AIRLOCK000033.h \
           schema/AIRLOCK000034.h \
           schema/AIRLOCK000035.h \
           schema/AIRLOCK000036.h \
           schema/AIRLOCK000037.h \
           schema/AIRLOCK000038.h \
           schema/AIRLOCK000039.h \
           schema/AIRLOCK000040.h \
           schema/AIRLOCK000041.h \
           schema/AIRLOCK000042.h \
           schema/AIRLOCK000043.h \
           schema/AIRLOCK000044.h \
           schema/AIRLOCK000045.h \
           schema/AIRLOCK000046.h \
           schema/AIRLOCK000047.h \
           schema/AIRLOCK000048.h \
           schema/AIRLOCK000049.h \
           schema/AIRLOCK000050.h \
           schema/AIRLOCK000051.h \
           schema/AIRLOCK000052.h \
           schema/AIRLOCK000053.h \
           schema/AIRLOCK000054.h \
           schema/AIRLOCK000055.h \
           schema/AIRLOCK000056.h \
           schema/AIRLOCK000057.h \
           schema/AIRLOCK000058.h \
           schema/CRONUS.h \
           schema/ETHOS.h \
           schema/EVA.h \
           schema/NA.h \
           schema/NODE1000001.h \
           schema/NODE1000002.h \
           schema/NODE2000001.h \
           schema/NODE2000002.h \
           schema/NODE2000003.h \
           schema/NODE2000004.h \
           schema/NODE2000005.h \
           schema/NODE2000006.h \
           schema/NODE2000007.h \
           schema/NODE3000001.h \
           schema/NODE3000002.h \
           schema/NODE3000003.h \
           schema/NODE3000004.h \
           schema/NODE3000005.h \
           schema/NODE3000006.h \
           schema/NODE3000007.h \
           schema/NODE3000008.h \
           schema/NODE3000009.h \
           schema/NODE3000010.h \
           schema/NODE3000011.h \
           schema/NODE3000012.h \
           schema/NODE3000013.h \
           schema/NODE3000014.h \
           schema/NODE3000015.h \
           schema/NODE3000016.h \
           schema/NODE3000017.h \
           schema/NODE3000018.h \
           schema/NODE3000019.h \
           schema/NODE3000020.h \
           schema/P1000001.h \
           schema/P1000002.h \
           schema/P1000003.h \
           schema/P1000004.h \
           schema/P1000005.h \
           schema/P1000006.h \
           schema/P1000007.h \
           schema/P1000008.h \
           schema/P1000009.h \
           schema/P3000001.h \
           schema/P3000002.h \
           schema/P4000001.h \
           schema/P4000002.h \
           schema/P4000003.h \
           schema/P4000004.h \
           schema/P4000005.h \
           schema/P4000006.h \
           schema/P4000007.h \
           schema/P4000008.h \
           schema/P6000001.h \
           schema/P6000002.h \
           schema/P6000003.h \
           schema/P6000004.h \
           schema/P6000005.h \
           schema/P6000006.h \
           schema/P6000007.h \
           schema/P6000008.h \
           schema/S0000001.h \
           schema/S0000002.h \
           schema/S0000003.h \
           schema/S0000004.h \
           schema/S0000005.h \
           schema/S0000006.h \
           schema/S0000007.h \
           schema/S0000008.h \
           schema/S0000009.h \
           schema/S0000010.h \
           schema/S0000011.h \
           schema/S0000012.h \
           schema/S0000013.h \
           schema/S1000001.h \
           schema/S1000002.h \
           schema/S1000003.h \
           schema/S1000004.h \
           schema/S1000005.h \
           schema/S1000006.h \
           schema/S1000007.h \
           schema/S1000008.h \
           schema/S1000009.h \
           schema/S3000001.h \
           schema/S3000002.h \
           schema/S4000001.h \
           schema/S4000002.h \
           schema/S4000003.h \
           schema/S4000004.h \
           schema/S4000005.h \
           schema/S4000006.h \
           schema/S4000007.h \
           schema/S4000008.h \
           schema/S6000001.h \
           schema/S6000002.h \
           schema/S6000003.h \
           schema/S6000004.h \
           schema/S6000005.h \
           schema/S6000006.h \
           schema/S6000007.h \
           schema/S6000008.h \
           schema/SPARTAN.h \
           schema/TIME_000001.h \
           schema/TIME_000002.h \
           schema/TOPO.h \
           schema/USLAB000001.h \
           schema/USLAB000002.h \
           schema/USLAB000003.h \
           schema/USLAB000004.h \
           schema/USLAB000005.h \
           schema/USLAB000006.h \
           schema/USLAB000007.h \
           schema/USLAB000008.h \
           schema/USLAB000009.h \
           schema/USLAB000010.h \
           schema/USLAB000011.h \
           schema/USLAB000012.h \
           schema/USLAB000013.h \
           schema/USLAB000014.h \
           schema/USLAB000015.h \
           schema/USLAB000016.h \
           schema/USLAB000017.h \
           schema/USLAB000018.h \
           schema/USLAB000019.h \
           schema/USLAB000020.h \
           schema/USLAB000021.h \
           schema/USLAB000022.h \
           schema/USLAB000023.h \
           schema/USLAB000024.h \
           schema/USLAB000025.h \
           schema/USLAB000026.h \
           schema/USLAB000027.h \
           schema/USLAB000028.h \
           schema/USLAB000029.h \
           schema/USLAB000030.h \
           schema/USLAB000031.h \
           schema/USLAB000032.h \
           schema/USLAB000033.h \
           schema/USLAB000034.h \
           schema/USLAB000035.h \
           schema/USLAB000036.h \
           schema/USLAB000037.h \
           schema/USLAB000038.h \
           schema/USLAB000039.h \
           schema/USLAB000040.h \
           schema/USLAB000041.h \
           schema/USLAB000042.h \
           schema/USLAB000043.h \
           schema/USLAB000044.h \
           schema/USLAB000045.h \
           schema/USLAB000046.h \
           schema/USLAB000047.h \
           schema/USLAB000048.h \
           schema/USLAB000049.h \
           schema/USLAB000050.h \
           schema/USLAB000051.h \
           schema/USLAB000052.h \
           schema/USLAB000053.h \
           schema/USLAB000054.h \
           schema/USLAB000055.h \
           schema/USLAB000056.h \
           schema/USLAB000057.h \
           schema/USLAB000058.h \
           schema/USLAB000059.h \
           schema/USLAB000060.h \
           schema/USLAB000061.h \
           schema/USLAB000062.h \
           schema/USLAB000063.h \
           schema/USLAB000064.h \
           schema/USLAB000065.h \
           schema/USLAB000066.h \
           schema/USLAB000067.h \
           schema/USLAB000068.h \
           schema/USLAB000069.h \
           schema/USLAB000070.h \
           schema/USLAB000071.h \
           schema/USLAB000072.h \
           schema/USLAB000073.h \
           schema/USLAB000074.h \
           schema/USLAB000075.h \
           schema/USLAB000076.h \
           schema/USLAB000077.h \
           schema/USLAB000078.h \
           schema/USLAB000079.h \
           schema/USLAB000080.h \
           schema/USLAB000081.h \
           schema/USLAB000082.h \
           schema/USLAB000083.h \
           schema/USLAB000084.h \
           schema/USLAB000085.h \
           schema/USLAB000086.h \
           schema/USLAB000087.h \
           schema/USLAB000088.h \
           schema/USLAB000089.h \
           schema/USLAB000090.h \
           schema/USLAB000091.h \
           schema/USLAB000092.h \
           schema/USLAB000093.h \
           schema/USLAB000094.h \
           schema/USLAB000095.h \
           schema/USLAB000096.h \
           schema/USLAB000097.h \
           schema/USLAB000098.h \
           schema/USLAB000099.h \
           schema/USLAB000100.h \
           schema/USLAB000101.h \
           schema/USLAB000102.h \
           schema/VVO.h \
           schema/Z1000001.h \
           schema/Z1000002.h \
           schema/Z1000003.h \
           schema/Z1000004.h \
           schema/Z1000005.h \
           schema/Z1000006.h \
           schema/Z1000007.h \
           schema/Z1000008.h \
           schema/Z1000009.h \
           schema/Z1000010.h \
           schema/Z1000011.h \
           schema/Z1000012.h \
           schema/Z1000013.h \
           schema/Z1000014.h \
           schema/Z1000015.h

SOURCES += HTTPStreamChunk.cpp \
           HTTPStreamClient.cpp \
           HTTPStreamIO.cpp \
           HTTPStreamRequest.cpp \
           HTTPStreamResponse.cpp \
           ISSLClient.cpp \
           ISSLClientCatalog.cpp \
           ISSLClientData.cpp \
           ISSLClientDataChunk.cpp \
           ISSLClientIO.cpp \
           ISSLClientSession.cpp \
           ISSLConsole.cpp \
           ISSLSchema.cpp \
           Main.cpp \
           schema/ADCO.cpp \
           schema/AIRLOCK000001.cpp \
           schema/AIRLOCK000002.cpp \
           schema/AIRLOCK000003.cpp \
           schema/AIRLOCK000004.cpp \
           schema/AIRLOCK000005.cpp \
           schema/AIRLOCK000006.cpp \
           schema/AIRLOCK000007.cpp \
           schema/AIRLOCK000008.cpp \
           schema/AIRLOCK000009.cpp \
           schema/AIRLOCK000010.cpp \
           schema/AIRLOCK000011.cpp \
           schema/AIRLOCK000012.cpp \
           schema/AIRLOCK000013.cpp \
           schema/AIRLOCK000014.cpp \
           schema/AIRLOCK000015.cpp \
           schema/AIRLOCK000016.cpp \
           schema/AIRLOCK000017.cpp \
           schema/AIRLOCK000018.cpp \
           schema/AIRLOCK000019.cpp \
           schema/AIRLOCK000020.cpp \
           schema/AIRLOCK000021.cpp \
           schema/AIRLOCK000022.cpp \
           schema/AIRLOCK000023.cpp \
           schema/AIRLOCK000024.cpp \
           schema/AIRLOCK000025.cpp \
           schema/AIRLOCK000026.cpp \
           schema/AIRLOCK000027.cpp \
           schema/AIRLOCK000028.cpp \
           schema/AIRLOCK000029.cpp \
           schema/AIRLOCK000030.cpp \
           schema/AIRLOCK000031.cpp \
           schema/AIRLOCK000032.cpp \
           schema/AIRLOCK000033.cpp \
           schema/AIRLOCK000034.cpp \
           schema/AIRLOCK000035.cpp \
           schema/AIRLOCK000036.cpp \
           schema/AIRLOCK000037.cpp \
           schema/AIRLOCK000038.cpp \
           schema/AIRLOCK000039.cpp \
           schema/AIRLOCK000040.cpp \
           schema/AIRLOCK000041.cpp \
           schema/AIRLOCK000042.cpp \
           schema/AIRLOCK000043.cpp \
           schema/AIRLOCK000044.cpp \
           schema/AIRLOCK000045.cpp \
           schema/AIRLOCK000046.cpp \
           schema/AIRLOCK000047.cpp \
           schema/AIRLOCK000048.cpp \
           schema/AIRLOCK000049.cpp \
           schema/AIRLOCK000050.cpp \
           schema/AIRLOCK000051.cpp \
           schema/AIRLOCK000052.cpp \
           schema/AIRLOCK000053.cpp \
           schema/AIRLOCK000054.cpp \
           schema/AIRLOCK000055.cpp \
           schema/AIRLOCK000056.cpp \
           schema/AIRLOCK000057.cpp \
           schema/AIRLOCK000058.cpp \
           schema/CRONUS.cpp \
           schema/ETHOS.cpp \
           schema/EVA.cpp \
           schema/NA.cpp \
           schema/NODE1000001.cpp \
           schema/NODE1000002.cpp \
           schema/NODE2000001.cpp \
           schema/NODE2000002.cpp \
           schema/NODE2000003.cpp \
           schema/NODE2000004.cpp \
           schema/NODE2000005.cpp \
           schema/NODE2000006.cpp \
           schema/NODE2000007.cpp \
           schema/NODE3000001.cpp \
           schema/NODE3000002.cpp \
           schema/NODE3000003.cpp \
           schema/NODE3000004.cpp \
           schema/NODE3000005.cpp \
           schema/NODE3000006.cpp \
           schema/NODE3000007.cpp \
           schema/NODE3000008.cpp \
           schema/NODE3000009.cpp \
           schema/NODE3000010.cpp \
           schema/NODE3000011.cpp \
           schema/NODE3000012.cpp \
           schema/NODE3000013.cpp \
           schema/NODE3000014.cpp \
           schema/NODE3000015.cpp \
           schema/NODE3000016.cpp \
           schema/NODE3000017.cpp \
           schema/NODE3000018.cpp \
           schema/NODE3000019.cpp \
           schema/NODE3000020.cpp \
           schema/P1000001.cpp \
           schema/P1000002.cpp \
           schema/P1000003.cpp \
           schema/P1000004.cpp \
           schema/P1000005.cpp \
           schema/P1000006.cpp \
           schema/P1000007.cpp \
           schema/P1000008.cpp \
           schema/P1000009.cpp \
           schema/P3000001.cpp \
           schema/P3000002.cpp \
           schema/P4000001.cpp \
           schema/P4000002.cpp \
           schema/P4000003.cpp \
           schema/P4000004.cpp \
           schema/P4000005.cpp \
           schema/P4000006.cpp \
           schema/P4000007.cpp \
           schema/P4000008.cpp \
           schema/P6000001.cpp \
           schema/P6000002.cpp \
           schema/P6000003.cpp \
           schema/P6000004.cpp \
           schema/P6000005.cpp \
           schema/P6000006.cpp \
           schema/P6000007.cpp \
           schema/P6000008.cpp \
           schema/S0000001.cpp \
           schema/S0000002.cpp \
           schema/S0000003.cpp \
           schema/S0000004.cpp \
           schema/S0000005.cpp \
           schema/S0000006.cpp \
           schema/S0000007.cpp \
           schema/S0000008.cpp \
           schema/S0000009.cpp \
           schema/S0000010.cpp \
           schema/S0000011.cpp \
           schema/S0000012.cpp \
           schema/S0000013.cpp \
           schema/S1000001.cpp \
           schema/S1000002.cpp \
           schema/S1000003.cpp \
           schema/S1000004.cpp \
           schema/S1000005.cpp \
           schema/S1000006.cpp \
           schema/S1000007.cpp \
           schema/S1000008.cpp \
           schema/S1000009.cpp \
           schema/S3000001.cpp \
           schema/S3000002.cpp \
           schema/S4000001.cpp \
           schema/S4000002.cpp \
           schema/S4000003.cpp \
           schema/S4000004.cpp \
           schema/S4000005.cpp \
           schema/S4000006.cpp \
           schema/S4000007.cpp \
           schema/S4000008.cpp \
           schema/S6000001.cpp \
           schema/S6000002.cpp \
           schema/S6000003.cpp \
           schema/S6000004.cpp \
           schema/S6000005.cpp \
           schema/S6000006.cpp \
           schema/S6000007.cpp \
           schema/S6000008.cpp \
           schema/SPARTAN.cpp \
           schema/TIME_000001.cpp \
           schema/TIME_000002.cpp \
           schema/TOPO.cpp \
           schema/USLAB000001.cpp \
           schema/USLAB000002.cpp \
           schema/USLAB000003.cpp \
           schema/USLAB000004.cpp \
           schema/USLAB000005.cpp \
           schema/USLAB000006.cpp \
           schema/USLAB000007.cpp \
           schema/USLAB000008.cpp \
           schema/USLAB000009.cpp \
           schema/USLAB000010.cpp \
           schema/USLAB000011.cpp \
           schema/USLAB000012.cpp \
           schema/USLAB000013.cpp \
           schema/USLAB000014.cpp \
           schema/USLAB000015.cpp \
           schema/USLAB000016.cpp \
           schema/USLAB000017.cpp \
           schema/USLAB000018.cpp \
           schema/USLAB000019.cpp \
           schema/USLAB000020.cpp \
           schema/USLAB000021.cpp \
           schema/USLAB000022.cpp \
           schema/USLAB000023.cpp \
           schema/USLAB000024.cpp \
           schema/USLAB000025.cpp \
           schema/USLAB000026.cpp \
           schema/USLAB000027.cpp \
           schema/USLAB000028.cpp \
           schema/USLAB000029.cpp \
           schema/USLAB000030.cpp \
           schema/USLAB000031.cpp \
           schema/USLAB000032.cpp \
           schema/USLAB000033.cpp \
           schema/USLAB000034.cpp \
           schema/USLAB000035.cpp \
           schema/USLAB000036.cpp \
           schema/USLAB000037.cpp \
           schema/USLAB000038.cpp \
           schema/USLAB000039.cpp \
           schema/USLAB000040.cpp \
           schema/USLAB000041.cpp \
           schema/USLAB000042.cpp \
           schema/USLAB000043.cpp \
           schema/USLAB000044.cpp \
           schema/USLAB000045.cpp \
           schema/USLAB000046.cpp \
           schema/USLAB000047.cpp \
           schema/USLAB000048.cpp \
           schema/USLAB000049.cpp \
           schema/USLAB000050.cpp \
           schema/USLAB000051.cpp \
           schema/USLAB000052.cpp \
           schema/USLAB000053.cpp \
           schema/USLAB000054.cpp \
           schema/USLAB000055.cpp \
           schema/USLAB000056.cpp \
           schema/USLAB000057.cpp \
           schema/USLAB000058.cpp \
           schema/USLAB000059.cpp \
           schema/USLAB000060.cpp \
           schema/USLAB000061.cpp \
           schema/USLAB000062.cpp \
           schema/USLAB000063.cpp \
           schema/USLAB000064.cpp \
           schema/USLAB000065.cpp \
           schema/USLAB000066.cpp \
           schema/USLAB000067.cpp \
           schema/USLAB000068.cpp \
           schema/USLAB000069.cpp \
           schema/USLAB000070.cpp \
           schema/USLAB000071.cpp \
           schema/USLAB000072.cpp \
           schema/USLAB000073.cpp \
           schema/USLAB000074.cpp \
           schema/USLAB000075.cpp \
           schema/USLAB000076.cpp \
           schema/USLAB000077.cpp \
           schema/USLAB000078.cpp \
           schema/USLAB000079.cpp \
           schema/USLAB000080.cpp \
           schema/USLAB000081.cpp \
           schema/USLAB000082.cpp \
           schema/USLAB000083.cpp \
           schema/USLAB000084.cpp \
           schema/USLAB000085.cpp \
           schema/USLAB000086.cpp \
           schema/USLAB000087.cpp \
           schema/USLAB000088.cpp \
           schema/USLAB000089.cpp \
           schema/USLAB000090.cpp \
           schema/USLAB000091.cpp \
           schema/USLAB000092.cpp \
           schema/USLAB000093.cpp \
           schema/USLAB000094.cpp \
           schema/USLAB000095.cpp \
           schema/USLAB000096.cpp \
           schema/USLAB000097.cpp \
           schema/USLAB000098.cpp \
           schema/USLAB000099.cpp \
           schema/USLAB000100.cpp \
           schema/USLAB000101.cpp \
           schema/USLAB000102.cpp \
           schema/VVO.cpp \
           schema/Z1000001.cpp \
           schema/Z1000002.cpp \
           schema/Z1000003.cpp \
           schema/Z1000004.cpp \
           schema/Z1000005.cpp \
           schema/Z1000006.cpp \
           schema/Z1000007.cpp \
           schema/Z1000008.cpp \
           schema/Z1000009.cpp \
           schema/Z1000010.cpp \
           schema/Z1000011.cpp \
           schema/Z1000012.cpp \
           schema/Z1000013.cpp \
           schema/Z1000014.cpp \
           schema/Z1000015.cpp
