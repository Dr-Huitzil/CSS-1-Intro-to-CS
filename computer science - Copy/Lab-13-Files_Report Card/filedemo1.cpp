#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //write to a file

    ofstream outFile;
    string name = "Mary";
    int i;
    srand(time(0));

    outFile.open("C:/Users/goten/Desktop/computer science/Lab-13/file1.txt");

    for (i = 0; i < 10; i++)
    {
        outFile << name << " ";
        outFile << (rand()%6)+1 << "\n";
    }
    outFile.close();

    // read from a file

    ifstream inFile;
    string na;
    int number;

    inFile.open("C:/Users/goten/Desktop/computer science/Lab-13/file1.txt");

    if(inFile.fail())
    {
        cout << "error opening file" << endl;
        exit(1);
    }
    while(!inFile.eof())
    {
        inFile >> na;
        cout << na << " ";
        inFile >> number;
        cout << number << endl;
    }
    inFile.close();
}
