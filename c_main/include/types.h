#ifndef TYPES_H
#define TYPES_H

enum Boolean {FALSE, TRUE};
enum Textures {T_MENU};
enum SceneName {S_TITLE, S_FILE, S_FIELD};
enum GameState {G_NORMAL};

typedef struct Asset Asset;
typedef struct UI UI;
typedef struct UITitle UITitle;
typedef struct UIField UIField;
typedef struct UIFile UIFile;
typedef struct UIMap UIMap;
typedef struct UIMenu UIMenu;
typedef struct SceneTitleVar SceneTitleVar;
typedef struct SceneFileVar SceneFileVar;
typedef struct SceneFieldVar SceneFieldVar;
typedef struct SceneMenuVar SceneMenuVar;
typedef struct TileMap TileMap;
typedef struct Entity Entity;
typedef struct Field Field;
typedef struct GameVar GameVar;

extern Asset asset;
extern UI ui;
extern GameVar gameVar;

#endif
