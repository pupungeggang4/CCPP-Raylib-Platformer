#include "scene.h"

#include "asset.h"
#include "ui.h"

#include "render.h"
#include "gamevar.h"

void sceneFileReady(GameVar* gameVar) {

}

void sceneFileUpdate(GameVar* gameVar) {

}

void sceneFileRender(GameVar* gameVar) {
    SceneFileVar* sceneVar = &gameVar->sceneFileVar;
    drawText("Select File", ui.uiFile.textTitle, 20, BLACK);
    for (int i = 0; i < 3; i++) {
        drawRect(ui.uiFile.buttonFile[i], YELLOW);
    }
    drawRect(ui.uiFile.buttonFile[sceneVar->selected], PINK);

    drawRect(ui.uiFile.buttonDelete, YELLOW);
}

void sceneFileKeyDown(GameVar* gameVar) {
    SceneFileVar* sceneVar = &gameVar->sceneFileVar;

    if (IsKeyPressed(KEY_A) || IsKeyPressed(KEY_LEFT)) sceneVar->selected = (sceneVar->selected + 2) % 3;
    else if (IsKeyPressed(KEY_D) || IsKeyPressed(KEY_RIGHT)) sceneVar->selected = (sceneVar->selected + 1) % 3;
    else if (IsKeyPressed(KEY_ENTER)) gameVar->sceneNext = S_FIELD;
}
