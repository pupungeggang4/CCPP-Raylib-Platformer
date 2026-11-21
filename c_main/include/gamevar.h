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

struct SceneFileVar {
    int selected;
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
    SceneFileVar sceneFileVar;
    SceneFieldVar sceneFieldVar;
    SceneMenuVar sceneMenuVar;

    Field field;
};

#endif
