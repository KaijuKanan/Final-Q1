#include "pyramid.h"

Pyramid::Pyramid():ThreeDShape(){
    lenght = 0;
    width = 0;
    height = 0;
    numSides = 0;
    volume = calculateVolume();
}
Pyramid::Pyramid(int l, int w, int h, float v, int ns, float* s):ThreeDShape(float v, int n, float* s){
    lenght = l;
    width = w;
    height = w;
    volume = calculateVolume();
    numSides = ns;
    
}
Pyramid::Pyramid(const Pyramid& rhs){

}
void Pyramid::calculateVolume(){
    volume = (lenght * width * heigh)/3;
}
int Pyramid::getLenght(){
    return lenght;
}
int Pyramid::getWidth(){
    return width;
}
int Pyramid::getHeight(){
    return height;
}
void Pyramid::setLenght(int l){
    lenght = l;
}
void Pyramid::setWidth(int w){
    width = w;
}
void Pyramid::setHeight(int h){
    height = h;
}