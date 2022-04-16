//
// Created by cyildiz2@na.jnj.com on 3/15/22.
//

#include <cstdio>

void func()
{
    puts("This is func()");
}

int main()
{
    puts("This is the main function");
    void (*pfunc)() = func;
    (*pfunc)();
    return 0;
}