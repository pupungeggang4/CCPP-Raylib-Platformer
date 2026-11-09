#include "asset.h"

Asset asset = {0};

void assetLoad(Asset* asset) {
    Texture2D* tptr = asset->texture;
    tptr[I_MENU] = LoadTexture("asset/image/menu.png");
    tptr[I_UI] = LoadTexture("asset/image/ui.png");
    tptr[I_PLAY] = LoadTexture("asset/image/play.png");
    tptr[I_PAUSE] = LoadTexture("asset/image/pause.png");
    tptr[I_STOP] = LoadTexture("asset/image/stop.png");
}

void assetDispose(Asset* asset) {
    for (int i = 0; i < 100; i++) {
        UnloadTexture(asset->texture[i]);
    }
}
