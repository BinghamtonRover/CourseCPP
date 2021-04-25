#include <iostream>
#include <vector>

int main(){
    int n;

    n = 5;
    int* arr1 = new int[n];
    std::cout << "arr1 = ";
    for(int i = 0; i < n; i++){
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    n = 7;
    int* arr2 = (int*)malloc(7 * sizeof(int));
    std::cout << "arr2 = ";
    for(int i = 0; i < n; i++){
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    // resizing arr1
    n = 10;
    int* arr3 = new int[n];
    // copy everything over arr3
    for(int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++){
        arr3[i] = arr1[1];
    }
    delete[] arr1;
    std::cout << "arr3 = ";
    for(int i = 0; i < n; i++){
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    // resizing arr2, realloc takes care of copying everything
    //      if succeeds at allocating memory first
    n = 15;
    int* arr4 = (int*)realloc(arr2, sizeof(int) * n);
    if(!arr4){
        std::cout << "Could not realloc()" << std::endl;
        return -1;
    }
    std::cout << "arr4 = ";
    for(int i = 0; i < n; i++){
        std::cout << arr4[i] << " ";
    }
    std::cout << std::endl;


    // using std::vector
    std::vector<int> vect;
    // resize allocates memoty and then initializes each element
    //vect.resize(10);
    // reserve just allocates memory, but does not initialize each element
    vect.reserve(10);
    std::cout << "vect = ";
    for(int i = 0; i < vect.size(); i++){
        vect[i] = 0;
        std::cout << vect[i] << " ";
    }
    std::cout << std::endl;

    free(arr2);
    delete[] arr3;
    free(arr4);
}