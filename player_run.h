#pragma once 

#include <iostream>
#include "GAME_OVER.h"

int player_run(){
    std::string pathInp_;
    std::cout << "you got a path to choose from, X or Z" << std::endl;
    std::cout << "CHOOSE ONE, lets see if you survive :" << "\n";
    std::cin >> pathInp_;
    if(pathInp_ == "x" || "X" || "z" || "Z"){
        game_ov();
    }
    return 0;
}