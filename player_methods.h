#ifndef _PL_METH_
#define _PL_METH_


#include <iostream>
#include "monsters.h"
#include "player.h"
#include "player_run.h"
#include "player_def.h"


monsters sample;

int player_action(){
    //int sample_player_hp;
    //int sample_monster_hp;
    char attack_inp;
    std::cout << "press A to attack, D to defend, R to run away ";
    std::cin.ignore();
    std::cin >> attack_inp;
    std::cout << attack_inp << std::endl;
    
    if(attack_inp == 'r' || attack_inp == 'R')
    {
        player_run();
    }
    
    else if(attack_inp == 'A'|| attack_inp == 'a')
    {
       
       while(sample.monster_currentHealth > 0){
            int a = rand() % 100;
            sample.monster_currentHealth = sample.monster_currentHealth- a;
            if(sample.monster_currentHealth <= 0){
            std::cout <<"u won";
            break;
            }   
            else
            {
                std::cout<<"monsters current health is " << sample.monster_currentHealth << std::endl;
                player_action();
            }
            
            
        
       }
    }

   if(attack_inp == 'd' || attack_inp == 'D')
    {
        player_defend();
        player_action();
    }
    

    return 0;
}



#endif