#include <iostream>

class Car{
private:
    float length;
    int year;
    const char* brand;
public:
    Car(int, const char*, float);
    ~Car();
    int get_year();
    float get_length();
    const char* get_brand();
};

Car::Car(int y, const char* m, float l){
    this->length = l;
    this->year = y;
    this->brand = m;
}

Car::~Car(){
    free((char*)this->brand);
}

int Car::get_year(){
    return this->year;
}

float Car::get_length(){
    return this->length;
}

const char* Car::get_brand(){
    return this->brand;
}

int main(){
    Car* c = new Car(2021, "Toyota", 4.58);
    std::cout << "car brand: " << c->get_brand() << std::endl;
    std::cout << "car year: " << c->get_year() << std::endl;
    std::cout << "car length: " << c->get_length() << std::endl;
    delete c;
}