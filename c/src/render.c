#include "render.h"

void drawText(const char* text, const int pos[4], int size, Color color) {
    DrawText(text, pos[0], pos[1], size, color);
}

void drawRect(const int rect[4], Color color) {
    DrawRectangle(rect[0], rect[1], rect[2], rect[3], color);
}

void drawTexture(Texture2D texture, const int pos[4]) {
    DrawTexture(texture, pos[0], pos[1], WHITE);
}
