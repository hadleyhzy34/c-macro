#include <iostream>
#include <string>
using namespace std;

#ifndef POINTS_H
#define POINTS_H

class Points
{
public:
	//constructor
	Points(int x=0, int y=0, int z=0);
	//set function
	void setX(int x);
	//get function
	int getX() const;
	//set function
	void setY(int y);
	//get function
	int getY() const;
	//set function
	void setXY(int x, int y);
	//print function, note that virtual function can only specified inside the class
	virtual void print() const;
	//public data members
	string alias = "position of point";
private:
	//private data members
	int _x;
	int _y;
	int _z;
};

#endif