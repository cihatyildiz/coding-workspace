#include <cstdio>
#include <string>

void func(const std::string & s)
{
    printf("The value is %s\n", s.c_str());
}

int main()
{
    std::string s = "This is a string";
    puts("This is main()");
    func(s);
    return 0;
}