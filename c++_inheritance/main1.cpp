#include <iostream>
#include <string>
#include "Points.h"
#include "MovablePoints.h"
using namespace std;


int main(int argc, char const *argv[])
{	
	//create temporary Points using constructor, implicitly call the copy
	//constructor of Points to copy from that temporary into point1
	Points point1 = Points(1,1,1);

	//explicit constructor
	Points point2(2,2,2);

	//invoke default constructor, implicitly calling default constructor
	Points point_default;

	std::cout<<"default constructor"<<endl;

	point_default.print();

	//accessing private data member
	std::cout<<point1.getX()<<" "<<point1.getY()<<std::endl;

	//print function
	point1.print();

	//accessing public data member
	std::cout<<point1.alias<<std::endl;

	//defaut constructor
	//Points point3 = Points();
	// point3.print();

	//accessing class data member
	// std::cout<<Points.alias<<std::endl;

	//object pointer
	Points *point3;
	point3 = new Points(); 
	point3->print();

	Points *point4 = new Points(4,4);
	point4->print();

	//segmentation fault 11 since object pointer will not implicitly call default constructor
	// Points *ptr_point;
	// std::cout<<"default pointer of object"<<std::endl;
	// ptr_point->print();
	// std::cout<<"default pointer of object"<<std::endl;


	//remove storage via delete
	delete point3;
	delete point4;

	//object reference
	Points &point5 = point2;
	point5.print();

	//object pointer points to already existed object
	Points *point6 = &point1;
	point6->print();

	//array of objects with static memory and default constructor
	Points ptsArray[2];
	//below is not working since above is already use default constructor for all elements
	// ptsArray[0] Points();
	ptsArray->print();
	ptsArray[1].print();
	(ptsArray+1)->print();


	//array of objects with static memory and customized constructor
	Points pts_array[3] = {Points(11,11),Points(21,21),Points(31,31)};

	pts_array[0].print();
	pts_array[1].print();
	pts_array[2].print();

	//array of object pointers with dynamical memory
	Points *pts_arrays = new Points[2];
	pts_arrays[0].print();
	pts_arrays[1] = Points(41,41);
	(pts_arrays+1)->print();

	delete[] pts_arrays;

	//array of object pointers with dynamical memory using malloc, implicitly calling constructor
	Points * arr = (Points*)malloc(sizeof(Points)*2);
	//cannot calling constructor if object data members have const
	arr[0] = Points();
	arr[1] = Points(51,51);
	arr[0].print();
	arr[1].print();

	// free(arr);
	arr = nullptr;

	std::cout<<"test"<<std::endl;
	//array of object pointers with dynamical memory, this will defautly call constructor
	Points *ptr_points = new Points[3];
	ptr_points[1].print();
	ptr_points[0] = Points(51,51);
	ptr_points[0].print();

	std::cout<<"test"<<std::endl;
	delete[] ptr_points;  //free storage
}