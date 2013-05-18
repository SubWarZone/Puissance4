#include "Curseur.h"
#include "graphics.h"
#include "EngineManager.h"
#include "Puissance4.h"
#include "StateManager.h"

SDL_Surface *image3 =NULL;

Curseur::Curseur(EngineManager* engineManagerP)
{
    engineManager = engineManagerP;
    moveCursorLeft = false;
    moveCursorRight = false;
    engineManager->GetGraphicEngine()->addObject(this);
	engineManager->GetStateEngine()->addComputeObject(this);
    engineManager->GetInputEngine()->addInputObject(this);
    if( image3 == NULL){
	    image3 = SDL_LoadBMP("Images/curseur.bmp");
	}
}


Curseur::~Curseur(void)
{
    engineManager->GetGraphicEngine()->removeObject(this);
	engineManager->GetStateEngine()->removeComputeObject(this);
    engineManager->GetInputEngine()->removeInputObject(this);
}

void Curseur::process(SDL_Event event) {
    /* switch pour savoir quelle touche est appuyée */
    switch (event.key.keysym.sym)
    {
	    case SDLK_LEFT :
            moveCursorLeft = event.type == SDL_KEYDOWN;
		    break;
	    case SDLK_RIGHT :
            moveCursorRight = event.type == SDL_KEYDOWN;
		    break;
		default :
			//std::cout << "touche appuyee\n";
			break;
    }
}

void Curseur::compute() {
    if(moveCursorLeft) {
        engineManager->getPuissance4()->getStateManager()->setNxtMenu(StateManager::StateType::OPTION);
    }
    if(moveCursorRight) {
        engineManager->getPuissance4()->getStateManager()->setNxtMenu(StateManager::StateType::GENERAL_MENU);
    }
}

void Curseur::display() {
    Graphics::display_image(image3,0,0);

}
