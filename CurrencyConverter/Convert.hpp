#include "Currency.hpp"

void convert(){
    std::cout << "Please enter the current USD you want to convert to Japanese Yen:\n";
    std::cin >> USD;

    Yen = USD * 136;

    std::cout << "You have: " << Yen << " Japanese yen. Thanks for using our services!\n ";
}