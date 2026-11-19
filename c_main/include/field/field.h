#ifndef FIELD_H
#define FIELD_H

#include "includes.h"
#include "types.h"

struct TileMap {

};

struct Entity {
    int valid;
};

struct Field {
    TileMap tileMap;
    Entity entityList[1000];
    Entity player;
};

#endif
