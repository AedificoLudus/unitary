prog: main.o functions.o
	g++ -o prog main.o functions.o

main.o: main.cpp football_functions.h
	g++ -c -o main.o main.cpp

functions.o: functions.cpp football_functions.h
	g++ -c -o functions.o functions.cpp
