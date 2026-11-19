#ifndef GAMEVAR_H
#define GAMEVAR_H

#include "includes.h"
#include "types.h"
#include "field/field.h"

struct SceneTitleVar {
    int selected;
};

struct SceneFieldVar {
    int place;
};

struct SceneMenuVar {
    int selected;
};

struct GameVar {
    int running; float dt;
    int scene; int state; int sceneNext;
    int menu;
    Camera2D camera;

    SceneTitleVar sceneTitleVar;
    SceneFieldVar sceneFieldVar;
    SceneMenuVar sceneMenuVar;

    Field field;
};

#endif
