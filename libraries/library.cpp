#include <iostream>
#include "car_library/car.hpp"

int main(){
    // this is an example of a shared library in c++
    Engine* e = new Engine(3.0, 6, 230);
    Car* c = new Car(2020, "Toyota", 4.5, e);
}