CC=g++

main1: main1.o Points.o MovablePoints.o
	g++ main1.o Points.o MovablePoints.o -o main1

main2: main2.o Points.o MovablePoints.o
	g++ main2.o Points.o MovablePoints.o -o main2

main3: main3.o Points.o MovablePoints.o
	g++ main3.o Points.o MovablePoints.o -o main3

Points.o: Points.cpp
	g++ -c Points.cpp

MovablePoints.o: MovablePoints.cpp
	g++ -c MovablePoints.cpp

main1.o: main1.cpp
	g++ -c main1.cpp

main2.o: main2.cpp
	g++ -c main2.cpp

main3.o: main3.cpp
	g++ -c main3.cpp

clean:
	rm -rf *.o