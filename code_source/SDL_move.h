#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED

#include <SDL/SDL.h>
#include "SDL_char.h"
#include "SDL_Game.h"



void moveBetweenTwo(hero *entit, int axe, int a, int b, Uint32 *oldTime);

void moveToMouse(hero *player, int dx, int dy);

void move(hero *player, int xy, int i);

#endif