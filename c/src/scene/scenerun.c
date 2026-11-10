#include "scene.h"
#include "asset.h"
#include "ui.h"
#include "gamevar.h"
#include "render.h"
#include "util.h"

void sceneRunReady(GameVar* gameVar) {
    gameVar->state = NORMAL;
}

void sceneRunUpdate(GameVar* gameVar) {
    if (gameVar->state == NORMAL) {

    }
}

void sceneRunRender(GameVar* gameVar) {
    drawTexture(asset.texture[I_PLAY], uiRun.buttonPlay);
    drawTexture(asset.texture[I_PAUSE], uiRun.buttonPause);
    drawTexture(asset.texture[I_STOP], uiRun.buttonStop);
}

void sceneRunKeyDown(GameVar* gameVar) {
}

void sceneRunMouseUp(GameVar* gameVar, Vector2 pos, int button) {
    if (button == LEFT) {
        if (utilPointInsideRectUI(pos, uiRun.buttonPlay)) {
            gameVar->state = NORMAL;
        } else if (utilPointInsideRectUI(pos, uiRun.buttonPause)) {
            gameVar->state = PAUSE;
        } else if (utilPointInsideRectUI(pos, uiRun.buttonStop)) {
            gameVar->sceneChange = EDIT;
        }
    }
}

