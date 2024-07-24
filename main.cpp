#include "threeDShape.h"
#include "pyramid.h"
#include <iostream>
using namespace std;

int main(){
    //create an array out of the abstract base class threeDShape
    ThreeDShape** arr = new ThreeDShape*[2];

    //create 2 pyramids from your new pyramid class that extends threeDShape; 
    //pyramid 1 should use the default constructor and then setters to change the side values
    //pyramid 2 should use the parameterized constructor to change side values
    Pyramid Pyramid1();
    Pyramid Pyramid2(1, 2, 3);

    //Add pyramids to the abstract base class array
    arr[0] = &Pyramid1;
    arr[1] = &Pyramid2;

    //iterate through the pyramids in the array with a loop
    for(int i = 0; i < 2; i++){
        cout << "The Volume of Pyramid " << i << ": " << arr.calculateVolume()[i] << endl;
    }

    //Display the total volume of each pyramid in the array
}