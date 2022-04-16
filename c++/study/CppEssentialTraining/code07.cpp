//
// Created by cyildiz2@na.jnj.com on 3/15/22.
//

#include <cstdio>
#include <string>

const std::string & func()
{
    const static std::string s = "This is from func";
    return s;
}

int main()
{
    puts("This is the main function");
    const std::string s = func();
    printf("s is %s\n", s.c_str());
    return 0;
}