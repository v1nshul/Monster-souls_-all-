#pragma once
#include <array>
#include <string>

#include "armour.h"
#include "player.h"



class Inventory{
public:
    //weapon compartment; set size for now (hasn't been used)
    std::array<weapon, 3> weapons;

    int potions = 5; //each potion heals 10 health

    //the player's currently selected weapon
    std::string main;

    //links inventory to the player and their inventory via references
    Armour* armour_ptr;
    player* player_ptr;

    Inventory(player* player, Armour* armour) : player_ptr(player), armour_ptr(armour){}

    void take_potion() {
        if (potions = 0) {
            std::cout << "You have ran out of potions" << std::endl;
        }
        else {
            std::cout << "You drink a potion\n" << std::endl;
            if (player_ptr->currentHealth > player_ptr->maxHealth - 10){
                player_ptr->currentHealth = player_ptr->maxHealth;
            }
            else {
                player_ptr->currentHealth += 10;
            }

            std::cout << "Your health is now " << player_ptr->currentHealth << '\n' << std::endl;

            --potions; //player has one less potion now
        }
    }

    void print_inventory() {
        std::cout << "Your inventory:\n\n";
        std::cout << "Current main weapon: " << main << '\n' << std::endl;
        armour_ptr->description();

        std::cout << "Current potions: " << potions << '\n' << std::endl;
    }
};