#include "adventurers.h"

void handleGuildmaster()
{
    std::string input;
    int option, selection, end;

    std::cin.ignore();

    std::cout << "Manage what guild?: ";
    getline(std::cin, input);

    Guild guild = Guild(input);

    end = 0;

    while (!end)
    {
        std::cout << "\n## Welcome to the Guildmaster System ##" << std::endl;
        std::cout << "1. Print guildmembers" << std::endl;
        std::cout << "2. Add member to guild" << std::endl;
        std::cout << "3. Remove member from guild" << std::endl;
        std::cout << "4. Finish managing the guild" << std::endl <<std::endl;

        std::cout << "Choose an option: ";
        getline(std::cin, input);
        std::stringstream(input) >> option;

        switch(option)
        {
            case 1:
                guild.toString();
                break;
            case 2:
                // add an adventurer to a guild
                displayAdventurerListTable();
                std::cout << "Adventurer Index: " << std::endl;
                getline(std::cin, input);
                std::stringstream(input) >> selection;
                guild.add_member(adventurer_list[selection]);
                break;
            case 3:
                // remove adventurer from the guild
                displayAdventurerListTable();
                std::cout << "What adventurer to remove? (Name Please): ";
                getline(std::cin, input);
                for (int i = 0; i < adventurer_list.size(); i++)
                {
                    if (!adventurer_list[i].name().compare(input))
                        selection = i;
                }
                guild.remove_member(adventurer_list[selection]);
                break;
            case 4:
                end++;
                break;
            default:
                break;
        }
    }
}
