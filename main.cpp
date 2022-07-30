#include <iostream>
#include <map>


#include "name.h"
#include "weapon_select.h"
#include "tutorial.h"
#include "player.h"
#include "level_one.h"

#include "armour.h"
#include "inventory.h"

int main(){

    //creating a player for the new game, along with
    //their inventory, stats, and a suit of armour
    //(all hard coded as a concept)
    player player;

    //the players stats
    std::map<char, int> stats;
    stats['a'] = 12; //attack
    stats['b'] = 5; //block
    stats['s'] = 6; //speed


    //eventually will be more armour that the player can find
    Armour armour(3, 4, 2, 2);


    //new Inventory instance
    Inventory inventory(&player, &armour);

    if (damage_ == sword_.damage) {
        inventory.main = "sword";
    }
    else if (damage_ == bow_.damage) {
        inventory.main = "bow";
    }
    else
    {
        inventory.main = "axe";
    }

    



    
    



    //pre-game; vanshul's functions
    name_in();
    select_message();

    


    //the main loop of the game

    bool isInBattle = false;
    while(!isInBattle) {
        char choice;

        std::cout << "What would you like to do?\n\n" << "1 - view inventory\n" << "2 - view health\n" << "3 - view stats\n" <<  "4 - take a potion\n" << "5 - battle a monster\n" << '>';
        std::cin.ignore();
        std::cin >> choice;


        switch(choice) {
            case '1':
                inventory.print_inventory();
                break;
            case '2':
                std::cout << "Your health is: " << player.currentHealth << '\n' << std::endl;
                break;
            case '3':
                std::cout << "Your stats are:\n\n" << "Attack: " << stats['a'] << "\nBlock: " << stats['b'] << "\nSpeed: " << stats['s'] << '\n' << std::endl; 
                break;
            case '4':
                inventory.take_potion();
                break;
            case '5':
                isInBattle = true;
        }
    }

    //vanshul's level 1

    level1();


   

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