#pragma once
#include "InputObject.h"
#include "DisplayObject.h"
#include "ComputeObject.h"


class EngineManager;


class Curseur : public InputObject, public DisplayObject, public ComputeObject
{
public:
    Curseur(EngineManager*);
    ~Curseur(void);

    void process(SDL_Event);
    void compute();
    void display();

private:
EngineManager* engineManager;
bool moveCursorLeft;
bool moveCursorRight;
};

