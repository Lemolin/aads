#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
using namespace std;

class Human : public Player {
public:
    string m_name;
    Human(string name = "Human");
    char makeMove();
    string getName();

    
};

#endif