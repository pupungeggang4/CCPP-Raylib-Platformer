#include "scene.h"

#include "ui.h"

#include "render.h"
#include "gamevar.h"

void sceneMenuReady(GameVar* gameVar) {
    SceneMenuVar* sceneVar = &gameVar->sceneMenuVar;
    sceneVar->selected = 0;

}

void sceneMenuUpdate(GameVar* gameVar) {

}

void sceneMenuRender(GameVar* gameVar) {
    SceneMenuVar* sceneVar = &gameVar->sceneMenuVar;
    drawRect(ui.uiMenu.rect, YELLOW);
    if (sceneVar->selected == 0) drawRect(ui.uiMenu.buttonResume, PINK);
    else if (sceneVar->selected == 1) drawRect(ui.uiMenu.buttonExit, PINK);
    else if (sceneVar->selected == 2) drawRect(ui.uiMenu.buttonQuit, PINK);
    drawText("Paused", ui.uiMenu.textPaused, 20, BLACK);
    drawText("Resume", ui.uiMenu.textResume, 20, BLACK);
    drawText("Exit to Title", ui.uiMenu.textExit, 20, BLACK);
    drawText("Quit Game", ui.uiMenu.textQuit, 20, BLACK);
}

void sceneMenuKeyDown(GameVar* gameVar) {
    SceneMenuVar* sceneVar = &gameVar->sceneMenuVar;

    if (IsKeyPressed(KEY_W) || IsKeyPressed(KEY_UP)) sceneVar->selected = (sceneVar->selected + 2) % 3;
    else if (IsKeyPressed(KEY_S) || IsKeyPressed(KEY_DOWN)) sceneVar->selected = (sceneVar->selected + 1) % 3;
    else if (IsKeyPressed(KEY_ENTER)) {
        if (sceneVar->selected == 0) gameVar->menu = FALSE;
        else if (sceneVar->selected == 1) {
            gameVar->menu = FALSE;
            gameVar->sceneNext = S_TITLE;
        }
        else if (sceneVar->selected == 2) gameVar->running = FALSE;
    }
}
