#include "scene.h"

void (*sceneReadys[])(GameVar*) = {sceneTitleReady, sceneFileReady, sceneFieldReady};
void (*sceneUpdates[])(GameVar*) = {sceneTitleUpdate, sceneFileUpdate, sceneFieldUpdate};
void (*sceneRenders[])(GameVar*) = {sceneTitleRender, sceneFileRender, sceneFieldRender};
void (*sceneKeyDowns[])(GameVar*) = {sceneTitleKeyDown, sceneFileKeyDown, sceneFieldKeyDown};
