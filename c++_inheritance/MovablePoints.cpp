#include "MovablePoints.h"   // Include header of the base class

//note that do not set default argument here, otherwise it could cause redefinition issue
MovablePoint::MovablePoint(int x, int y,int xSpeed,int ySpeed)
    :Points(x,y),xSpeed(xSpeed),ySpeed(ySpeed){}//base class constructor

int MovablePoint::getXSpeed() const{
    return xSpeed;
}

int MovablePoint::getYSpeed() const{
    return ySpeed;
}

void MovablePoint::setXSpeed(int xSpeed){
    this->xSpeed = xSpeed;
}

void MovablePoint::setYSpeed(int ySpeed){
    this->ySpeed = ySpeed;
}

void MovablePoint::print() const{
    std::cout<<"Movable";
    Points::print();
    std::cout<<" Speed="<<xSpeed<<" "<<ySpeed<<std::endl;
}

void MovablePoint::move(){
    Points::setX(Points::getX()+xSpeed);//base class member function
    Points::setY(Points::getY()+ySpeed);
}