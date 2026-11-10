#include "scene.h"
#include "asset.h"
#include "ui.h"
#include "gamevar.h"
#include "render.h"
#include "util.h"

void sceneEditReady(GameVar* gameVar) {
    gameVar->uiVisible = 1;
    gameVar->state = NORMAL;
}

void sceneEditUpdate(GameVar* gameVar) {
}

void sceneEditRender(GameVar* gameVar) {
    drawTexture(asset.texture[I_MENU], uiEdit.buttonMenu);
    drawTexture(asset.texture[I_UI], uiEdit.buttonUIToggle);
    if (gameVar->uiVisible == 1) {
        drawTexture(asset.texture[I_PLAY], uiEdit.buttonRun);
    }
}

void sceneEditKeyDown(GameVar* gameVar) {
}

void sceneEditMouseUp(GameVar* gameVar, Vector2 pos, int button) {
    if (button == LEFT) {
        if (utilPointInsideRectUI(pos, uiEdit.buttonUIToggle)) {
            gameVar->uiVisible = 1 - gameVar->uiVisible;
        }
        if (gameVar->uiVisible) {
            if (utilPointInsideRectUI(pos, uiEdit.buttonRun)) {
                gameVar->sceneChange = RUN;
            }
        }
    }
}

