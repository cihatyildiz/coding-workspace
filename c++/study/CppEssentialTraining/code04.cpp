//
// Find fist 25 prime numbers
//

#include <iostream>
#include <cstdio>
#include <vector>

bool isPrime(int number)
{
    for (int x = 2; x < number; ++x)
        if ((number % x) == 0)
            return false;
    return true;
}

int main()
{
    int pCount = 0;
    int nNumber = 0;
    std::vector<int> primes;

    while (pCount < 25)
    {
        if (nNumber == 2)
        {
            primes.push_back(nNumber);
            ++pCount;
        }
        else if (nNumber > 2)
        {
            if (isPrime(nNumber))
            {
                primes.push_back(nNumber);
                ++pCount;
            }
        }
        ++nNumber;
    }
    for (const auto &prime : primes)
    {
        std::cout << prime << " ";
    }
    std::cout << std::endl;
}
