#include "adventurers.h"

/*
 * As of now only the loading, creation, and storage of Adventurers is implemented.
 * Future builds will have the ability to input a character from the command
 * line
 */

std::vector<Adventurer> adventurer_list;

int main(int argc, char **argv)
{
    std::cout << "Testing..." << std::endl;

    // Default constructor
    adventurer_list.push_back(Adventurer());

    // Constructor with statistics
    adventurer_list.push_back(Adventurer("Billy", 1, 2, 3, 4, 5, 6));

    // Constructor with stats and ID
    adventurer_list.push_back(Adventurer("Bobby", 1, 2, 3, 4, 5, 6, 12345));

    // print contents of adventurer_list
    for (int i = 0; i < adventurer_list.size(); i++)
    {
        adventurer_list[i].print();
    }

    // set Bobby's guild to "The Barbarian's Guild"
    adventurer_list[2].set_guild("The Barbarian's Guild");
    adventurer_list[2].print();
    if (adventurer_list[2].name().compare("The Barbarian's Guild"))
    {
        std::cout << "Name Setting OK..." << std::endl;
    }
    else
    {
        std::cout << "Name Setting BAD..." << std::endl;
    }

    // check setters
    adventurer_list[1].set_hp(20);
    adventurer_list[1].set_sp(14);
    adventurer_list[1].set_luk(42);
    adventurer_list[1].set_mag(17);
    adventurer_list[1].set_str(12);
    adventurer_list[1].set_stam(6);

    Adventurer *a = &adventurer_list[1];

    if (a->hp() == 20 && a->sp() == 14 && a->luk() == 42 && a->mag() == 17 && a->str() == 12 && a->stam() == 6)
    {
        std::cout << "Setters OK..." << std::endl;
    }
    else
    {
        std::cout << "Setters BAD..." << std::endl;
    }

    // make a guild named "testguild"
    Guild guild = Guild("testguild");

    // add bobby to the guild
    std::cout << "Adding bobby..." << std::endl;
    guild.add_member(adventurer_list[2]);

    std::cout << "Printing..." << std::endl;
    // display guildmember bobby
    guild.get_member_list()[0].print();

    return 0;
}
