TEMPLATE = app
CONFIG += console
CONFIG -= qt


LIBS = `sdl-config --libs`

QMAKE_CXXFLAGS += -std=c++0x

SOURCES += \
    Token.cpp \
    StateManager.cpp \
    StateEngine.cpp \
    Puissance4.cpp \
    OptionMenu.cpp \
    Main.cpp \
    InputEngine.cpp \
    Grid.cpp \
    graphics.cpp \
    GraphicEngine.cpp \
    GeneralMenu.cpp \
    EngineManager.cpp \
    Curseur.cpp \
    CloseApplicationObject.cpp

HEADERS += \
    Token.h \
    StateManager.h \
    StateEngine.h \
    State.h \
    Puissance4.h \
    OptionMenu.h \
    InputObject.h \
    InputEngine.h \
    Grid.h \
    graphics.h \
    GraphicEngine.h \
    GeneralMenu.h \
    EngineManager.h \
    Engine.h \
    DisplayObject.h \
    Curseur.h \
    ComputeObject.h \
    CloseApplicationObject.h

