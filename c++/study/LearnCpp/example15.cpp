// Run the below command to build the app
// g++ LearnCpp/example13.cpp LearnCpp/cow.cpp

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

using namespace std;

vector<int> numbers = {12, 25, 31, 47, 58};

int main()
{
    auto ptr = numbers.begin();

    while (ptr != numbers.end())
    {
        cout << *ptr << " ";
        ptr = next(ptr, 1);
    }
    cout << endl;

    int i = 0;
    do
    {
        cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());

    return (0);
}
