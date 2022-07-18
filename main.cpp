#include <iostream> 
#include "name.h"
#include "weapon_select.h"
#include "level1.h"
#include "toContinue.h"

int main(){
    char inp_1;
    name_in();
    std::cout << "press Enter to continue.." << "\n";
    inp_1 = std::cin.get();
    if(to_cont(inp_1)==true){
        select_message();
        level1();
    }
    else{
        std::cout << "my god, cant even press enter, ITS GAME OVER FOR YOU !";
    }
    

    return 0;
}