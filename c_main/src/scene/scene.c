#include "scene.h"

void (*sceneReadys[])(GameVar*) = {sceneTitleReady, sceneFieldReady};
void (*sceneUpdates[])(GameVar*) = {sceneTitleUpdate, sceneFieldUpdate};
void (*sceneRenders[])(GameVar*) = {sceneTitleRender, sceneFieldRender};
void (*sceneKeyDowns[])(GameVar*) = {sceneTitleKeyDown, sceneFieldKeyDown};
