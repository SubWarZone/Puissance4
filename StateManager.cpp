#include "StateManager.h"
#include "GeneralMenu.h"
#include "Puissance4.h"
#include "OptionMenu.h"

StateManager::StateManager(void) {
    
}

StateManager::StateManager(Puissance4* puissance4P)
{
    //nbTour = 0;
    puissance4 = puissance4P;
    currentType = StateType::NONE;
    nextType = StateType::GENERAL_MENU;
    states.insert(std::pair<StateType, State*>(GENERAL_MENU, new GeneralMenu(puissance4)));
    states.insert(std::pair<StateType, State*>(OPTION, new OptionMenu(puissance4)));
    //states.insert(std::pair<StateType, State*>(OPTION, new 
    
/*    std::map<StateType, State*>::iterator it = states.find(currentType); // find (=) get ,  sauf que sa return un iterator qui pointe vers un element
    if (it != states.end()) { // soit cest l element qu on cherche, soit cest la fin de la map
        State* state = it->second;
    }*/
}

StateManager::~StateManager(void)
{

}

void StateManager::setNxtMenu(StateType type) {
    nextType = type;
}

//changer la methode start en process

/*On souhaite changer d etat:
si notre prochainEtat != de l actuelle alors cest bon, on peut changer. 
on    state->stop()  l etat actuel
et on state->start() l etat suivant

*/
void StateManager::process() {
    if(nextType != currentType) {
        std::map<StateType, State*>::iterator it = states.find(currentType);
        if (it != states.end()) { // si on a pas trouver currentType
            State* state = it->second;
            state->stop();
        } 
        currentType = nextType;
        std::map<StateType, State*>::iterator it2 = states.find(currentType);
        if (it2 != states.end()) { 
            State* state = it2->second;
            state->start();
        }        
    }
    nbTour++;
}

Puissance4* StateManager::getPuissance4() {
    return puissance4;
}
