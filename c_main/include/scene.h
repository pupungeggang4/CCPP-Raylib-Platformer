#ifndef SCENE_H
#define SCENE_H

#include "includes.h"
#include "types.h"

void sceneTitleReady(GameVar*);
void sceneTitleUpdate(GameVar*);
void sceneTitleRender(GameVar*);
void sceneTitleKeyDown(GameVar*);

void sceneFieldReady(GameVar*);
void sceneFieldUpdate(GameVar*);
void sceneFieldRender(GameVar*);
void sceneFieldKeyDown(GameVar*);

void sceneMenuReady(GameVar*);
void sceneMenuUpdate(GameVar*);
void sceneMenuRender(GameVar*);
void sceneMenuKeyDown(GameVar*);

extern void (*sceneReadys[])(GameVar*);
extern void (*sceneUpdates[])(GameVar*);
extern void (*sceneRenders[])(GameVar*);
extern void (*sceneKeyDowns[])(GameVar*);

#endif
