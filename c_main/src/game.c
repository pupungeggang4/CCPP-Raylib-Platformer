#include "gamevar.h"
#include "game.h"

void gameInit(GameVar* gameVar) {
    float aspRatio = 0.75;
    SetConfigFlags(FLAG_VSYNC_HINT);
    int width = 800, height = 600;
    InitWindow(width, height, "Puzzle Game");
    #ifndef __APPLE__
    int mWidth = GetMonitorWidth(0); int mHeight = GetMonitorHeight(0);
    if (mWidth * aspRatio > height) {
        height = (int)(mHeight * 0.8); width = (int)(height / aspRatio);
    } else {
        width = (int)(mWidth * 0.8); height = (int)(width * aspRatio);
    }
    SetWindowSize(width, height);
    SetWindowPosition((mWidth - width) / 2, (mHeight - height) / 2);
    #endif
    Camera2D tempCamera = {0}; gameVar->camera = tempCamera;
}

void gameLoop(GameVar* gameVar) {
    gameVar->camera.zoom = GetRenderWidth() / 800.0f;
    gameVar->dt = GetFrameTime();

    gameInputHandle(gameVar);

    BeginDrawing();
    EndDrawing();

    if (WindowShouldClose()) gameVar->running = FALSE;
}

void gameInputHandle(GameVar* gameVar) {

}

void gameQuit() {
    CloseWindow();
}
