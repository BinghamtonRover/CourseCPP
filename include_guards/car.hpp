#ifndef CAR
#define CAR

#include <string>

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

#endif