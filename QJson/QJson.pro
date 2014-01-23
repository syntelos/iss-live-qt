TEMPLATE = lib
TARGET = QJson
DEPENDPATH += .
INCLUDEPATH += .

HEADERS += FlexLexer.h \
           json_parser.hh \
           json_scanner.h \
           location.hh \
           parser_p.h \
           parserrunnable.h \
           position.hh \
           qjson_debug.h \
           qjson_export.h \
           QJsonParser.h \
           QJsonSerializer.h \
           qobjecthelper.h \
           serializerrunnable.h \
           stack.hh \
           json_scanner.cc

SOURCES += json_parser.cc \
           json_scanner.cc \
           json_scanner.cpp \
           parser.cpp \
           parserrunnable.cpp \
           qobjecthelper.cpp \
           serializer.cpp \
           serializerrunnable.cpp

