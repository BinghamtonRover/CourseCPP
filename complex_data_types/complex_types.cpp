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

union Var{
    uint64_t large[2];
    uint8_t small[2];
};

int main(){
    PairClass pc1;
    PairClass pc2(5, 6);
    PairClass* pc3 = new PairClass();
    PairClass* pc4 = new PairClass(8, 9);

    pc1.print_pair();
    pc2.print_pair();
    pc3->print_pair();
    pc4->print_pair();
    std::cout << "pc2.left = " << pc2.get_left() << std::endl;

    std::cout << "====================================" << std::endl;

    PairStruct ps1;
    PairStruct ps2(5, 6);
    PairStruct* ps3 = new PairStruct();
    PairStruct* ps4 = new PairStruct(8, 9);

    ps1.print_pair();
    ps2.print_pair();
    ps3->print_pair();
    ps4->print_pair();
    std::cout << "ps2.left = " << ps2.left << std::endl;

    std::cout << "====================================" << std::endl;

    std::cout << "size of union Var type: " << sizeof(Var) << std::endl;

    Var union_example = {1, 2};
    std::cout << "union_example.large[0] = " << (int)union_example.large[0] <<  std::endl;
    std::cout << "union_example.small[0] = " << (int)union_example.small[0] <<  std::endl;
    std::cout << "size of union_example: " << sizeof(union_example) << std::endl;

    union_example.small[0] = 34;
    union_example.small[1] = 45;
    std::cout << "union_example.large[0] = " << (int)union_example.large[0] <<  std::endl;
    std::cout << "union_example.small[0] = " << (int)union_example.small[0] <<  std::endl;
    std::cout << "size of union_example: " << sizeof(union_example) << std::endl;

    // you dont have to do anything for ps1, ps2, pc1, pc2; when you leave the current
    // scope, the program will automatically call its corresponding destructors
    delete pc3;
    delete pc4;
    delete ps3;
    delete ps4;
}