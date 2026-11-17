#ifndef GAME_H
#define GAME_H

#include "includes.h"
#include "types.h"

void gameInit(GameVar*);
void gameLoop(GameVar*);
void gameInputHandle(GameVar*);
void gameQuit();

#endif
