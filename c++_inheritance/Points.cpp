#include <iostream>
#include <string>
#include "Points.h"


Points::Points(int x, int y, int z):_x(x),_y(y),_z(z){}

void Points::setX(int x){
    this->_x = x;
}

int Points::getX() const{
    return this->_x;
}

void Points::setY(int y){
    this->_y = y;
}

int Points::getY() const{
    return this->_y;
}

void Points::setXY(int x,int y){
    this->_x = x;
    this->_y = y;
}

//print function
void Points::print() const{
	std::cout<<this->_x<<" "<<this->_y<<std::endl;
}
