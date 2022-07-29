#include <iostream> 
#include "name.h"
#include "weapon_select.h"
#include "tutorial.h"
#include "player.h"

int main(){
    
    name_in();
    select_message();
    tutorial();

    // std::cout << Player::health;

    return 0;

}




// vanshul's main.cpp
// #include "name.h"
// #include "weapon_select.h"
// #include "level_one.h"
// #include "toContinue.h"




// int main(){
//     char inp_1;
//     name_in();
//     std::cout << "press Enter to continue.." << "\n";
//     inp_1 = std::cin.get();
//     if(to_cont(inp_1)==true){
//         select_message();
//         level1();
//     }
//     else{
//         std::cout << "my god, cant even press enter, ITS GAME OVER FOR YOU !";
//     }
    

//     return 0;
// }