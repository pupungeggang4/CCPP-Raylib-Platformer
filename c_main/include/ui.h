#ifndef UI_H
#define UI_H

#include "includes.h"

struct UITitle {
    Vector2 textTitle;
    Rectangle buttonStart;
    Vector2 textStart;
    Rectangle buttonQuit;
    Vector2 textQuit;
};

struct UIField {
    Rectangle buttonMenu;
};

struct UIMap {

};

struct UIMenu {
    Rectangle rect;
    Vector2 textPaused;
    Rectangle buttonResume;
    Vector2 textResume;
    Rectangle buttonExit;
    Vector2 textExit;
    Rectangle buttonQuit;
    Vector2 textQuit;
};

#endif
