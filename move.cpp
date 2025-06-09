#include "move.hpp"
#include "attackTypes.hpp"

move::move(enum attackTypes atkType, short power, std::string name){
    this->atktype = atkType;
    this->power = power;
    this->name = name;
}

short move::getPower(){
    return power;
}

enum attackTypes move::getType(){
    return atktype;
}

std::string move::getName(){
    return name;
}