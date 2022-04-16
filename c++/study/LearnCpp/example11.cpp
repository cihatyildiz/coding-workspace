
#include <iostream>
#include <string>

enum cow_purpose
{
    dairy,
    meat,
    hide,
    pet
};

class cow
{
public:
    cow(std::string name_i, int age_i, unsigned char purpose_i)
    {
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    std::string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }
    unsigned char get_purpose()
    {
        return purpose;
    }

private:
    std::string name;
    int age;
    unsigned char purpose;
};

int main()
{
    cow my_cow("hildy", 7, pet);

    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    return (0);
}