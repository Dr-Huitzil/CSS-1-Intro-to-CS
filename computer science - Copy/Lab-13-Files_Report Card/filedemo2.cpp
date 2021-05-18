#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream inFile;
    string na[10];
    int number[10], i;

    inFile.open("C:/Users/goten/Desktop/computer science/Lab-13/file1.txt");

    if(inFile.fail())
    {
        cout << "error opening file" << endl;
        exit(1);
    }

    while(!inFile.eof())
    {
        for(i = 0; i < 10; i++)
        {
            inFile >> na[i];
            inFile >> number[i];
        }
    }

        for(i = 0; i < 10; i++)
        {
            cout << na[i] << " ";
            cout << number[i] << endl;
        }
    inFile.close();

    return 0;
}