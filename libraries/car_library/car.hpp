#include <string>
#include "engine.hpp"

class Car{
private:
    float length;
    int year;
    const char* brand;
    Engine* engine;
public:
    Car(int, const char*, float, Engine*);
    Car();
    ~Car();
    int get_year();
    float get_length();
    const char* get_brand();
};