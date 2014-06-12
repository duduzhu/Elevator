all: main.o building.o person.o elevator.o
	g++ -o Elevator main.o building.o person.o elevator.o
main.o: main.cpp building.h person.h elevator.h
	g++ -c -o main.o main.cpp
building.o: building.cpp building.h
	g++ -c -o building.o building.cpp
elevator.o: elevator.cpp elevator.h
	g++ -c -o elevator.o elevator.cpp
person.o: person.cpp person.h
	g++ -c -o person.o person.cpp
.PHONY: clean
clean:
	-rm *o
	-rm Elevator
