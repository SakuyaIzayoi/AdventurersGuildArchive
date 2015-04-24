#include "adventurers.h"

bool loadAdventurerList(){
  //tring filename = list_file;
    std::string filename = "adventurer_database";
    std::ifstream ifs(filename.c_str());
  //ifstream ifs("adventurer_database");
  if (ifs) {
    if (ifs.is_open()) { //can you open the file?
      std::cout << "File " << filename << " has been opened" << std::endl;
      //int i, j;
      //int str, dex, con;
      int hp, sp, str, stam, mag, luck;
      int count = 0;

      std::string n1, n2;
      n2 = "";

      while (!ifs.eof()){
        //ifs >> n1 >> str >> dex >> con;
        ifs >> n1 >> hp >> sp >> str >> stam >> mag >> luck;
        std::cout << n1 << "-" << hp << "-" << sp << "-" << str << "-" << stam << "-" << mag << "-" << luck << std::endl;
        adventurer_list.push_back(Adventurer(n1, hp, sp, str, stam, mag, luck));
        //create adventure with these parameters and store them into vector
      }

    }
    else{
      std::cout << "The file " << filename << " cannot be opened" << std::endl;
      return false;
    }
  }
  else{
    std::cout << "The file " << filename << " does not exist" << std::endl;
    return false;
  }
  ifs.close();
  std::cout << "File " << filename << " has closed" << std::endl;
  return true;
}
