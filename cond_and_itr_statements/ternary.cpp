#include <iostream>

int main(){
    int var = 100;

    // if-else block
    if(var == 10){
        std::cout << "var equals 10" << std::endl;
    }
    else if(var > 10){
        std::cout << "var is greater than 10" << std::endl;
    }
    else{
        std::cout << "var is less than 10" << std::endl;
    }

    // using ternary operator
    (var == 10) ? std::cout << "var equals 10" << std::endl : (var > 10) ? std::cout << "var is greater than 10" << std::endl : std::cout << "var is less than 10" << std::endl;
}