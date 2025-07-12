#include "attackTypes.hpp"
#include "move.hpp"
#include <map>

void defineMoves(std::map<int, move>& x){
    x[0] = move(PHYSICAL, 40, "Punch");
    x[1] = move(PHYSICAL, 60, "Slice");
    x[2] = move(PHYSICAL, 100, "Lacerate");
    x[3] = move(SPECIAL, 35, "Throw");
    x[4] = move(SPECIAL, 60, "Shoot");
    x[5] = move(SPECIAL, 95, "Barrage");
    x[6] = move(PHYSICAL, 80, "Sneak Attack");
    x[7] = move(COUNTER, 0, "Block");
    x[8] = move(COUNTER, 1, "Parry");
};