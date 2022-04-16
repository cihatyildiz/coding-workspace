
#include <iostream>
#include <string>

//#define AGE_LENGTH 4
const int AGE_LENGTH = 4; // recommended approach

int age[AGE_LENGTH];
float temprature[] = {31.5, 32.7, 38.9};

int main()
{
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "The Age array has " << AGE_LENGTH << " elements." << std::endl;
    std::cout << "Age[0]: " << age[0] << std::endl;
    std::cout << "Age[1]: " << age[1] << std::endl;
    std::cout << "Age[2]: " << age[2] << std::endl;
    std::cout << "Age[3]: " << age[3] << std::endl;
    std::cout << std::endl;
    std::cout << "Temp[0]: " << temprature[0] << std::endl;
    std::cout << "Temp[1]: " << temprature[1] << std::endl;
    std::cout << "Temp[2]: " << temprature[2] << std::endl;

    return (0);
}