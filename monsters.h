#include <iostream> 

class monsters
{

public:
    int monster_lvl; 
    std::string name; 

    void monster_intro(){
        std::cout << "haha be ready to fight " << std::endl; 
    }
};

int vamp_squid(){
    monsters vampireSquid;
    vampireSquid.monster_lvl = 2;
    vampireSquid.name = "Vampire Squid";
    std::cout << "a Vampire Squid of level " << vampireSquid.monster_lvl << "appears !" << "\n";
    std::cout << "this is no blood sucker, it got poisnous fangs that can rot you in less than 5 seconds" << "\n";
    vampireSquid.monster_intro();
    return 0;
}


