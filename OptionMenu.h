#pragma once
#include "State.h"
#include "Token.h"
#include "Curseur.h"
#include "CloseApplicationObject.h"

class Puissance4;

class OptionMenu: public State
{
public:
    OptionMenu(Puissance4*);
    ~OptionMenu(void);

    void start();
    void stop();

private:
    Puissance4* puissance4;
    Curseur* curseur;
    Token* token;
    CloseApplicationObject* closeApplicationObject;
};

