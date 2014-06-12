#ifndef __PERSON__
#define __PERSON__

#define LOAD TRUE
#define UNLOAD FALSE
#define WAITING_LIMIT 60 //seconds
class Person{
Public:
	Person(int start, int target):start_floor(start), target_floor(target){waiting_timer=0;status=UNLOAD;}
	~Person(){}
Private:
	int waiting_timer=0;
	int start_floor; // 0 stands for G floor
	int target_floor;
	bool status; //TRUE if is inside the elevator
};
#else
#endif
