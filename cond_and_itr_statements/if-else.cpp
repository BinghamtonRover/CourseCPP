#include <iostream>

int main(){
    int var = 10;
    int var2 = 40;

    // this one if-else block
    if(var == 10){
        std::cout << "var equals 10" << std::endl;
    }
    else if(var > 10){
        std::cout << "var is greater than 10" << std::endl;
    }
    else{
        std::cout << "var is less than 10" << std::endl;
    }

    // this is another if-else block
    if(var <= 20 && var2 > 30){
        std::cout << "var is smaller or equal to 10 and var 2 is greater than 30" << std::endl;
    }
}