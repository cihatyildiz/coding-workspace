//
// Created by cyildiz2@na.jnj.com on 3/15/22.
//

#include <cstdio>

// recursion
unsigned long int factorial(unsigned long int n)
{
    if(n<2) return 1;
    return n * factorial(n -1);
}

// non-recursion
unsigned long int factorial_n(unsigned long int n)
{
    unsigned long int rc = n;
    while(n > 1){
        rc *= --n;
    }
    return rc;
}

int main()
{
    unsigned long int n {5};
    printf("Factorial of %ld is %ld\n", n, factorial(n));
    printf("Factorial of %ld is %ld\n", n, factorial_n(n));
    return 0;
}