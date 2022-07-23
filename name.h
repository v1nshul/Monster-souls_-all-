#pragma once

#include <iostream>
#include "toContinue.h"
std::string user_name;
int name_in(){
    char inp_; 
    std::cout << "enter your name: " ;
    std::cin >> user_name;
    std::cout << "\n";
    std::cout << "press Enter to continue.." << "\n";
    std::cin.ignore();
    inp_ = std::cin.get();

    if(to_cont(inp_)==true)
    {
        std::cout << "welcome to the far ends of the forest " << user_name << std::endl; 
        std::cout << "\n";
        std::cout << "just an advice. DONT RUN AWAY :)" <<"\n";
    }
    else{
        std::cout << "my god, cant even press enter, ITS GAME OVER FOR YOU !";
    }


    return 0;
}