#include <iostream>

int main(){
    int var1 = 0x42;
    char var2 = 0x42;
    short var3 = 3;
    long var4 = 0b010; 
    long long var5 = 052;

    std::cout << "Size of int: " << sizeof(var1) << std::endl; 
    std::cout << "Size of char: " << sizeof(var2) << std::endl; 
    std::cout << "Size of short: " << sizeof(var3) << std::endl; 
    std::cout << "Size of long: " << sizeof(var4) << std::endl; 
    std::cout << "Size of long long: " << sizeof(var5) << std::endl; 

    std::cout << "int value is: " << var1 << std::endl;
    std::cout << "char value is: " << var2 << std::endl;
}