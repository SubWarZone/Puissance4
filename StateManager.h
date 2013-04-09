#pragma once
#include "State.h"
#include <map>

class Puissance4;

class StateManager
{

public:
    enum StateType {NONE, GENERAL_MENU, OPTION, WIN};
    StateType currentType;
    
    StateType nextType;    

    StateManager(void);
    StateManager(Puissance4*);
    ~StateManager(void);

    void process();
    void setNxtMenu(StateType);

    Puissance4* getPuissance4();


protected:
    int nbTour;
    Puissance4* puissance4;
    std::map<StateType, State*> states;
};

