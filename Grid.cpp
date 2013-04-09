#include "EngineManager.h"
#include "graphics.h"

#include "Grid.h"

SDL_Surface *image =NULL;

Grid::Grid(EngineManager* engineManagerP) {
	engineManager = engineManagerP;
	adjacencyMatrix = new bool [6][7];
	
	if( image == NULL){
	 image = SDL_LoadBMP("Images/grille.bmp");
	}
	
	engineManager->GetGraphicEngine()->addObject(this);
	engineManager->GetStateEngine()->addComputeObject(this);
	
}
Grid::~Grid() {
	engineManager->GetGraphicEngine()->removeObject(this);
	engineManager->GetStateEngine()->removeComputeObject(this);
}

void Grid::display() {
	Graphics::display_image( image,0,0);
	
}
void Grid::compute() {
	
}
