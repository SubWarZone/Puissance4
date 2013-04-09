#include "Token.h"
#include "graphics.h"
#include "EngineManager.h"

SDL_Surface *imageOptionMenu =NULL;

Token::Token(EngineManager* engineManagerP)
{
    engineManager = engineManagerP;
    if( imageOptionMenu == NULL){
	    imageOptionMenu = SDL_LoadBMP("Images/OptionMenu.bmp");
	}
    engineManager->GetGraphicEngine()->addObject(this);
	engineManager->GetStateEngine()->addComputeObject(this);
}


Token::~Token(void)
{
    engineManager->GetGraphicEngine()->removeObject(this);
	engineManager->GetStateEngine()->removeComputeObject(this);
}

void Token::compute() {

}

void Token::display() {
    Graphics::display_image(imageOptionMenu,0,0);
}
