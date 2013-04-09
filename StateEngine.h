#pragma once
#include <list>

#include "Engine.h"
#include "ComputeObject.h"


class EngineManager;

class StateEngine : public Engine {

	EngineManager* engineManager;
	std::list<ComputeObject*> computeObjectList;
public:
	StateEngine(void);
	StateEngine(EngineManager*);
	~StateEngine(void);
	void process();

	void addComputeObject(ComputeObject*);
	void removeComputeObject(ComputeObject*);
};

