#pragma once
#include "InputEngine.h"

class EngineManager;

class CloseApplicationObject : public InputObject
{
public:
    CloseApplicationObject(EngineManager*);
    ~CloseApplicationObject(void);
    
    void process(SDL_Event);
private:
    EngineManager* engineManager;
    bool powerOn;
};

