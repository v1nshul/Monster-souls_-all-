#pragma once
#include <iostream>
#include <chrono>
#include <thread>


void intro() {
    std::cout << "Sytanxo Productions presents";


    for (int i = 0; i < 4; ++i) {
        //line below taken from
        //https://stackoverflow.com/questions/4184468/sleep-for-milliseconds
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));


        std::cout << '\n';

    }
    
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));

    std::cout << "~~~~~~~MONSTER SOULS~~~~~~~";
}