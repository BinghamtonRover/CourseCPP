#include <iostream>

int main(){
    unsigned int var1 = 5;
    unsigned var2 = 1;

    std::cout << "Size of unsigned int: " << sizeof(var1) << std::endl; 
    std::cout << "Size of unsigned: " << sizeof(var2) << std::endl;
    
    signed int var3 = 5;
    signed var4 = 5;

    std::cout << "Size of signed int: " << sizeof(var3) << std::endl; 
    std::cout << "Size of signed: " << sizeof(var4) << std::endl;

    for(int i = 0; i < 10; i++){
        std::cout << var1-- << std::endl;
    }

    std::cout << std::endl;

    for(int i = 0; i < 10; i++){
        std::cout << var3-- << std::endl;
    }

    /////////////////////////////////////////////////
    struct MyStruct{
        int data;
        char more_data;
        MyStruct(){}
        ~MyStruct(){}
    };
    auto auto_struct = new MyStruct();
    struct MyStruct* reg_struct = new MyStruct();
}