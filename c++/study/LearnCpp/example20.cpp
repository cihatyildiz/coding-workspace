//
// Created by cyildiz2@na.jnj.com on 3/4/22.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ifstream inFile;
string str;
int number;
char letter;

int main()
{
    inFile.open("people.txt");
    if (inFile.fail())
        cout << endl
             << "File not found!" << endl;
    else
    {
        while (!inFile.eof())
        {
            getline(inFile, str);
            cout << str << ", ";
            getline(inFile, str);
            number = stoi(str);
            cout << number << ", ";
            getline(inFile, str);
            letter = str[0];
            cout << letter << endl;
        }
        inFile.close();
    }
    return (0);
}