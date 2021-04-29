#include "car.hpp"

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