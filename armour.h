#ifndef ARMOUR_H
#define ARMOUR_H

#include <string>
#include <iostream>

class Armour {
private:
    int head;
    int chest;
    int legs;
    int feet;

public:
    
    int block_mod;


    Armour(int head, int chest, int legs, int feet) : head(head), chest(chest), legs(legs), feet(feet) {
        block_mod = head + chest + legs + feet;
    }

    void description() {
        std::cout << "Armour stats:\n\nhead: " << head << "\nchest:" << chest << "\nlegs:" << legs << "\nfeet:" << feet << "\n\nTotal: " << block_mod << '\n' << std::endl;
    }
};


#endif