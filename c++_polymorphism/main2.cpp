/* Test Driver Program for MovablePoint (TestMovablePoint.cpp) */
#include <iostream>
#include "Points.h"
#include "MovablePoints.h"  // included "Point.h"
 
int main() {
   Points p1(4, 5);  // superclass
   p1.print();      // Point @ (4,5)
   std::cout << std::endl;
 
   MovablePoint mp1(11, 22); // subclass, default speed
   mp1.print();       // MovablePoint @ (11,22) Speed=(0,0)
   std::cout << std::endl;
   mp1.setXSpeed(8);
   mp1.move();
   mp1.print();       // MovablePoint @ (19,22) Speed=(8,0)
   std::cout << std::endl;
 
   MovablePoint mp2(11, 22, 33, 44);
   mp2.print();  // MovablePoint @ (11,22) Speed=(33,44)
   std::cout << std::endl;
   mp2.move();
   mp2.print();  // MovablePoint @ (44,66) Speed=(33,44)
   std::cout << std::endl;
}
