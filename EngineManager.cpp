#include "EngineManager.h"

class Puissance4;

EngineManager::EngineManager(Puissance4* puissance4P)
{
	inputEngine = new InputEngine(this);
	stateEngine = new StateEngine(this);
	graphicEngine = new GraphicEngine(this);
	engineList.push_front(inputEngine);
	engineList.push_back(stateEngine);
	engineList.push_back(graphicEngine);
	puissance4 = puissance4P;
    // new grille ou new manager ?
	

}

EngineManager::~EngineManager(void)
{

}

void EngineManager::start(SDL_Event* event)
{
	//while(inputEngine->GetDisplay()) {
	for (std::list<Engine*>::iterator it = engineList.begin(); it != engineList.end(); it++) {
		(*it)->process();
	}
    SDL_WaitEvent(event);
		// mettre statemanager en fonctionnement ?
		//temps avec sleep
	//}
}

//Getters
InputEngine* EngineManager::GetInputEngine()
{
	return inputEngine;
}

StateEngine* EngineManager::GetStateEngine()
{
	return stateEngine;
}

GraphicEngine* EngineManager::GetGraphicEngine()
{
	return graphicEngine;
}

Puissance4* EngineManager::getPuissance4() {
    return puissance4;
}
