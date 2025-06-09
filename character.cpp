#include "attackTypes.hpp"
#include "elements.hpp"
#include "elementComparison.cpp"


class character {
public:
    int speciesNum;
    short health;
    short hp;
    short atk;
    short spatk;
    short def;
    short spdef;
    short spd;

    // Constructor to initialize character attributes
    character(int speciesNum, short health, short attack, short spattack, short defense, short spdefense, short speed){
        this->speciesNum = speciesNum;
        this->health = health;
        this->hp = health;
        this->atk = attack;
        this->spatk = spattack;
        this->def = defense;
        this->spdef = spdefense;
        this->spd = speed;
    }

    void takeDamagePhys(short dmg, short adv) {
        short effectiveDamage = dmg / def;
        switch (adv){
            case -1:
                effectiveDamage = effectiveDamage * 1.33;
                break;
            case 0:
                break;
            case 1:
                effectiveDamage = effectiveDamage * 0.67;
                break;
        }
        if (effectiveDamage < 0) effectiveDamage = 0;
        hp -= effectiveDamage;
        if (hp < 0) hp = 0;
    }

    void takeDamageSp(short dmg, short adv) {
        short effectiveDamage = dmg / spdef;
        switch (adv){
            case -1:
                effectiveDamage = effectiveDamage * 0.67;
                break;
            case 0:
                break;
            case 1:
                effectiveDamage = effectiveDamage * 1.33;
                break;
        }
        if (effectiveDamage < 0) effectiveDamage = 0;
        hp -= effectiveDamage;
        if (hp < 0) hp = 0;
    }

    void attack(character& target, short power, enum attackTypes type, short adv) {
        if(type == PHYSICAL){
            target.takeDamagePhys(atk * power, adv);
        }
        else{
            target.takeDamageSp(spatk * power, adv);
        }
    }

    short getHealth() const {
        return hp;
    }

    void heal(short amount) {
        hp += amount;
        if (hp > health) hp = health;
    }

    void fullHeal() {
        hp = health;
    }
};