#ifndef JUMP_H_INCLUDED
#define JUMP_H_INCLUDED

#include <time.h>
#include <SDL/SDL.h>
#include "SDL_char.h"
#include "SDL_Game.h"
#include "ennemie.h"

#define ground_level 7645
#define H 100

void jump(hero *player, SDL_Rect camera);

#endif
