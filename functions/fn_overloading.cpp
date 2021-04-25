#include <iostream>

int function(int x){
    std::cout << "Print int: " << x << std::endl;
    return 0;
}

int function(float x){
    std::cout << "Print float: " << x << std::endl;
    return 0;
}

int function(double x){
    std::cout << "Print double: " << x << std::endl;
    return 0;
}

// overloading is not allowed by return type
//void function(float x){
//    std::cout << "Print: " << x << std::endl;
//}

int main(){
    function(1);
    // using literal to force use function(float)
    function(4.5f);
    function(9.2);
}