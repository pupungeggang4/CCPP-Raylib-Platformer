#ifndef RENDER_H
#define RENDER_H

#include "includes.h"

void drawRect(Rectangle, Color);
void drawText(const char*, Vector2, int, Color);
void drawTexture(Texture2D, Vector2);

#endif
