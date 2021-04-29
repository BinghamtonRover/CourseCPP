#include <string>

class Engine{
private:
    float displacement;
    int cylinders;
    int power;
public:
    Engine(float, int, int);
    Engine();
    ~Engine();
    float get_displacement();
    int get_cylinders();
    int get_power();
};