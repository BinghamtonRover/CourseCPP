#include <iostream>

int main(){
    uint8_t byte = 0xFF;
    uint16_t word = 0xFFFF;
    uint32_t double_word = 0xFFFFFFFF;
    uint64_t quad_word = 0xFFFFFFFFFFFFFFFF;

    std::cout << "Size of byte: " << sizeof(byte) << std::endl; 
    std::cout << "Size of word: " << sizeof(word) << std::endl; 
    std::cout << "Size of double word: " << sizeof(double_word) << std::endl; 
    std::cout << "Size of quad word: " << sizeof(quad_word) << std::endl; 
}