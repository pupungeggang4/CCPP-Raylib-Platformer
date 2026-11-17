#ifndef GAMEVAR_H
#define GAMEVAR_H

#include "includes.h"

struct GameVar {
    int running; float dt;
    int scene; int state;
    int menu;

    Camera2D camera;
};

#endif
