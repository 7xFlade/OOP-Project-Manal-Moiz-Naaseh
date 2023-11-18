#include "SelectBird.hpp"

SelectBird::SelectBird(){
    isChosenB=false;
}

void SelectBird::Initialize(SDL_Renderer* ren){
    
    m.CreateTexture("image/sb.png", ren);
}

int SelectBird::EventHandling(SDL_Event& b)
{
	SDL_PollEvent(&b);
	if (b.type == SDL_QUIT)
	{
		return -1;
	}
	else if (b.type == SDL_MOUSEBUTTONDOWN && b.motion.x > 100 && b.motion.x < 250 && b.motion.y > 280 && b.motion.y < 350)
	{
		bird=1;
		isChosenB = true;
	}
	else if (b.type == SDL_MOUSEBUTTONDOWN && b.motion.x > 350 && b.motion.x < 500 && b.motion.y > 280 && b.motion.y < 350)
	{
		bird=2;
		isChosenB = true;
	}
	else if (b.type == SDL_MOUSEBUTTONDOWN && b.motion.x > 550 && b.motion.x < 730 && b.motion.y > 280 && b.motion.y < 350)
	{
		bird=3;
		isChosenB = true;
	}
	return 0;
}

void SelectBird::Render(SDL_Renderer* ren)
{
	m.Render(ren);
}

bool SelectBird::getChosenB()
{
	return isChosenB;
}

int SelectBird::getBird(){
	return bird;
}
