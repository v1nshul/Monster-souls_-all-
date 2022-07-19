#include <string>



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
    static int health;
    static std::string name;
    static bool isInBattle;
    
};

// At the start of the game:
//     -the players health should be 100
//     -they are not in battle
//     -the hero's name is Quandale Dingle

int Player::health = 100;
bool Player::isInBattle = false;
std::string Player::name = "Quandale Dingle";