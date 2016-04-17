all : questionA.cpp questionB.cpp Clock.o
	g++ -o questionA questionA.cpp
	g++ -o questionB questionB.cpp Clock.o

Clock.o : Clock.cpp Clock.h
	g++ -c Clock.cpp -o Clock.o
