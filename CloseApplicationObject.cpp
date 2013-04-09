#include "CloseApplicationObject.h"
#include "EngineManager.h"


CloseApplicationObject::CloseApplicationObject(EngineManager* engineManagerP)
{
    engineManager = engineManagerP;
    powerOn = true;
    engineManager->GetInputEngine()->addInputObject(this);
}


CloseApplicationObject::~CloseApplicationObject(void)
{
    engineManager->GetInputEngine()->removeInputObject(this);
}

void CloseApplicationObject::process(SDL_Event event) {
        switch (event.key.keysym.sym)
    {
	    case SDLK_q :
            engineManager->GetInputEngine()->setDisplay(event.type == SDL_KEYDOWN);
		    break;
		default :
			//std::cout << "touche appuyee\n";
		break;
    }
}
