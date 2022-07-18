#include <iostream>
#include "toContinue.h"

int name_in(){
    char inp_; 
    std::string user_name;
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
    }
    else{
        std::cout << "my god, cant even press enter, ITS GAME OVER FOR YOU !";
    }


    return 0;
}