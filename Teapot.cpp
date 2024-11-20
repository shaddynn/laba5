#include "Teapot.h"
using namespace std;

    Teapot::Teapot() {
        isHeats = false;
        isBroken = false;
        isEmpty = true;
        isOvercrowded = false;
    }
    Teapot::Teapot(bool newIsHeats, bool newIsBroken, bool newIsEmpty, bool newIsOvercrowded){
        isHeats = newIsHeats;
        isBroken = newIsBroken;
        isEmpty = newIsEmpty;
        isOvercrowded = newIsOvercrowded;
    }

    bool Teapot::getIsHeats(){
        return isHeats;
    }
    bool Teapot::getIsBroken(){
        return isBroken;
    }
    bool Teapot::getIsEmpty(){
        return isEmpty;
    }
    bool Teapot::getIsOvercrowded(){
        return isOvercrowded;
    }

    void Teapot::setIsHeats(bool newIsHeats){
        isHeats = newIsHeats;
    }
    void Teapot::setIsBroken(bool newIsBroken){
        isBroken = newIsBroken;
    }
    void Teapot::setIsEmpty(bool newIsEmpty){
        isEmpty = newIsEmpty;
    }
    void Teapot::setIsOvercrowded(bool newIsOvercrowded){
        isOvercrowded = newIsOvercrowded;
    }

    void Teapot::changeIsHeats(){
        isHeats = !isHeats;
    }
    void Teapot::changeIsBroken(){
        isBroken = !isBroken;
    }
    void Teapot::changeIsEmpty(){
        isEmpty = !isEmpty;
    }
    void Teapot::changeIsOvercrowded(){
        isOvercrowded = !isOvercrowded;
    }