#include <iostream>
#include <vector>

int main(){
    std::vector<int> m;
    m.resize(10);
    int i;

    i = 0;
    while(i < m.size()){
        m[i] = i * 2;
        i++;
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "==================" << std::endl;

    i = 2;
    while(i < 100 && i % 13 != 0){
        std::cout << "i = " << i << std::endl;
        i++;
    }
    
    i = 0;
    while(true){
        std::cout << "iteration = " << i << std::endl;
        i++;
    }
}