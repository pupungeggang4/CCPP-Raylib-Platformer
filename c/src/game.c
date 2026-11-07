#include "game.h"
#include "asset.h"
#include "gamevar.h"
#include "scene.h"

void gameInit(GameVar* gameVar) {
    float aspRatio = 0.75;
    SetConfigFlags(FLAG_VSYNC_HINT);
    int width = 800, height = 600;
    InitWindow(width, height, "Puzzle Game");
    int mWidth = GetMonitorWidth(0); int mHeight = GetMonitorHeight(0);
    if (mWidth * aspRatio > height) {
        height = (int)(mHeight * 0.8); width = (int)(height / aspRatio);
    } else {
        width = (int)(mWidth * 0.8); height = (int)(width * aspRatio);
    }
    SetWindowSize(width, height);
    SetWindowPosition((mWidth - width) / 2, (mHeight - height) / 2);
    Camera2D tempCamera; gameVar->camera = tempCamera;

    assetLoad(&asset);
    gameVar->running = 1;
}

void gameLoop(GameVar* gameVar) {
    gameVar->camera.zoom = GetRenderWidth() / 800.0f;
    gameVar->delta = GetFrameTime();

    gameInputHandle(gameVar);

    if (gameVar->scene == TITLE) {
        sceneTitleUpdate(gameVar);
    } else if (gameVar->scene == EDIT) {
        sceneEditUpdate(gameVar);
    } else if (gameVar->scene == RUN) {
        sceneRunUpdate(gameVar);
    }

    BeginDrawing();
    ClearBackground(RAYWHITE);
    BeginMode2D(gameVar->camera);
    if (gameVar->scene == TITLE) {
        sceneTitleRender(gameVar);
    } else if (gameVar->scene == EDIT) {
        sceneEditRender(gameVar);
    } else if (gameVar->scene == RUN) {
        sceneRunRender(gameVar);
    }
    EndMode2D();
    EndDrawing();
    if (WindowShouldClose()) gameVar->running = 0;
}

void gameInputHandle(GameVar* gameVar) {
    if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) {
        Vector2 pos = GetMousePosition();
        pos = Vector2Scale(pos, 1 / gameVar->camera.zoom);
        printf("%f, %f\n", pos.x, pos.y);
        if (gameVar->scene == TITLE) {
            sceneTitleMouseUp(gameVar, pos, LEFT);
        } else if (gameVar->scene == EDIT) {
            sceneEditMouseUp(gameVar, pos, LEFT);
        } else if (gameVar->scene == RUN) {
            sceneRunMouseUp(gameVar, pos, LEFT);
        }
    } else if (IsMouseButtonReleased(MOUSE_BUTTON_RIGHT)) {
        Vector2 pos = GetMousePosition();
        printf("%f, %f\n", pos.x, pos.y);
        if (gameVar->scene == TITLE) {
            sceneTitleMouseUp(gameVar, pos, RIGHT);
        } else if (gameVar->scene == EDIT) {
            sceneEditMouseUp(gameVar, pos, RIGHT);
        } else if (gameVar->scene == RUN) {
            sceneRunMouseUp(gameVar, pos, RIGHT);
        }
    }

    if (gameVar->scene == TITLE) {
        sceneTitleKeyDown(gameVar);
    } else if (gameVar->scene == EDIT) {
        sceneEditKeyDown(gameVar);
    } else if (gameVar->scene == RUN) {
        sceneRunKeyDown(gameVar);
    }
}
