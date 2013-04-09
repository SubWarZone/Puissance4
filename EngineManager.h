#pragma once
#include <list>
#include <iostream>
#include "Engine.h"
#include "StateEngine.h"
#include "InputEngine.h"
#include "GraphicEngine.h"

class Puissance4;

class EngineManager {

	Puissance4* puissance4;
    InputEngine* inputEngine;
	StateEngine* stateEngine;
	GraphicEngine* graphicEngine;	

	std::list<Engine*> engineList;

public:

	EngineManager(Puissance4*);
	~EngineManager(void);

	void start();

	InputEngine* GetInputEngine();
	StateEngine* GetStateEngine();
	GraphicEngine* GetGraphicEngine();
    Puissance4* getPuissance4();

};

