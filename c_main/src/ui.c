#include "types.h"
#include "ui.h"

UITitle uiTitle = {
    {20, 20}, // textTitle
    {160, 160, 480, 80}, // buttonStart
    {180, 180}, // textStart
    {160, 240, 480, 80}, // buttonQuit
    {180, 260}, // textQuit
};

UIFile uiFile = {
    {20, 20} // textTitle
};

UIField uiField = {
    {740, 20, 40, 40}, // buttonMenu
};

UIMenu uiMenu = {
    {160, 140, 480, 320}, // rect
    {180, 160}, // textPaused
    {160, 220, 480, 80}, // buttonResume
    {180, 240}, // textResume
    {160, 300, 480, 80}, // buttonExit
    {180, 320}, // textExit
    {160, 380, 480, 80}, // buttonQuit
    {180, 400} // textQuit
};
