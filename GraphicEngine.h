#pragma once
#include "Engine.h"
#include "DisplayObject.h"
#include <list>

using namespace std;

class EngineManager;

class GraphicEngine : public Engine {

	EngineManager* engineManager;
	std::list<DisplayObject*> displayObjectList;

	Uint8 backgroundColor;

public:

	GraphicEngine(EngineManager*);
	~GraphicEngine(void);

	void process();
	void display();

	void addObject(DisplayObject*); //ici addDisplayObject(DisplayObject*)
	void removeObject(DisplayObject*); // ici RemoveDisplayObject(DisplayObject*)

};

