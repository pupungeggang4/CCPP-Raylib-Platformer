#include "scene.h"
#include "asset.h"
#include "ui.h"
#include "gamevar.h"
#include "render.h"
#include "util.h"

void sceneTitleReady(GameVar* gameVar) {

}

void sceneTitleUpdate(GameVar* gameVar) {
}

void sceneTitleRender(GameVar* gameVar) {
    drawText("Platformer Mechanics", uiTitle.textTitle, 20, BLACK);
    drawRect(uiTitle.buttonEdit, YELLOW);
    drawText("Edit", uiTitle.textEdit, 20, BLACK);
    drawRect(uiTitle.buttonQuit, PINK);
    drawText("Quit", uiTitle.textQuit, 20, BLACK);
}

void sceneTitleKeyDown(GameVar* gameVar) {
}

void sceneTitleMouseUp(GameVar* gameVar, Vector2 pos, int button) {
    if (button == LEFT) {
        if (utilPointInsideRectUI(pos, uiTitle.buttonEdit)) gameVar->sceneChange = EDIT;
        if (utilPointInsideRectUI(pos, uiTitle.buttonQuit)) gameVar->running = 0;
    }
}

