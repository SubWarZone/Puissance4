#include "InputEngine.h"
#include "SDL.h"
#include <iostream>

InputEngine::InputEngine(EngineManager* engineManagerP)
{
	display = true;
	toucheAppuyeeSpaceBar = false;
	engineManager = engineManagerP;
}

InputEngine::~InputEngine(void)
{
}

void InputEngine::addInputObject(InputObject* inputObject) {
    inputObjectList.push_front(inputObject);
}

void InputEngine::removeInputObject(InputObject* inputObject) {
    inputObjectList.remove(inputObject);
}

bool InputEngine::GetToucheAppuyeeSpaceBar() {
	return toucheAppuyeeSpaceBar;
}

bool InputEngine::GetDisplay() {
	return display;
}

void InputEngine::setDisplay(bool displayArg) {
    display = displayArg;
}

SDL_Event InputEngine::getSDL_Event() {
    return event;
}


void InputEngine::process() {
	//s'il y a des evenements en attente, on les gere
	while (SDL_PollEvent(&event))
	{
		// si l'utilisateur demande a fermer la fenetre, on quitte le programme
		if (event.type == SDL_QUIT)
			display = false;
		// si l'utilisateur a appuye sur une touche...
		if (event.type == SDL_KEYDOWN || event.type == SDL_KEYUP) {
            for (list<InputObject*>::iterator it = inputObjectList.begin(); it != inputObjectList.end(); it++) {
		        (*it)->process(event);// CEST LE PROCESS de l interface InputObject
	        }
		}
	}
}

