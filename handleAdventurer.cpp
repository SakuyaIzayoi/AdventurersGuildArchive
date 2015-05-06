#include "adventurers.h"

void handleAdventurer()
{
    std::string input, name;
    int hp, sp, str, stam, mag, luk;

    std::cin.ignore();

    std::cout << "Enter your name: ";
    getline(std::cin, name);

    std::cout << "\nEnter your Hitpoints: ";
    getline(std::cin, input);
    std::stringstream(input) >> hp;

    std::cout << "\nEnter your Stamina Points: ";
    getline(std::cin, input);
    std::stringstream(input) >> sp;

    std::cout << "\nEnter your Strength: ";
    getline(std::cin, input);
    std::stringstream(input) >> str;

    std::cout << "\nEnter your Stamina: ";
    getline(std::cin, input);
    std::stringstream(input) >> stam;

    std::cout << "\nEnter your Magic: ";
    getline(std::cin, input);
    std::stringstream(input) >> mag;

    std::cout << "\nEnter your Luck: ";
    getline(std::cin, input);
    std::stringstream(input) >> luk;

    adventurer_list.push_back(Adventurer(name, hp, sp, str, stam, mag, luk));

    std::cout << "\nCongratulations! You have been entered into the Adventurer's Guild" << std::endl;
}
