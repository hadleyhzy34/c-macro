/* Test Driver Program for MovablePoint (TestMovablePoint.cpp) */
#include <iostream>
#include "Points.h"
#include "MovablePoints.h"  // included "Point.h"
 
int main() {
    //object pointer
    Points *ptr1 = new MovablePoint(11,12,13,14);
    ptr1->print(); //run baseClass version->(virtual)->run subclass version
    // delete ptr1;

    //using object reference
    MovablePoint mp(21,22,23,24);
    Points *ptr2 = &mp;
    ptr2->print(); //run baseclass version->(virtual)->run subclass

    //using object with explicit constructor
    Points p3 = MovablePoint(31,32,33,34); //upcast, create baseclass object using subclass constructor
    p3.print(); //run baseClass version->virtual->run subclass

    //downcast implicitly and explicitly
    Points p4();
    // MovablePoint *ptr3 = ptr1;
    // MovablePoint *ptr4 = &p4;
    std::cout<<"test5: ";
    MovablePoint *ptr5 = (MovablePoint*)ptr1;
    ptr5->print();
    std::cout<<std::endl;

    //downcast using dynamic cast
    std::cout<<"test6";
    MovablePoint *ptr6 = dynamic_cast<MovablePoint*>(ptr1);
    std::cout<<"test6:"<<std::endl;
    ptr6->print();
    std::cout<<"test6"<<std::endl;

    delete ptr1;
}
