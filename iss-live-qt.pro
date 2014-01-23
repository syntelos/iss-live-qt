TEMPLATE = app
TARGET = iss-live

QT += network

CONFIG += debug

INCLUDEPATH += . 

HEADERS += HTTPStreamChunk.h \
           HTTPStreamClient.h \
           HTTPStreamHeader.h \
           HTTPStreamIO.h \
           HTTPStreamRequest.h \
           HTTPStreamResponse.h \
           ISSLClientCatalog.h \
           ISSLClientDataChunk.h \
           ISSLClientData.h \
           ISSLClientIO.h \
           ISSLClientSession.h


SOURCES += HTTPStreamChunk.cpp \
           HTTPStreamClient.cpp \
           HTTPStreamIO.cpp \
           HTTPStreamRequest.cpp \
           HTTPStreamResponse.cpp \
           ISSLClientCatalog.cpp \
           ISSLClientIO.cpp \
           ISSLClientDataChunk.cpp \
           ISSLClientData.cpp \
           ISSLClientSession.cpp \
           Main.cpp
