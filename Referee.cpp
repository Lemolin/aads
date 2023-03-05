#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* a, Player* b) {
    char a_move = a->makeMove();
    char b_move = b->makeMove();

    if (a_move == b_move) {
        return nullptr;
    }
    else if ((a_move == 'R' && b_move == 'S') ||
        (a_move == 'S' && b_move == 'P') ||
        (a_move == 'P' && b_move == 'R')) {
        return a;
    }
    else {
        return b;
    }
}
