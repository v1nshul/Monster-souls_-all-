#pragma once
#include <iostream> 
#include "player.h"

int player_defend(){
    player sample_;
    sample_.currentHealth = sample_.currentHealth + 10;
    std::cout << "your health increased by 10!" << "\n";
    return 0;
}