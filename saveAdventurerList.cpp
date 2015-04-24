#include "adventurers.h"

bool saveAdventurerList(){
  std::ofstream myfile;
  myfile.open("adventurer_database");

  int i = 0;
  while (i < adventurer_list.size() - 1){
    myfile << adventurer_list[i].name() << " ";
    myfile << adventurer_list[i].hp() << " ";
    myfile << adventurer_list[i].sp() << " ";
    myfile << adventurer_list[i].str() << " ";
    myfile << adventurer_list[i].stam() << " ";
    myfile << adventurer_list[i].mag() << " ";
    myfile << adventurer_list[i].luk();
    myfile << "\n";       //end line
    i++;
  }

  if (i != 0){
    myfile << adventurer_list[i].name() << " ";
    myfile << adventurer_list[i].hp() << " ";
    myfile << adventurer_list[i].sp() << " ";
    myfile << adventurer_list[i].str() << " ";
    myfile << adventurer_list[i].stam() << " ";
    myfile << adventurer_list[i].mag() << " ";
    myfile << adventurer_list[i].luk();
  }

  std::cout << "closing..." << std::endl;
  myfile.close();
  return 0;
}
