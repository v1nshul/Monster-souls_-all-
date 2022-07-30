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
        currentHealth = maxHealth;
    }

    void show_player_stats(){
        std::cout <<"Max health: " << currentHealth << "\n";
    }
};


