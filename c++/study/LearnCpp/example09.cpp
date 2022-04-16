
#include <iostream>
#include <cstdint>

uint32_t array[] = {3, 5, 11, 19, 33};

int main()
{
    float result;
    result = (float)((array[0] + array[1] + array[2] + array[3] + array[4]) / 5.0);
    std::cout << "Average is " << result << std::endl;
    return 0;
}