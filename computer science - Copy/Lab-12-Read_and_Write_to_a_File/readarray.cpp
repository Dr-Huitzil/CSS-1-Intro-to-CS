//lab12.cpp
//Ivan ALier-Reyes
//May 03 2021
// I have to be able to write to a text file with a program

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string name[4];
    int age[4], i;

    ifstream file;
    ofstream file2;

    file.open("/Users/goten/Desktop/computer science/Lab-12-Read_and_Write_to_a_File/data.txt");
    while(!file.eof())
    {
        for (i = 0; i <= 4; i++)
        {
            file >> name[i] >> age[i]; 
        }

        getline(file, name[4]);
    }

    file.close();

    file2.open("/Users/goten/Desktop/computer science/Lab-12-Read_and_Write_to_a_File/success.txt");

        for (i = 0; i <= 4; i++)
        {
            file2 << name[i] <<" "<< age[i] << endl;
        }
        
    file2.close();


}