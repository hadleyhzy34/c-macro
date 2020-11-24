/* Test Driver Program for MovablePoint (TestMovablePoint.cpp) */
#include <iostream>
#include <typeinfo>
#include "Points.h"
#include "MovablePoints.h"  // included "Point.h"
 
int main() {
    //object pointer
    Points *ptr1 = new MovablePoint(11,12,13,14);
    std::cout<<typeid(*ptr1).name()<<std::endl;

    MovablePoint *ptr2 = dynamic_cast<MovablePoint*>(ptr1);
    std::cout<<typeid(*ptr2).name()<<std::endl;

    delete ptr1;

    Points p2;
    std::cout<<typeid(p2).name()<<std::endl;

    MovablePoint mp2(1,2,3,4);
    std::cout<<typeid(mp2).name()<<std::endl;
}
