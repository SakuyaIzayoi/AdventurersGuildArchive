#include "adventurers.h"

std::vector<Adventurer> adventurer_list;

int main(int argc, char **argv)
{
    loadAdventurerList();

    Adventurer adv = Adventurer("Steve", 42, 12, 7, 6, 9, 69);

    adventurer_list.push_back(adv);

    adventurer_list[0].print();
    adventurer_list[1].print();
    adventurer_list[2].print();

    //saveAdventurerList();
}
