#include "asset.h"

Asset asset = {0};

void assetLoad() {
    asset.texture[T_MENU] = LoadTexture("asset/image/menu.png");
}

void assetDispose() {
    for (int i = 0; i < 100; i++) {
        if (asset.texture[i].id > 0) {
            UnloadTexture(asset.texture[i]);
        }
    }
}
