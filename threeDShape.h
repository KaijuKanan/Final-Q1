#ifndef THREEDSHAPE_H
#define THREEDSHAPE_H

class ThreeDShape{
    protected:
        float volume;
        int numSides; 
        float* sides;
    public:
        //ThreeDShape();
        //ThreeDShape(float, int, float*);
        //ThreeDShape(const ThreeDShape&);
        ~ThreeDShape();
        ThreeDShape& operator=(const ThreeDShape& rhs);

        float getVolume();
        int getNumSides();
        void addSide(float&);
        float* getSides();
        virutal void calculateVolume()=0;
};
#endif