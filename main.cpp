#include "adventurers.h"

std::vector<Adventurer> adventurer_list;

int main(int argc, char **argv)
{
    loadAdventurerList();

    std::string input;

    std::cout << "Adventurer or Guildmaster?: " << std::endl;
    std::cin >> input;

    while(input.compare("exit"))
    {
        if (!input.compare("Adventurer"))
        {
            handleAdventurer();
        }

        if (!input.compare("Guildmaster"))
        {
            handleGuildmaster();
        }

        saveAdventurerList();
        std::cout << "Adventurer or Guildmaster?: " << std::endl;
        std::cin >> input;
    }

    saveAdventurerList();

    return 0;
}
