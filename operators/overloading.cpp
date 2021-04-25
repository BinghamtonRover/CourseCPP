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

    Pair operator+(const Pair& p){
        Pair ret;
        ret.left = this->left + p.left;
        ret.right = this->right + p.right;
        return ret;
    }
};

int main(){
    Pair p1(2,8);
    Pair p2(10, 10);
    Pair p3 = p1 + p2;
    p3.print_pair();
}