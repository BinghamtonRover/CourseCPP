#include <iostream>

int main(){
    // by default, values start at 0
    enum Food {BEEF, CHICKEN, FISH};
    //enum Meat {BEEF, CHICKEN, FISH};
    Food f = CHICKEN;
    f = BEEF;
    std::cout << "Value of f: " << f << std::endl;

    // you can specify custom values
    enum Month {JUNE = 6, JULY = 7, AUGUST, SEPTEMBER = 100};
    Month m = JUNE;
    std::cout << "Value of m1: " << m << std::endl;
    m = AUGUST;
    std::cout << "Value of m2: " << m << std::endl;
    m = SEPTEMBER;
    std::cout << "Value of m3: " << m << std::endl;

    enum class Subsystem {DRIVE, ARM, SCIENCE, POWER, AUTONOMY};
    enum class FocusMode {DRIVE, ARM, SCIENCE, POWER, AUTONOMY};
    Subsystem s = Subsystem::POWER;
    
    // s is not a type int, hence cannot print like an old enum
    //std::cout << "Value of s: " << s << std::endl;
    
    // therefore, casting is needed
    std::cout << "Value of s: " << (int)s << std::endl;


}