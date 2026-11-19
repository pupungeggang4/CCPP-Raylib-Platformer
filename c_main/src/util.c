#include "util.h"

int utilPointInsideRectUI(Vector2 pos, Rectangle rect) {
    return pos.x > rect.x && pos.x < rect.x + rect.width && pos.y > rect.y && pos.y < rect.y + rect.height;
}
