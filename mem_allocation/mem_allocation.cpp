#include <iostream>

struct Pair{
    int left;
    int right;

    Pair(int l, int r){
        this->left = l;
        this->right = r;
    }
    Pair(){}
    ~Pair(){}
    
    void print_pair(){
        std::cout << "(" << this->left << ", " << this->right << ")" << std::endl;
    }
};

int main(){

    // using malloc()
    int n = 10;
    Pair* collection = (Pair*)malloc(n * sizeof(Pair));

    if(!collection){
        std::cout << "Could not malloc()" << std::endl;
        return -1;
    }

    std::cout << "size of collection = " << sizeof(Pair) * n << "bytes" << std::endl;

    //for(int i = 0; i < n; i++){
    //    collection[i].left = i;
    //    collection[i].right = i;
    //}
    
    // print pairs as they are (uninitialized or not)
    for(int i = 0; i < n; i++){
        collection[i].print_pair();
    }

    free(collection);

    /////////////////////////////////////////////////////////////////////////////////
    // malloc() vs calloc()
    int* arr_malloc = (int*)malloc(n * sizeof(int));
    if(!arr_malloc){
        std::cout << "Could not malloc()" << std::endl;
        return -1;
    }

    int* arr_calloc = (int*)calloc(n, sizeof(int));
    if(!arr_calloc){
        std::cout << "Could not calloc()" << std::endl;
        return -1;
    }

    for(int i = 0; i < n; i++){
        std::cout << arr_malloc[i] << " ";
    }
    std::cout << std::endl;

    for(int i = 0; i < n; i++){
        std::cout << arr_calloc[i] << " ";
    }
    std::cout << std::endl;

    free(arr_malloc);
    free(arr_calloc);

    /////////////////////////////////////////////////////////////////////////////////
    // using realloc()
    int* arr1 = (int*)malloc(n * sizeof(int));
    if(!arr1){
        std::cout << "Could not malloc()" << std::endl;
        return -1;
    }
    
    std::cout << "arr1 = ";
    for(int i = 0; i < n; i++){
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    int new_n = 20;
    int* arr2 = (int*)realloc(arr1, new_n * sizeof(int));
    if(!arr1){
        std::cout << "Could not realloc()" << std::endl;
        return -1;
    }
    else{
        free(arr1);
    }

    std::cout << "arr2 = ";
    for(int i = 0; i < new_n; i++){
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    free(arr2);

    /////////////////////////////////////////////////////////////////////////////////
    // using new and delete
    Pair* p1 = new Pair(5,6);
    p1->print_pair();
    delete p1;
}