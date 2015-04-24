#include "adventurers.h"

bool saveAdventurerList(){
    std::ofstream myfile;
  //myfile.open(ad_name.c_str());
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
    /*
    myfile << "John_Doe ";
    myfile << 10 << " ";   //store stat 1
    myfile << 11 << " ";  //store stat 2
    myfile << 12 << " ";  //store stat 3
    myfile << 13 << " ";  //store stat 3
    myfile << 14 << " ";  //store stat 3
    myfile << 15 << " ";  //store stat 3
    */
    myfile << "\n";       //end line
    std::cout << i << ",";
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

  myfile.close();
  return 0;
}
