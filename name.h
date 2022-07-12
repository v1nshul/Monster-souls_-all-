#include <iostream>



int name_in(){
    std::string user_name;
    std::cout << "enter your name: " ;
    std::cin >> user_name;
    std::cout << "welcome to the far ends of the forest " << user_name << std::endl; 
    return 0;
}