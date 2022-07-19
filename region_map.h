#include <iostream>

#include <iostream>
//#include <iomanip>
#include <array>

/**
 * @brief Outputs an expanded map of the current region, showing where the player is within that region.
 * 
 * @param location The position of the player within the region.
 * 
 * 
 */
void output_region(std::array<int, 2> location) {
    
    //complete: extract row, column from location, and then output map of current region showing player's position within it 
    
    for(int i = 0; i < 9; ++i)
    {
        // // if(i==0 || i==9)
        // // {
        //     // for(int j = 0; j < 10; ++j)
        //     // {
        //     //     std::cout << '-' ;
        //     // }
        //     // std::cout << std::endl;
        // // }
        // // else {
        // //     std::cout << '|' << std::setw(9) << '|' << std::endl;
        // // }
        // if (i % 2 == 0)
        // {
        //     for(int j = 0; j < 9; ++j)
        //     {
        //         std::cout << '-' ;
        //     }
        //     std::cout << std::endl;
        // }
        // else
        // {
        //     for(int j = 0; j < 9; ++j)
        //     {
        //         if(j % 2 == 0)
        //         {
        //             std::cout << '|' ;
        //         }
        //         else
        //         {
        //             std::cout << ' ' ;
        //         }
        //     }
        //     std::cout << std::endl;
        // }
    }


}
