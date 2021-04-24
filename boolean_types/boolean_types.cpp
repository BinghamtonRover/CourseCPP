#include <iostream>

int main(){
    bool var1 = true;
    bool var2 = false;

    // no need to do this
    if(var1 == true){
        std::cout << "This is true" << std::endl;
    }

    if(var2 == false){
        std::cout << "This is false" << std::endl;
    }

    // instead, you can do this
    if(var1){
        std::cout << "This is true" << std::endl;
    }

    if(!var2){
        std::cout << "This is false" << std::endl;
    }
}