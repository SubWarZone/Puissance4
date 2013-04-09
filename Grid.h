#pragma once
#include "Grid.h"
#include "ComputeObject.h"
#include "DisplayObject.h"

class EngineManager;

class Grid : public ComputeObject, DisplayObject {
private:
    EngineManager* engineManager;
	bool adjacencyMatrix;


public:
	Grid(EngineManager*);
	~Grid(void);

	void display();
	void compute();
};
