#ifndef ASSET_H
#define ASSET_H

#include "includes.h"

enum Icon {I_MENU, I_UI, I_PLAY, I_PAUSE, I_STOP};

struct Asset {
    Texture2D texture[100];
};

extern Asset asset;

void assetLoad(Asset*);
void assetDispose(Asset*);

#endif
