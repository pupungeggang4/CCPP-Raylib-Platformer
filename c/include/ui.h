#ifndef UI_H
#define UI_H

#include "includes.h"

struct UITitle {
    int textTitle[4];
    int buttonEdit[4];
    int textEdit[4];
    int buttonQuit[4];
    int textQuit[4];
};

struct UIEdit {
    int textTitle[4];
    int buttonMenu[4];
    int buttonUIToggle[4];
    int buttonRun[4];
};

struct UIRun {
    int buttonPlay[4];
    int buttonPause[4];
    int buttonStop[4];
};

extern UITitle uiTitle;
extern UIEdit uiEdit;
extern UIRun uiRun;

#endif
