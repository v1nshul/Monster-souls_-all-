#pragma once

#include <iostream>
#include "name.h"

class player 
{
    public:
    int maxHealth;
    std::string name = user_name;
    int currentHealth; 
    player(){
        maxHealth = 100;
    }

    void show_player_stats(){
        std::cout <<"Max health: " << currentHealth << "\n";
    }
};


