#include "scene.h"

void (*sceneReadys[])(GameVar*) = {sceneTitleReady, sceneFileReady, sceneFieldReady};
void (*sceneUpdates[])(GameVar*) = {sceneTitleUpdate, sceneFileUpdate, sceneFieldUpdate};
void (*sceneRenders[])(GameVar*) = {sceneTitleRender, sceneFieldRender, sceneFieldRender};
void (*sceneKeyDowns[])(GameVar*) = {sceneTitleKeyDown, sceneFileKeyDown, sceneFieldKeyDown};
