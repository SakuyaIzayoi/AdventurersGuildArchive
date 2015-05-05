#ifndef _ADVENTURERS_H_
#define _ADVENTURERS_H_

#include <string>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <math.h>

#include <sys/types.h>

class Adventurer;
class Guild;

class Adventurer{
private:
	std::string name_,guild_;
	int hp_,sp_,str_,stam_,mag_,luk_,ID_;
public:
    Adventurer();
	Adventurer(std::string n, int hp, int sp, int str, int stam, int mag, int luk);
	Adventurer(std::string n, int hp, int sp, int str, int stam, int mag, int luk, int id);

    std::string name();
    int hp();
    int sp();
    int str();
    int stam();
    int mag();
    int luk();
    int ID();

    bool set_hp(int);
    bool set_sp(int);
    bool set_str(int);
    bool set_stam(int);
    bool set_mag(int);
    bool set_luk(int);
    void set_guild(std::string);
    std::string guild();

    void print();
};

class Guild {
private:
	std::string name_;
	Adventurer *guild_master_;
	unsigned int member_count_;
	std::vector<Adventurer> members_;
public:
    Guild();
    Guild(std::string);
    Guild(std::string, Adventurer);
    unsigned int get_member_count();
    unsigned int is_member(Adventurer);
    std::vector<Adventurer> get_member_list();
    std::string get_name();
    bool set_guild_master(Adventurer);
    bool add_member(Adventurer);
    bool remove_member(Adventurer);
};

bool saveAdventurerList();
bool loadAdventurerList();

void displayAdventurerList();
void displayAdventurerListTable();
void printCell(int, int);
void printCell(int, std::string);

void sort(std::string, bool);
void insertionSort(std::string, bool);    //enter a string of what stat you want to sort by
int adventurerCompare(Adventurer, Adventurer, std::string); //returns -1, 0 or 1

extern std::vector<Adventurer> adventurer_list;

#endif
