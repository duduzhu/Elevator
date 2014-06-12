#include <vector.h>
#includ "elevator.h"
class Building{
public:
	Building(int floors_number=7);
	~Building();
	int get_floors(){return floors;}
	int * get_waitinglist(){return waitinglist;}
private:
	vector<Elevator> lift;
	int floors;
	int *waitinglist;
};
