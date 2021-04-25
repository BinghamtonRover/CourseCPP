#include <iostream>
#include <vector>

int main(){
    std::vector<int> m;
    m.resize(10);

    // classic for loop structure
    for(int i = 0; i < 10; i++){
        m[i] = i * 2;
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "==================" << std::endl;

    // for loop with multiple conditional statements
    for(int i = 2; i < 100 && i % 13 != 0; i++){
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "==================" << std::endl;

    for(auto x : m){
        std::cout << "current = " << x << std::endl;
    }
}