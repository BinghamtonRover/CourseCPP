#include <iostream>
#include <stdio.h>

int main(){
    float pi = 3.14159265359;
    double avogadro = 6.0221409e+23;

    // convert float to uint32_t
    // get the address of pi variable and cast it to a pointer to integer so the compiler is happy
    int* cast_to_int = (int*) &pi;
    uint32_t float_to_uint32 = 0;
    for(int i = 31; i >= 0; i--){
        int temp = *cast_to_int & 1 << i;
        if(temp == 0){
            float_to_uint32 = float_to_uint32 << 1;
            float_to_uint32 = float_to_uint32 | 0;
        }
        else{
            float_to_uint32 = float_to_uint32 << 1;
            float_to_uint32 = float_to_uint32 | 1;
        }
    }

    std::cout << "Size of pi: " << sizeof(pi) << std::endl; 
    std::cout << "Size of avogadro: " << sizeof(avogadro) << std::endl; 

    std::cout << "int value is: " << pi << std::endl;
    std::cout << "char value is: " << avogadro << std::endl;

    printf("float to uint32_t is: %x", float_to_uint32);
}