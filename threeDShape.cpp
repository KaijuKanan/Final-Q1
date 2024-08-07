#include "threeDShape.h"

/*ThreeDShape::ThreeDShape(){
    numSides = 0;
    volume = 0;
    sides = new float[numSides]
}
*/
/*ThreeDShape::ThreeDShape(float v, int n, float* s){
    numSides = n;
    volume = v;
    sides = new float[numSides]
    for(int i =0; i < numSides; i++){
        sides[i] = s[i];
    }
}
*/
/*ThreeDShape::ThreeDShape(const ThreeDShape& rhs){
    numSides = rhs.numSides;
    volume = rhs.volume;
    for(int i = 0; i < numSides; i++){
        sides[i] = rhs.sides[i];
    }
}
*/
ThreeDShape::~ThreeDShape(){
    delete [] sides
}

float ThreeDShape::getVolume(){
    return volume;
}
int ThreeDShape::getNumSides(){
    return numSides;
}
void ThreeDShape::addSide(float s){
    sides[numSides] = s;
    numSides ++;
}
float* ThreeDShape::getSides(){
    return sides;
}

/*void ThreeDShape::calculateVolume(){
    //There is no default way to calculate volume! Leaving blank...
}*