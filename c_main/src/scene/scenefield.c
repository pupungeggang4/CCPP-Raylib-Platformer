#include "scene.h"

#include "asset.h"
#include "ui.h"

#include "render.h"
#include "gamevar.h"

void sceneFieldReady(GameVar* gameVar) {

}

void sceneFieldUpdate(GameVar* gameVar) {

}

void sceneFieldRender(GameVar* gameVar) {
    SceneFieldVar* sceneVar = &gameVar->sceneFieldVar;

    drawTexture(asset.texture[T_MENU], uiField.buttonMenu);

    if (gameVar->menu) {
        sceneMenuRender(gameVar);
    }
}

void sceneFieldKeyDown(GameVar* gameVar) {
    SceneFieldVar* sceneVar = &gameVar->sceneFieldVar;

    if (gameVar->menu) {
        sceneMenuKeyDown(gameVar);
        if (IsKeyPressed(KEY_ESCAPE)) {
            gameVar->menu = FALSE;
        }
    } else {
        if (IsKeyPressed(KEY_ESCAPE)) {
            gameVar->menu = TRUE;
        }
    }
}
