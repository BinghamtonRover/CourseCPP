#include <iostream>

int main(){
    // Initialization of values determine the size
    int arr1[] = {1,2,3};
    std::cout << "arr1 = ";
    for(int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++){
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    // The size is determined between [] and some values are defined
    int arr2[5] = {1,2,3};
    std::cout << "arr2 = ";
    for(int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++){
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    // All values are defined
    int arr3[3] = {3,4,5};
    std::cout << "arr3 = ";
    for(int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++){
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    // The array is initialized but no values are set
    int arr4[4] = {};
    std::cout << "arr4 = ";
    for(int i = 0; i < sizeof(arr4)/sizeof(arr4[0]); i++){
        std::cout << arr4[i] << " ";
    }
    std::cout << std::endl;

    // Can edit individual values
    arr4[0] = 9;
    arr4[1] = 8;
    arr4[2] = 7;
    arr4[3] = 6;
    std::cout << "arr4 = ";
    for(int i = 0; i < sizeof(arr4)/sizeof(arr4[0]); i++){
        std::cout << arr4[i] << " ";
    }
    std::cout << std::endl;
}