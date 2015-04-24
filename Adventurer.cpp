/*
 * Adventurer.cpp
 *
 *  Created on: Apr 21, 2015
 *      Author: Class2016
 */

#include "adventurers.h"

Adventurer::Adventurer(){
		//Empty constructor. Creates a blank slate.
		name_="";
		hp_=0;
		sp_=0;
		str_=0;
		stam_=0;
		mag_=0;
		luk_=0;
		ID_=-1;
}

Adventurer::Adventurer(std::string n, int hp, int sp, int str, int stam, int mag, int luk){
		//This is your standard adventurer, minus the ID field.
		name_=n;
		hp_=hp;
		sp_=sp;
		str_=str;
		stam_=stam;
		mag_=mag;
		luk_=luk;
		ID_=-1;
	}

Adventurer::Adventurer(std::string n, int hp, int sp, int str, int stam, int mag, int luk, int id){
			//This one takes an ID field. The database/char maker is likely to use this.
		name_=n;
			hp_=hp;
			sp_=sp;
			str_=str;
			stam_=stam;
			mag_=mag;
			luk_=luk;
			ID_=id;
}

std::string Adventurer::name(){
    return name_;
}

int Adventurer::hp(){
    return hp_;
}
int Adventurer::sp(){
    return sp_;
}
int Adventurer::str(){
    return str_;
}
int Adventurer::stam(){
    return stam_;
}
int Adventurer::mag(){
    return mag_;
}
int Adventurer::luk(){
    return luk_;
}
int Adventurer::ID(){
    return ID_;
}

std::string Adventurer::guild(){
    return guild_;
}

bool Adventurer::set_hp(int hp){
    if(hp>=0)
        hp_=hp;
    else
        return false;
    return true;
}

bool Adventurer::set_sp(int sp){
    if(sp>=0)
        sp_=sp;
    else
        return false;
    return true;
}

bool Adventurer::set_str(int str){
    if(str>=0)
        str_=str;
    else
        return false;
    return true;
}

bool Adventurer::set_stam(int stam){
    if(stam>=0)
        stam_=stam;
    else
        return false;
    return true;
}

bool Adventurer::set_mag(int mag){
    if(mag>=0)
        mag_=mag;
    else
        return false;
    return true;
}

bool Adventurer::set_luk(int luk){
    if(luk>=0)
        luk_=luk;
    else
        return false;
    return true;
}

void Adventurer::set_guild(std::string guild){
    guild_=guild;
}

void Adventurer::print(){
    char ch = *name_.rbegin(); //A cheat in C++ '03. Gets last letter of string.
    if(ch=='s')
        std::cout << name_ << "' Resume" << std::endl;
    else
        std::cout << name_ << "'s Resume" << std::endl;

    std::cout << std::endl;

    if(guild_!="")
        std::cout << "Guild: " << guild_ << std::endl;
    else
        std::cout << "Guild: None" << std::endl;

    std::cout << "HP:       " << hp_<< std::endl;
    std::cout << "SP:       " << sp_<< std::endl;
    std::cout << "Strength: " << str_<< std::endl;
    std::cout << "Stamina:  " << stam_<< std::endl;
    std::cout << "Magic:    " << mag_<< std::endl;
    std::cout << "Luck:     " << luk_<< std::endl << std::endl;
}
