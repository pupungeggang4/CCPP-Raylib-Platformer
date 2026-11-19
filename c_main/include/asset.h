#ifndef ASSET_H
#define ASSET_H

#include "includes.h"
#include "types.h"

struct Asset {
    Texture2D texture[100];
};

void assetLoad();
void assetDispose();

#endif
