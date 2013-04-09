#pragma once
#include "graphics.h"
class InputObject
{
public:

    virtual ~InputObject(void);
    virtual void process(SDL_Event) = 0;
};
inline InputObject::~InputObject() {};

