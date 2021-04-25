#include <iostream>

int main(){
    int i = 15;

    // with while loop
    while(i < 10){
        std::cout << "while i = " << i << std::endl;
        i++;
    }

    // with do-while loop
    do {
        std::cout << "do-while i = " << i << std::endl;
        i++;
    } while(i < 10);
}