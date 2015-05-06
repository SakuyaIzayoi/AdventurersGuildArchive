#include "adventurers.h"

bool loadAdventurerList(){
    std::string filename = "adventurer_database";
    std::ifstream ifs(filename.c_str());
  if (ifs) {
    if (ifs.is_open()) { //can you open the file?
      int hp, sp, str, stam, mag, luck;

      std::string n1, n2;
      n2 = "";

      while (ifs >> n1 >> hp >> sp >> str >> stam >> mag >> luck){
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
  return true;
}
