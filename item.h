#ifndef ITEM_H

#define NO_STATS 1
#define ITEM_H


#include <string>
#include <array>


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

        const std::string type;

        const std::array<int, NO_STATS> modifiers;

        Item(std::string type, std::array<int, NO_STATS> modifiers) : type(type), modifiers(modifiers) {}


};





#endif