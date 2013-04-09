#pragma once
#include "EngineManager.h"
#include "StateManager.h"

class Puissance4
{
    EngineManager* engineManager;
    StateManager* stateManager;
public:
    Puissance4(void);
    ~Puissance4(void);

    void launch();
    EngineManager* getEngineManager();
    StateManager* getStateManager();
};

