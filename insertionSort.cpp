#include "adventurers.h"
//just an intermittent method in case we choose to switch the sorting algorithm
void sort(std::string key, bool reverse){
	insertionSort(key, reverse);
}

//The actual insertion sort
void insertionSort(std::string key, bool reverse){
	int i, j, k;
	int length = adventurer_list.size();
	Adventurer temp_a;
	//Adventurer[length] temp_list;

	if (reverse)
		k = -1;
	else
		k = 1;

	for (i = 1; i < length; i++){
		//std::cout << "i = " << i << "\n";
		//(adjust the adventurer compare to determine what kind of sort to do)
		for (j = i; (j > 0) && ((adventurerCompare(adventurer_list[j], adventurer_list[j-1], key) * k) > 0); j--){
			//std::cout << "j,k = " << j << "," << k << "\n";
			temp_a = adventurer_list[j-1];
			adventurer_list[j-1] = adventurer_list[j];
			adventurer_list[j] = temp_a;

			//&& (adventurer_list[j] < adventurer_list[j-1])
		}
	}
}

//returns -1 if a1 < a2
//returns 0 if a1 = a2
//returns 1 if a1 > a2
int adventurerCompare(Adventurer a1, Adventurer a2, std::string key){
	//sort depending on the key
	if (key == "name"){
		return a1.name().compare(a2.name());
	}
	else if (key == "hp"){
		//return a1.hp() < a2.hp();
		if (a1.hp() < a2.hp())
			return -1;
		else if (a1.hp() > a2.hp())
			return 1;
		else
			return 0;
	}
	else if (key == "sp"){
		//return a1.sp() < a2.sp();
		if (a1.sp() < a2.sp())
			return -1;
		else if (a1.sp() > a2.sp())
			return 1;
		else
			return 0;
	}
	else if (key == "str"){
		//return a1.str() < a2.str();
		if (a1.str() < a2.str())
			return -1;
		else if (a1.str() > a2.str())
			return 1;
		else
			return 0;
	}
	else if (key == "stam"){
		//return a1.stam() < a2.stam();
		if (a1.stam() < a2.stam())
			return -1;
		else if (a1.stam() > a2.stam())
			return 1;
		else
			return 0;
	}
	else if (key == "mag"){
		//return a1.mag() < a2.mag();
		if (a1.mag() < a2.mag())
			return -1;
		else if (a1.mag() > a2.mag())
			return 1;
		else
			return 0;
	}
	else if (key == "luk"){
		//return a1.luk() < a2.luk();
		if (a1.luk() < a2.luk())
			return -1;
		else if (a1.luk() > a2.luk())
			return 1;
		else
			return 0;
	}
	//nonexistant guild = lowest value
	else if (key == "guild"){
		if (a1.guild() == ""){
			if (a2.guild() == "")
				return 0;
			else 
				return -1;
		}
		else{
			if (a2.guild() == "")
				return 1;
		}
		return a1.guild().compare(a2.guild());
	}
}