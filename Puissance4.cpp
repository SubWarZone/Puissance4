#include "Puissance4.h"

Puissance4::Puissance4(void)
{
    engineManager = new EngineManager(this);
    stateManager = new StateManager(this);
}


Puissance4::~Puissance4(void)
{
}

void Puissance4::launch() {
    while(engineManager->GetInputEngine()->GetDisplay()) {
            engineManager->start();//rename start();
            stateManager->process();//rename process();
            
    }
}

EngineManager* Puissance4::getEngineManager() {
    return engineManager;
}

StateManager* Puissance4::getStateManager() {
    return stateManager;
}
