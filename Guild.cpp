/*
 * Guild.cpp
 *
 *  Created on: May 4, 2015
 *      Author: Class2016
 */
#include <string>
#include <iostream>
#include <Adventurer.cpp> // TODO make sure this works. A lot hinges on it.
#include <vector>

class Guild{
private:
	std::string name_
	Adventurer guild_master_;
	unsigned int member_count_;
	std::vector<Adventurer> members_;
public:

	Guild(){
		//Blank constructor because we need one.
		name_="";
		guild_master_=NULL;
		member_count_=0;
	}

	Guild(std::string name){
		//Constructor with just the guild name. I expect this to be used most.
		name_=name;
		guild_master_=NULL;
		member_count_=0;
	}

	Guild(std::string name, Adventurer guild_master){
		//Guild name, and guild master.
		name_=name;
		guild_master_=guild_master;
		member_count_=1;
	}

	unsigned int get_member_count(){
		return member_count_;
	}

	unsigned int is_member(Adventurer a){
		//This SHOULD return index of adventurer if adventurer is in the roster.
		//Not sure if this'll work, since the adventurer include is wigging out.
		unsigned int k = 0;
		for(std::vector<Adventurer>::iterator i = members_.begin(); i!=members_.end(); i++){
			if(i == a){
				return k;
			}
			k++;
		}
		return -1;
	}

	std::vector<Adventurer> get_member_list(){
		//This is probably going to be needed for searches and things.
		return members_;
	}

	std::string get_name(){
		return name_;
	}

	bool set_guild_master(Adventurer g){
		if(guild_master_==NULL){
			member_count_++;
		}
		guild_master_=g;
		return true;
	}

	bool add_member(Adventurer a){
		if(is_member(a)==-1){
			return false;
		}
		members_.push_back(a);
		member_count_++;
		return true;
	}

	bool remove_member(Adventurer a){
		unsigned int i = is_member(a);
		if(!(i==-1)){
			return false;
		}
		members_.erase(members.begin()+i);
		member_count_--;
	}

};



