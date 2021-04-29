#include <iostream>
#include "car.hpp"

int main(){
    Car* c = new Car(2021, "Toyota", 4.58);
    std::cout << "car brand: " << c->get_brand() << std::endl;
    std::cout << "car year: " << c->get_year() << std::endl;
    std::cout << "car length: " << c->get_length() << std::endl;
    delete c;
}