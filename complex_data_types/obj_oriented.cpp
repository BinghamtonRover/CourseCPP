#include <iostream>
#include <stdio.h>

struct PairStruct{
    int left;
    int right;

    PairStruct(int l, int r){
        this->left = l;
        this->right = r;
    }

    PairStruct(const PairStruct& p){  
        this->left = p.left;
        this->right = p.right;
    }

    PairStruct(){}
    ~PairStruct(){}
    
    void print_pair(){
        std::cout << "(" << this->left << ", " << this->right << ")" << std::endl;
    }
};

class PairClass{
    private:
    int left;
    int right;

    public:
    PairClass(int l, int r){
        this->left = l;
        this->right = r;
    }

    PairClass(const PairClass& p){  
        this->left = p.left;
        this->right = p.right;
    }

    PairClass(){}
    ~PairClass(){}

    int get_left(){
        return this->left;
    }
    
    int get_right(){
        return this->right;
    }

    void print_pair(){
        std::cout << "(" << this->left << ", " << this->right << ")" << std::endl;
    }
};

int main(){
    // this calls the default constructor
    PairClass pc1;
    // this calls the custom constructor
    PairClass pc2(5, 6);
    // this calls the copy constructor
    PairClass pc3 = pc2;

    pc1.print_pair();
    pc2.print_pair();
    pc3.print_pair();
    printf("pc2 address: %p\n", &pc2);
    printf("pc3 address: %p\n", &pc3);

    std::cout << "====================================" << std::endl;

    // this calls the default constructor
    PairClass ps1;
    // this calls the custom constructor
    PairClass ps2(5, 6);
    // this calls the copy constructor
    PairClass ps3 = ps2;

    pc1.print_pair();
    pc2.print_pair();
    pc3.print_pair();
    printf("pc2 address: %p\n", &pc2);
    printf("pc3 address: %p\n", &pc3);
}