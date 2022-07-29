#include <string>
#include <map>
#include <vector>
#include <tuple>

//inclusion of libraries that one of us wrote
#include "item.h"
#include "weapons.h"


#define NO_STATS 1



/**
 * @brief Contains the state of the player
 * 
 * @details The member variables of this class each represent
 * some information about the current state of the player and 
 * their progress in the game.
 * 
 * 
 * 
 */

class Player {

    public:
        static int health;
        static std::string name;
        static bool isInBattle;

        //pointers to the player's currently selected items
        static Item* selected_weapon;
        //etc.




        
        static const int max_health;





        // player's stats

        // static std::array<int, NO_STATS> stats;




        // //inventory compartment pointers

        // static tuple<Weapon*, Armour*, Special*> inventory;




        // //inventory compartments

        // static weapon, armour, special, etc. vectors


        
    
};

// At the start of the game:

//     -the players maximum health should be 100
//          -they should start at max health

//     -they are not in battle

//     -the hero's name is Quandale Dingle

int Player::max_health = 100;

int Player::health = Player::max_health;
bool Player::isInBattle = false;
std::string Player::name = "Quandale Dingle";
std::map<std::string, std::vector<Item>>  Player::inventory = ;

const Player::max_health = 100;
