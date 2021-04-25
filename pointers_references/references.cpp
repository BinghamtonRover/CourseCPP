#include <iostream>
#include <stdio.h>

int main(){
    int var = 100;
    int& var_ref = var;
    
    printf("var = %d\n", var);
    printf("var_ref = %d\n", var_ref);

    // updating var_ref with some new value changes the original var
    // this changes the value that is pointing to, the reference never changes
    var_ref = 500;
    printf("var = %d\n", var);
    printf("var_ref = %d\n", var_ref);

    // change var to 300    
    var = 300;
    printf("var = %d\n", var);
    printf("var_ref = %d\n", var_ref);
}