#ifndef _ADVENTURERS_H_
#define _ADVENTURERS_H_

#include <string>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <fstream>

#include <sys/types.h>

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

bool saveAdventurerList();
bool loadAdventurerList();

extern std::vector<Adventurer> adventurer_list;

#endif
