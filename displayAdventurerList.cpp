#include "adventurers.h"

void displayAdventurerList(){
	int i;
	int x = adventurer_list.size();
	for (i = 0; i < x; i++){
		std::cout << " <<" << i << ">>" << std::endl;
		adventurer_list[i].print();
	}
}

void displayAdventurerListTable(){
	int i;
	int width = 6;
	int x = adventurer_list.size();
	//std::cout << "Size is " << x << "\n";

	std::cout << "\nPlace|  NAME   |  Guild  |  HP |  SP | STR | STAM| MAG | LUCK|\n";
	std::cout <<   "-----|---------|---------|-----|-----|-----|-----|-----|-----|\n";
	//std::cout <<   "--------------------------------------------------------------\n";
	for (i = 0; i < x; i++){
		//std::cout << " <<" << i << ">>" << std::endl;
		//adventurer_list[i].print();
		//std::cout << "hp = " << adventurer_list[i].hp() << "\n";
		//printCell(width, 10);
		printCell(width, i);
		printCell(10, adventurer_list[i].name());
		printCell(10, adventurer_list[i].guild());
		printCell(width, adventurer_list[i].hp());
		printCell(width, adventurer_list[i].sp());
		printCell(width, adventurer_list[i].str());
		printCell(width, adventurer_list[i].stam());
		printCell(width, adventurer_list[i].mag());
		printCell(width, adventurer_list[i].luk());
		std::cout << "\n";
	}
}

//numbers are printed aligned right
void printCell(int cell_width, int value){
	//std::cout << "printing cell\n";
	int i, j;
	//std::cout << "pow is = " << value / (int)pow(10,width-1) << std::endl;
	if ((value / (int)pow(10, cell_width-1)) > 0){
		//std::cout << "printing out of bounds\n";
		for (i = 0; i < (cell_width-1); i++)
			std::cout << 9;
	}
	else{
		//std::cout << "printing valid\n";
		i = 0;
		for (i = 1; value/((int)pow(10, i)) > 0; i++);

		for (; i < cell_width-1; i++)
			std::cout << " ";

		std::cout << value;
		//std::cout << "i = " << i << "\n";
	}
	std::cout << "|";
}

//strings are printed alinged left
void printCell(int cell_width, std::string value){
	//std::cout << "printing cell\n";
	int i, j;
	j = value.length();
	//std::cout << "pow is = " << value / (int)pow(10,width-1) << std::endl;
	if (j > cell_width-1){
		//std::cout << "printing out of bounds\n";
		for (i = 0; i < (cell_width-2); i++)
			std::cout << value[i];
		std::cout << "-";
	}
	else{
		//std::cout << "printing valid\n";
		//std::cout << "printing j = " << j << "\n";
		//i = 0;
		std::cout << value;
		for (i = 0; i < j; i++);

		for (; i < cell_width-1; i++)
			std::cout << " ";

		//std::cout << "i = " << i << "\n";
	}
	std::cout << "|";
}