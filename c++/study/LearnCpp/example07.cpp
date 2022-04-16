
#include <iostream>
#include <string>
#include <cstring>

const int LENGTH1 = 25;

char array_str1[LENGTH1] = "Hey guys! ";
char array_str2[] = "What's up?";

std::string std_str1 = "Hi everybody!";
std::string std_str2 = "How is it going?";

int main()
{
    std::strcat(array_str1, array_str2);
    std::cout << array_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;
    return (0);
}