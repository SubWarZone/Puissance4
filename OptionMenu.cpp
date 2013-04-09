#include "OptionMenu.h"
#include "Puissance4.h"
#include "graphics.h"

OptionMenu::OptionMenu(Puissance4* puissance4P)
{
    puissance4 = puissance4P;
    curseur = NULL;
    token = NULL;
    closeApplicationObject = NULL;
}


OptionMenu::~OptionMenu(void)
{
}

void OptionMenu::start() {
    curseur = new Curseur(puissance4->getEngineManager());
    token = new Token(puissance4->getEngineManager());
    closeApplicationObject = new CloseApplicationObject(puissance4->getEngineManager());
}

void OptionMenu::stop() {
    delete token;
    delete curseur;
    delete closeApplicationObject;
}