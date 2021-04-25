#include <iostream>
#include <stdio.h>
#include <vector>

int main(){
    // logical operators
    int var1 = 10;
    int var2 = 40;

    if(var1 == 10 && var2 == 40){
        std::cout << "both conditional statements are valid" << std::endl;
    }

    if(var1 == 10 || var2 == -1){
        std::cout << "at least one conditional statement is valid" << std::endl;
    }

    if(var1 != var2){
        std::cout << "var1 is not equal to var2" << std::endl;
    }

    /////////////////////////////////////////////////////////////////////////////////
    // bitwise operators
    uint8_t x;
    uint8_t y;

    x = 0x73;
    y = 0xFF;

    printf("%x & %x = %x\n", x, y, x&y);
    printf("%x | %x = %x\n", x, y, x|y);
    printf("%x ^ %x = %x\n", x, y, x^y);
    printf("~%x = %x\n", x, ~x);

    x = 0x01;
    y = 0x10;

    for(int i = 0; i < 4; i++){
        printf("shifting left %d time(s) = %x\n", i, x << i);
    }

    for(int i = 0; i < 5; i++){
        printf("shifting right %d time(s) = %d\n", i, y >> i);
    }
    
    /////////////////////////////////////////////////////////////////////////////////
    // unary operators
    
    std::vector<int> m;
    m.resize(10);

    for(int p = 0; p < 10; p++){
        printf("p = %d\n", p);
    }

    for(int p = 10; p >= 0; p--){
        printf("p = %d\n", p);
    }

    int i;
    i = 0;
    while(i < m.size()) {
        m[++i] = i;
    }

    for(auto x : m){
        printf("%d ", x);
    }

    std::cout << "\n=================================" << std::endl;

    i = 0;
    while(i < m.size()) {
        m[i++] = i;
    }

    for(auto x : m){
        printf("%d ", x);
    }

}