#ifndef MOVE_HPP
#define MOVE_HPP

#include "attackTypes.hpp"
#include <string>

class move{
public:
    enum attackTypes atktype;
    short power;
    std::string name;

    move(enum attackTypes atktype, short power, std::string name);

    short getPower();
    enum attackTypes getType();
    std::string getName();
};

#endif