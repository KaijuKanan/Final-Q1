#ifndef PYRAMID_H
#define PYRAMID_H
#include "threeDShape.h"

class Pyramid: public ThreeDShape{
    int lenght;
    int width;
    int height;

    public:
        Pyramid();
        Pyramid(int, int, int, float, int, float*);
        Pyramid(const Pyramid& rhs);

        int getLenght();
        int getWidth();
        int getHeight();

        void setLenght(int);
        void setWidth(int);
        void setHeight(int);
};
#endif