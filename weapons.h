#ifndef _WP_
#define _WP_


#include <iostream>

class weapon
{

public:
    int level;
    int range;
    int accuracy;
    int damage;
    void great_choice(){
        std::cout << "\n" << "great choice!" <<"\n"<<"\n";
    }
};

weapon sword_;
int sword_sel(){
    
    sword_.level = 1;
    sword_.range = 1;
    sword_.accuracy = 5;
    sword_.damage = (sword_.level + sword_.range + sword_.accuracy)/3;
    sword_.great_choice();
    return 0;
}

weapon bow_;
int bow_sel(){
    
    bow_.level = 1;
    bow_.range = 4;
    bow_.accuracy = 2;
    bow_.damage = (bow_.level + bow_.range + bow_.accuracy)/3;
    bow_.great_choice();
    return 0; 
}

weapon axe_;
int axe_sel(){
    
    axe_.level =1; 
    axe_.range = 2;
    axe_.accuracy = 7;
    axe_.damage = (axe_.level + axe_.range + axe_.accuracy)/3;
    axe_.great_choice();
    return 0;
}

#endif