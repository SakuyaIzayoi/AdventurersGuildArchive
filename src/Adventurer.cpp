/*
 * Adventurer.cpp
 *
 *  Created on: Apr 21, 2015
 *      Author: Class2016
 */

#include <string>
#include <iostream>

class Adventurer{
private:
	std::string name_,guild_;
	int hp_,sp_,str_,stam_,mag_,luk_,ID_;
	//The ID field exists to be

	Adventurer(){
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

	Adventurer(std::string n, int hp, int sp, int str, int stam, int mag, int luk){
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

	Adventurer(std::string n, int hp, int sp, int str, int stam, int mag, int luk, int id){
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

	std::string name(){
		return name_;
	}

	inline int hp(){
		return hp_;
	}
	inline int sp(){
		return sp_;
	}
	inline int str(){
		return str_;
	}
	inline int stam(){
		return stam_;
	}
	inline int mag(){
		return mag_;
	}
	inline int luk(){
		return luk_;
	}
	inline int ID(){
		return ID_;
	}

	inline std::string guild(){
		return guild_;
	}

	inline bool set_hp(int hp){
		if(hp>=0)
			hp_=hp;
		else
			return false;
		return true;
	}

	inline bool set_sp(int sp){
		if(sp>=0)
			sp_=sp;
		else
			return false;
		return true;
	}

	inline bool set_str(int str){
		if(str>=0)
			str_=str;
		else
			return false;
		return true;
	}

	inline bool set_stam(int stam){
		if(stam>=0)
			stam_=stam;
		else
			return false;
		return true;
	}

	inline bool set_mag(int mag){
		if(mag>=0)
			mag_=mag;
		else
			return false;
		return true;
	}

	inline bool set_luk(int luk){
		if(luk>=0)
			luk_=luk;
		else
			return false;
		return true;
	}

	inline void set_guild(std::string guild){
		guild_=guild;
	}

	void print(){
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
		std::cout << "Luck:     " << luk_<< std::endl;
	}

	void main(int argc,char *argv[]){
		Adventurer Bob("Bob",0,0,0,0,0,0);
		Bob.print();
	}
};


