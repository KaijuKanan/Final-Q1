#include "pyramid.h"

Pyramid::Pyramid():ThreeDShape(){
    lenght = 0;
    width = 0;
    height = 0;
}
Pyramid::Pyramid(int l, int w, int h, float v, int ns, float* s):ThreeDShape(float v, int n, float* s){
    lenght = l;
    width = w;
    height = w;
}
Pyramid::Pyramid(const Pyramid& rhs){

}
void Pyramid::calculateVolume(){
    volume = (lenght * width * heigh)/3;
}