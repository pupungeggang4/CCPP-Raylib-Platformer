#include "ui.h"

UITitle uiTitle = {
    {20, 20}, // textTitle
    {160, 160, 480, 80}, // buttonStart
    {180, 180}, // textStart
    {160, 240, 480, 80}, // buttonQuit
    {180, 260} // textQuit
};

UIEdit uiEdit = {
    {20, 20}, // textTitle
    {740, 20, 40, 40}, // buttonMenu
    {20, 540, 40, 40}, // buttonUIToggle
    {740, 540, 40, 40}, // buttonExit
};

UIRun uiRun = {
    {340, 20, 40, 40}, // buttonPlay
    {380, 20, 40, 40}, // buttonPause
    {420, 20, 40, 40}, // buttonStop
};
