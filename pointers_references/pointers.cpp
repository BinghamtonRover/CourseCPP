#include <iostream>
#include <stdio.h>

int main(){
    int var = 100;
    int* var_ptr = &var;
    int dereferencing = *var_ptr;

    printf("var = %d\n", var);
    printf("address of var = %p\n", var_ptr);
    printf("value after dereferencing = %d\n", dereferencing);

    // all pointers are the same size
    printf("size of char* = %d bytes\n", sizeof(char*));
    printf("size of int* = %d bytes\n", sizeof(int*));
    printf("size of long long* = %d bytes\n", sizeof(long long*));

    float pi = 3.14159265359;
    // get address of float and cast it to an int pointer
    int* cast_to_int = (int*)&pi;
    uint32_t float_to_uint32 = 0;
    for(int i = 31; i >= 0; i--){
        // dereference pointer to obtain the actual value at the address
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


}