#include "engine.hpp"

Engine::Engine(float d, int c, int p){
    this->displacement = d;
    this->cylinders = c;
    this->power = p;
}

Engine::~Engine(){}

Engine::Engine(){}

float Engine::get_displacement(){
    return this->displacement;
}

int Engine::get_cylinders(){
    return this->cylinders;
}

int Engine::get_power(){
    return this->power;
}