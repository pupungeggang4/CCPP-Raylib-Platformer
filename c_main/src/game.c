#include "gamevar.h"
#include "asset.h"
#include "game.h"
#include "scene.h"

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
    SetExitKey(KEY_NULL);
    #endif
    Camera2D tempCamera = {0}; gameVar->camera = tempCamera;

    assetLoad();
    gameVar->scene = S_TITLE;
}

void gameLoop(GameVar* gameVar) {
    gameVar->camera.zoom = (float)GetRenderWidth() / 800.0f;
    gameVar->dt = GetFrameTime();

    gameInputHandle(gameVar);
    sceneUpdates[gameVar->scene](gameVar);
    BeginDrawing();
    ClearBackground(RAYWHITE);
    BeginMode2D(gameVar->camera);
    sceneRenders[gameVar->scene](gameVar);
    EndMode2D();
    EndDrawing();

    if (gameVar->sceneNext != -1) {
        gameVar->scene = gameVar->sceneNext;
        sceneReadys[gameVar->scene](gameVar);
        gameVar->sceneNext = -1;
    }

    if (WindowShouldClose()) gameVar->running = FALSE;
}

void gameInputHandle(GameVar* gameVar) {
    sceneKeyDowns[gameVar->scene](gameVar);
}

void gameQuit() {
    assetDispose();
    CloseWindow();
}
