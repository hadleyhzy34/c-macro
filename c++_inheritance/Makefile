CC=g++

main2: Points.o MovablePoints.o main2.o
	g++ Points.o MovablePoints.o main2.o -o main2

Points.o: Points.cpp
	g++ -c Points.cpp

MovablePoints.o: MovablePoints.cpp
	g++ -c MovablePoints.cpp

main1.o: main1.cpp
	g++ -c main1.cpp

main2.o: main2.cpp
	g++ -c main2.cpp

clean:
	rm -rf *.o