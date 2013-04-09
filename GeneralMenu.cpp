#include "Puissance4.h"
#include "GeneralMenu.h"
#include "Curseur.h"


GeneralMenu::GeneralMenu(Puissance4* puissance4P)
{
    puissance4 = puissance4P;
    curseur = NULL;
    grid = NULL;
}


GeneralMenu::~GeneralMenu(void)
{
}

void GeneralMenu::start() {
    curseur = new Curseur(puissance4->getEngineManager());
    grid = new Grid(puissance4->getEngineManager());
}

void GeneralMenu::stop() {
    delete grid;
    delete curseur;
}
