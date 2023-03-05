#include <iostream>
#include "Human.h"

Human::Human(string name) : m_name(name) {}

char Human::makeMove() {
    cout << "Enter move: ";
    char move;
    cin >> move;
    return move;
}

string Human::getName() {
    return m_name;
}


