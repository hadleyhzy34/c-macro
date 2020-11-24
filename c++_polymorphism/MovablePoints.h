/* Header for Moving 3D Points with int coords (MovablePoint.h) */
#ifndef MOVING_POINT_H
#define MOVING_POINT_H
 
#include "Points.h"   // Include header of the base class
 
class MovablePoint : public Points { // MovablePoint is a subclass of Point
private:
   int xSpeed, ySpeed;
 
public:
   MovablePoint(int x, int y, int xSpeed = 0, int ySpeed = 0);
   int getXSpeed() const;
   int getYSpeed() const;
   void setXSpeed(int xSpeed);
   void setYSpeed(int ySpeed);
   void move();
   void print() const;
};
 
#endif