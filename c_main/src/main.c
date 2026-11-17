#include "includes.h"
#include "gamevar.h"
#include "game.h"

int main(int argc, char** argv) {
    gameVar.running = 1;
    gameInit(&gameVar);
    while (gameVar.running) {
        gameLoop(&gameVar);
    }
    gameQuit();
    return 0;
}
