//Header file of the collisions
#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED

#include <SDL/SDL.h>

typedef struct{
    int x, y;
    int r;
}Circle;

/*double distanceSquared(int x1, int y1, int x2, int y2);

int collisionBxC(Circle a, SDL_Rect b);

int collisionCxC(Circle a, Circle b);*/
bool CollisionTrigoCir ( SDL_Surface *Player , SDL_Surface *C_Object , SDL_Rect Pposition , SDL_Rect Oposition ) ; 
 
bool CollisionTrigoInsc ( SDL_Surface *Player , SDL_Surface *C_Object , SDL_Rect position , SDL_Rect position1  ) ; 

int collisionBox(SDL_Rect a, SDL_Rect b);

SDL_Color GetPixel(SDL_Surface *surface, int x, int y);

int collision_Parfaite(SDL_Surface *calque, SDL_Rect posperso, int decalage, int direction);

#endif
