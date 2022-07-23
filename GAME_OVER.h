#pragma once 
#include <iostream> 
#include "Windows.h"

int game_ov(){
    int i = 0;
    while(i <= 20){
        system("Color 0C");
        std::cout << "GAME OVER" << std::endl;
        i++;
        system("color 09");
        system("color 07");
        
    }
    return 0;
}