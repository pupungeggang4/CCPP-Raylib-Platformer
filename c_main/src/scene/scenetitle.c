#include "scene.h"

#include "ui.h"

#include "render.h"
#include "gamevar.h"

void sceneTitleReady(GameVar* gameVar) {

}

void sceneTitleUpdate(GameVar* gameVar) {

}

void sceneTitleRender(GameVar* gameVar) {
    SceneTitleVar* sceneVar = &gameVar->sceneTitleVar;
    drawText("Planterguy's Adventure", uiTitle.textTitle, 20, BLACK);
    drawRect(uiTitle.buttonStart, YELLOW);
    drawRect(uiTitle.buttonQuit, YELLOW);
    if (sceneVar->selected == 0) drawRect(uiTitle.buttonStart, PINK);
    else if (sceneVar->selected == 1) drawRect(uiTitle.buttonQuit, PINK);
    drawText("Start Game", uiTitle.textStart, 20, BLACK);
    drawText("Quit Game", uiTitle.textQuit, 20, BLACK);
}

void sceneTitleKeyDown(GameVar* gameVar) {
    SceneTitleVar* sceneVar = &gameVar->sceneTitleVar;
    if (IsKeyPressed(KEY_W) || IsKeyPressed(KEY_UP)) sceneVar->selected = (sceneVar->selected + 1) % 2;
    else if (IsKeyPressed(KEY_S) || IsKeyPressed(KEY_DOWN)) sceneVar->selected = (sceneVar->selected + 1) % 2;
    else if (IsKeyPressed(KEY_ENTER)) {
        if (sceneVar->selected == 0) gameVar->sceneNext = S_FILE;
        else if (sceneVar->selected == 1) gameVar->running = FALSE;
    }
}
