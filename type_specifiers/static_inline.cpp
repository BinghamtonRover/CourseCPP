#include <iostream>

class Item{
public:
    static int number_of_items;
    int size;
    Item(int s){
        size = s;
        number_of_items++;
    }
    ~Item(){
        number_of_items--;
    }
};

struct MyStruct
{
    static int num;
    MyStruct(){}
    ~MyStruct(){}
};

inline int MyStruct::num = 200;

int Item::number_of_items = 0;

int main(){
    auto item1 = new Item(3);
    auto item2 = new Item(3);
    auto item3 = new Item(3);

    std::cout << "number_of_items = " << Item::number_of_items << std::endl;

    delete item1;

    std::cout << "number_of_items = " << Item::number_of_items << std::endl;
}