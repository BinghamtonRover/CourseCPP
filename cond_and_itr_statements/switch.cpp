#include <iostream>

int main(){
    int var = 20;

    // switch statement with breaks at every case
    switch (var)
    {
    case 10:
        std::cout << "var equals 10" << std::endl;
        break;
    case 20:
        std::cout << "var equals 20" << std::endl;
        break;
    case 30:
        std::cout << "var equals 30" << std::endl;
        break;
    default:
        std::cout << "no matching case found" << std::endl;
        break;
    }

    std::cout << "==================" << std::endl;

    // switch statement with no breaks
    switch (var)
    {
    case 10:
        std::cout << "var equals 10" << std::endl;
    case 20:
        std::cout << "var equals 20" << std::endl;
    case 30:
        std::cout << "var equals 30" << std::endl;
    default:
        std::cout << "no matching case found" << std::endl;
    }

    std::cout << "==================" << std::endl;

    // another use case of switch statement 
    switch (var)
    {
    case 10:
    case 20:
    case 30:
        std::cout << "var equals " << var << std::endl;
        break;
    default:
        std::cout << "no matching case found" << std::endl;
        break;
    }
}