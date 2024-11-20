#ifndef lab5_Teapot_H
#define lab5_Teapot_H

#include <string>


using namespace std;


class Teapot {
public:
    Teapot();
    Teapot(bool newIsHeats, bool newIsBroken, bool newIsEmpty, bool newIsOvercrowded);

    bool getIsHeats();
    bool getIsBroken();
    bool getIsEmpty();
    bool getIsOvercrowded();

    void setIsHeats(bool newIsHeats);
    void setIsBroken(bool newIsBroken);
    void setIsEmpty(bool newIsEmpty);
    void setIsOvercrowded(bool newIsOvercrowded);

    void changeIsHeats();
    void changeIsBroken();
    void changeIsEmpty();
    void changeIsOvercrowded();

private:
    bool isHeats;
    bool isBroken;
    bool isEmpty;
    bool isOvercrowded;
};


#endif