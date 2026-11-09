#ifndef SCENE_H
#define SCENE_H

#include "includes.h"

void sceneTitleReady(GameVar*);
void sceneTitleUpdate(GameVar*);
void sceneTitleRender(GameVar*);
void sceneTitleKeyDown(GameVar*);
void sceneTitleMouseUp(GameVar*, Vector2, int);

void sceneEditReady(GameVar*);
void sceneEditUpdate(GameVar*);
void sceneEditRender(GameVar*);
void sceneEditKeyDown(GameVar*);
void sceneEditMouseUp(GameVar*, Vector2, int);

void sceneRunReady(GameVar*);
void sceneRunUpdate(GameVar*);
void sceneRunRender(GameVar*);
void sceneRunKeyDown(GameVar*);
void sceneRunMouseUp(GameVar*, Vector2, int);

void menuReady(GameVar*);
void menuRender(GameVar*);
void menuKeyDown(GameVar*);
void menuKeyMouseUp(GameVar*, Vector2, int);

#endif
