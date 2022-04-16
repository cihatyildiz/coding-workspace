//
// Created by cyildiz2@na.jnj.com on 3/9/22.
//

#include <cstdio>

const char string[] = "This is a null-terminated string";

int main()
{
    int count = 0;

    for( auto x:string ){
        if (x == 0){ break; }
        count++;
    }

    printf("The number of characters is: %d\n", count);
    return 0;
}