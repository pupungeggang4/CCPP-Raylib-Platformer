#include "render.h"

void drawRect(Rectangle rect, Color color) {
    DrawRectangleRec(rect, color);
}

void drawText(const char* text, Vector2 pos, int size, Color color) {
    DrawText(text, pos.x, pos.y, size, color);
}

void drawTexture(Texture2D texture, Rectangle rect) {
    DrawTexture(texture, rect.x, rect.y, WHITE);
}
