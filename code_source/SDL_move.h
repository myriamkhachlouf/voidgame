#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED

#include <time.h>
#include <SDL/SDL.h>
#include "SDL_char.h"
#include "SDL_Game.h"
#include "ennemie.h"



void moveBetweenTwo(ennemi *entit, int axe, int a, int b, Uint32 *oldTime);

void moveBetweenTwoRandom(ennemi *entit, int axe, int a, int b, Uint32 *oldTime, int *randpoint);

void moveToMouse(hero *player, int dx, int dy);

void moveToMouseDynamic(hero *player, int dx, int dy, SDL_Surface *calque_game);

void move(hero *player, int xy, int i);

#endif