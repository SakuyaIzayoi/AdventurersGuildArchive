#include "adventurers.h"

std::vector<Adventurer> adventurer_list;

int main(int argc, char **argv)
{
    loadAdventurerList();

    Adventurer adv = Adventurer("John", 42, 12, 17, 6, 9, 69);

    adventurer_list.push_back(adv);

    for (int i = 0; i < adventurer_list.size(); i++)
    {
        adventurer_list[i].print();
    }

    saveAdventurerList();

    return 0;
}
//Useless Commit