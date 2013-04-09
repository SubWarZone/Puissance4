#pragma once
#include "State.h"
#include "Curseur.h"
#include "Grid.h"

class Puissance4;

class GeneralMenu : public State
{
public:
    GeneralMenu(Puissance4*);
    ~GeneralMenu(void);

    void start();
    void stop();
private:
    Puissance4* puissance4;
    Curseur* curseur;
    Grid* grid;
};

