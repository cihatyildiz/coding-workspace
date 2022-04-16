
#include <iostream>
#include <string>
#include <typeinfo>

auto a = 8;
auto b = 12345678901;
auto c = 3.14f;
auto d = 3.14;
auto e = true;
auto f = 'd';
int g = 11;

int main()
{
    // displays the data type.
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(e).name() << std::endl;
    std::cout << typeid(f).name() << std::endl;
    std::cout << typeid(g).name() << std::endl;
    return (0);
}
