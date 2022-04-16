
#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 500
#define DEBUG

int main()
{
    int32_t large = CAPACITY;
    int8_t small = 37;
#ifdef DEBUG
    std::cout << "[About the perform the edition]" << std::endl;
#endif
    large += small; // large = large + small
    std::cout << "The large integer is " << large << std::endl;

    return (0);
}