#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
public:
    string name;
    Player();
    Player(string name);
    virtual string getName();
    virtual char makeMove();
    string name;
};

#endif