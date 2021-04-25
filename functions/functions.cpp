#include <iostream>
#include <stdio.h>

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

    Pair operator+(const Pair& p){
        Pair ret;
        ret.left = this->left + p.left;
        ret.right = this->right + p.right;
        return ret;
    }
};

void call_by_value(Pair p1, Pair p2){
    Pair p3 = p1 + p2;
    std::cout << "call by value = ";
    p3.print_pair();
    printf("address of p1 = %p\n", &p1);
    printf("address of p2 = %p\n", &p2);
}

void call_by_reference(Pair &p1, Pair &p2){
    Pair p3 = p1 + p2;
    std::cout << "call by reference = ";
    p3.print_pair();
    printf("address of p1 = %p\n", &p1);
    printf("address of p2 = %p\n", &p2);
}

void call_by_pointer(Pair* p1, Pair* p2){
    Pair p3 = *p1 + *p2;
    std::cout << "call by pointer = ";
    p3.print_pair();
    printf("address of p1 = %p\n", p1);
    printf("address of p2 = %p\n", p2);
}

int main(){
    Pair p1(2,8);
    Pair p2(10, 10);
    printf("original Pair objects addresses\n", &p1);
    printf("address of p1 = %p\n", &p1);
    printf("address of p2 = %p\n\n", &p2);
    std::cout << "\n================================" << std::endl;
    call_by_value(p1, p2);
    std::cout << "\n================================" << std::endl;
    call_by_reference(p1, p2);
    std::cout << "\n================================" << std::endl;
    call_by_pointer(&p1, &p2);
}