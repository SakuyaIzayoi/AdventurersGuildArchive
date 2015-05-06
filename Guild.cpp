/*
 * Guild.cpp
 *
 *  Created on: May 4, 2015
 *      Author: Class2016
 */

#include "adventurers.h"

Guild::Guild(){
		//Blank constructor because we need one.
		name_="";
		guild_master_= NULL;
		member_count_=0;
}

Guild::Guild(std::string name){
		//Constructor with just the guild name. I expect this to be used most.
		name_=name;
		guild_master_= NULL;
		member_count_=0;
	}

Guild::Guild(std::string name, Adventurer guild_master){
		//Guild name, and guild master.
		name_=name;
		guild_master_= &guild_master;
		member_count_=1;
	}

unsigned int Guild::get_member_count(){
    return member_count_;
}

unsigned int Guild::is_member(Adventurer a){
    for(int i = 0; i < members_.size(); i++){
        if(a.guild().compare(name_)){
            return i;
        }
    }
    return -1;
}

std::vector<Adventurer> Guild::get_member_list(){
    //This is probably going to be needed for searches and things.
    return members_;
}

std::string Guild::get_name(){
    return name_;
}

bool Guild::set_guild_master(Adventurer g){
    if(guild_master_->name().compare("")){
        member_count_++;
    }
    guild_master_= &g;
    return true;
}

bool Guild::add_member(Adventurer a){
    members_.push_back(a);
    member_count_++;
    return true;
}

bool Guild::remove_member(Adventurer a){
    unsigned int i = is_member(a);
    if(!(i==-1)){
        return false;
    }
    members_.erase(members_.begin()+i);
    member_count_--;
    return true;
}

void Guild::toString()
{
    for (int i = 0; i < members_.size(); i++)
        members_[i].print();
}
