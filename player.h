#include <string>
#include <map>



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

        //is it possible to have static const
        static /*const*/ int max_health;


        //static std::map inventory;


        
    
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