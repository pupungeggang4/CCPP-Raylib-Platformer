#ifndef GAMEVAR_H
#define GAMEVAR_H

#include "includes.h"

struct GameVar {
    // System
    int running;
    Camera2D camera;

    // Game system
    int scene;
    int state; int sceneChange;
    float delta;

    // Editor
    int uiVisible;

};

extern GameVar gameVar;

#endif
