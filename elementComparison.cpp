#include "elements.hpp"
/*
returns x's advantage over y
*/
short compare(enum elements x, enum elements y){
    if (x == FIRE) {
        switch(y) {
            case FIRE: return 0;
            case WATER: return -1;
            case GRASS: return 1;
            case ELECTRIC: return 0;
            case EARTH: return -1;
            case METAL: return 1;
            case AIR: return 0;
        }
    }
    if (x == WATER) {
        switch(y) {
            case FIRE: return 1;
            case WATER: return 0;
            case GRASS: return -1;
            case ELECTRIC: return -1;
            case EARTH: return 1;
            case METAL: return -1;
            case AIR: return 0;
        }
    }
    if (x == GRASS) {
        switch(y) {
            case FIRE: return -1;
            case WATER: return 1;
            case GRASS: return 0;
            case ELECTRIC: return 0;
            case EARTH: return 1;
            case METAL: return -1;
            case AIR: return 0;
        }
    }
    if (x == ELECTRIC) {
        switch(y) {
            case FIRE: return 0;
            case WATER: return 1;
            case GRASS: return 0;
            case ELECTRIC: return 0;
            case EARTH: return -1;
            case METAL: return 1;
            case AIR: return 1;
        }
    }
    if (x == EARTH) {
        switch(y) {
            case FIRE: return 1;
            case WATER: return -1;
            case GRASS: return -1;
            case ELECTRIC: return 1;
            case EARTH: return 0;
            case METAL: return -1;
            case AIR: return 0;
        }
    }
    if (x == METAL) {
        switch(y) {
            case FIRE: return -1;
            case WATER: return 0;
            case GRASS: return 0;
            case ELECTRIC: return -1;
            case EARTH: return 1;
            case METAL: return -1;
            case AIR: return 0;
        }
    }
    if (x == AIR) {
        switch(y) {
            case FIRE: return 0;
            case WATER: return 0;
            case GRASS: return 0;
            case ELECTRIC: return -1;
            case EARTH: return 0;
            case METAL: return 0;
            case AIR: return 0;
        }
    }
    return 0;
};