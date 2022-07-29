#pragma once


#include <iostream>
#include "weapons.h"

int damage_;
int select_message(){
    int index;
    std::cout<< "time to select your weapon" << "\n";
    std::cout << "1. Sword" <<"\n" << "2. Bow " << "\n" << "3. Axe" << "\n" << "\n";
    std::cin >> index;
    
    if (index == 1)
    {
        sword_sel();
        damage_ = sword_.damage;
    }
    if (index == 2){
        bow_sel();
        damage_ = bow_.damage;
    }
    if (index == 3){
        axe_sel();
        damage_ = axe_.damage;
    }
    return 0;
    
}

