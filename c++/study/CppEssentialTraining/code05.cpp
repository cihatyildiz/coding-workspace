//
// Created by cyildiz2@na.jnj.com on 3/14/22.
//

#include <cstdio>

void func(int * i)
{
    *i = 73;
    printf("The value is %d\n", *i);
}

int main()
{
    int i = 47;
    puts("This is main()");
    func(&i);
    printf("The value after func() is %i\n", i);
    return 0;
}