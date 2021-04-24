#include <iostream>

int main(){
    const int VAR_1 = 1234;
    constexpr int VAR_2 = 8765;

    // cannot modify them after being initialized
    //VAR_1 = 0x12;
    //VAR_2 = 0x54;

    std::cout << VAR_1 << std::endl;
    std::cout << VAR_2 << std::endl;
}