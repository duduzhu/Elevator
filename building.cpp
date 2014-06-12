#include "building.h"

Building::Building(int floors_number){
	waitinglist=new int[floors_number];
	floors=floors_number;
}
Building::~ Building(){
	delete[] waitinglist;
}

int Building::get_floors(){
	return floors;
}
