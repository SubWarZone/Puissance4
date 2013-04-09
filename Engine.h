#pragma once
class Engine {
public:
	virtual ~ Engine(void);
	virtual void process() = 0;

};
inline Engine::~Engine() {}; //on specifie le destructeur, on est obliger d implementer le destructeur

