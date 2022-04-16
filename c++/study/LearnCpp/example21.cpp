//
// Created by cyildiz2@na.jnj.com on 3/4/22.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ofstream outFile;
float a = 4.333f, b = 5.302f;

int main()
{
    outFile.open("calculator.txt");
    if (outFile.fail())
        cout << endl
             << "Couldn't open the file!" << endl;
    else
    {
        outFile << "a = " << a << endl;
        outFile << "b = " << b << endl;
        outFile << "a + b = " << a + b << endl;
        outFile << "a * b = " << a * b << endl;
        outFile.close();
        cout << "File written successfully!" << endl;
    }
    return (0);
}