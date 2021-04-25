#include <iostream>

void function(int x, int y){
    std::cout << "Print int: " << x << ", " << y <<  std::endl;
}

int compare (const void* x, const void* y){
    if (*(int*)x < *(int*)y){
        return -1;
    }
    else if (*(int*)x == *(int*)y){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    void (*fn_ptr)(int x, int y);
    fn_ptr = function;
    fn_ptr(3, 4);

    ////////////////////////////////////////////////////////////////////////////////////////////////////

    // sorting an array with qsort()
    // void qsort(void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *));
    int n = 15;
    int* arr = (int*)calloc(n, sizeof(int));
    // fill unordered array
    for(int i = 0; i < n; i++){
        arr[i] = (n - i) * 2;
    }
    // print unordered array
    std::cout << "unsorted = ";
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    qsort(arr, n, sizeof(int), compare);

    // print ordered array
    std::cout << "sorted = ";
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}