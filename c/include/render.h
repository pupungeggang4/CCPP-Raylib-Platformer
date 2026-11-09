#ifndef RENDER_H
#define RENDER_H

#include "includes.h"

void drawText(const char*, const int[4], int, Color);
void drawRect(const int[4], Color);
void drawTexture(Texture2D, const int[4]);

#endif
