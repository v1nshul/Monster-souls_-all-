#include <iostream>

class weapon
{

public:
    int level;
    int range;
    int accuracy;
    void great_choice(){
        std::cout << "\n" << "great choice!" <<"\n"<<"\n";
    }
};


int sword_sel(){
    weapon sword_;
    sword_.level = 1;
    sword_.range = 1;
    sword_.accuracy = 5;
    sword_.great_choice();
    return 0;
}

int bow_sel(){
    weapon bow_;
    bow_.level = 1;
    bow_.range = 4;
    bow_.accuracy = 2;
    bow_.great_choice();
    return 0; 
}

int axe_sel(){
    weapon axe_;
    axe_.level =1; 
    axe_.range = 2;
    axe_.accuracy = 7;
    axe_.great_choice();
    return 0;
}