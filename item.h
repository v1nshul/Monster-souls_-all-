#ifndef ITEM_H
#define ITEM_H



#include <string>
#include <vector>


/**
 * @brief General class for all items in the game.
 * 
 * @details This class will be what all item child classes inherit from. 
 * This includes weapons, armour, potions, etc.
 * 
 * Information needed for every item is its stat modifiers.
 * 
 * There will also be special items such as a magical ring/pendant, and these
 * can have the type 'special'
 * 
 * 
 */
class Item {
    
    public:

        std::string type;

        //0 attack, 1 block, 2 speed
        std::vector<int> modifiers;

        Item(std::string type, int attack_mod, int block_mod, int speed_mod) {
            this->type = type;

            this->modifiers[0] = attack_mod;
            this->modifiers[1] = block_mod;
            this->modifiers[2] = speed_mod;
        }


};





#endif