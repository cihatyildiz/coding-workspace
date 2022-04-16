
#include <iostream>

// takes arguments by value
int square(int x)
{
    return x * x;
}

// Take arguments by addresses
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 9, b;
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return (0);
}