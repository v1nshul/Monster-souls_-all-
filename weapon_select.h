#include <iostream>
#include "weapons.h"


int select_message(){
    int index;
    std::cout<< "time to select your weapon" << "\n";
    std::cout << "1. Sword" <<"\n" << "2. Bow " << "\n" << "3. Axe" << "\n";
    std::cin >> index;
    if (index == 1)
    {
        sword_sel();
    }
    if (index == 2){
        bow_sel();
    }
    if (index == 3){
        axe_sel();
    }
    else{
        sword_sel();
    }
    return 0;
    
}

