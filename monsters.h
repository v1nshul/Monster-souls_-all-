#pragma once

#include <iostream> 
#include "Windows.h"

class monsters
{

public:
    int monster_lvl; 
    const int monster_maxHealth;
    int monster_currentHealth;
    std::string name; 

    monsters() : monster_maxHealth(100){
        monster_currentHealth = 100;
    };

    void monster_intro(){
        system("Color 0C");
        std::cout << "haha be ready to fight " << std::endl; 
        system("Color 07");
    }
};

int vamp_squid(){
    monsters vampireSquid;
    vampireSquid.monster_lvl = 2;
    vampireSquid.name = "Vampire Squid";
    std::cout << "a Vampire Squid of level " << vampireSquid.monster_lvl << " appears !" << "\n";
    std::cout << "this is no blood sucker, it got poisnous fangs that can rot you in less than 5 seconds" << "\n";
    vampireSquid.monster_intro();
    return 0;
}


