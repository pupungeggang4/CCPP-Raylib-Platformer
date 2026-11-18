#ifndef TYPES_H
#define TYPES_H

enum Boolean {FALSE, TRUE};
enum SceneName {S_TITLE, S_FIELD};
enum GameState {G_NORMAL};

typedef struct UITitle UITitle;
typedef struct UIField UIField;
typedef struct UIMenu UIMenu;
typedef struct SceneTitleVar SceneTitleVar;
typedef struct SceneFieldVar SceneFieldVar;
typedef struct SceneMenuVar SceneMenuVar;
typedef struct GameVar GameVar;

extern UITitle uiTitle;
extern UIField uiField;
extern UIMenu uiMenu;
extern GameVar gameVar;

#endif
