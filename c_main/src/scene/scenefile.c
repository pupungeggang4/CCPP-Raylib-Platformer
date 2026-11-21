#include "scene.h"

#include "asset.h"
#include "ui.h"

#include "render.h"
#include "gamevar.h"

void sceneFileReady(GameVar* gameVar) {

}

void sceneFileUpdate(GameVar* gameVar) {
    drawText("Select File", uiFile.textTitle, 20, BLACK);
}

void sceneFileRender(GameVar* gameVar) {
}

void sceneFileKeyDown(GameVar* gameVar) {
}
