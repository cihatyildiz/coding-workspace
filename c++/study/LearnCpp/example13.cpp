// Run the below command to build the app
// g++ LearnCpp/example13.cpp LearnCpp/cow.cpp

#include <iostream>
#include "cow.h"

using namespace std;

int a = 37;
int *ptr;
cow *my_cow;

int main()
{
    ptr = &a;

    std::cout << "           The content of a is " << a << std::endl;
    std::cout << "       ptr pointing to address " << ptr << std::endl;
    std::cout << "           The address of a is " << &a << std::endl;
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;
    std::cout << "         The address of ptr is " << &ptr << std::endl;
    std::cout << std::endl;

    // -------
    my_cow = new cow("Gertie", 3, hide);

    cout << my_cow->get_name() << " is a type-" << (int)my_cow->get_purpose() << " cow." << endl;
    cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << endl;

    delete my_cow;
    return (0);
}
