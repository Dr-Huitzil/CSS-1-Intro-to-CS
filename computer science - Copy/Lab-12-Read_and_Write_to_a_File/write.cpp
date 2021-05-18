//lab12.cpp
//Ivan ALier-Reyes
//May 03 2021
// I have to be able to write to a text file with a program

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    string name[4];
    int number[4], i;

    name[1] = "Lisa Smith";
    name[2] = "Josue Smith";
    name[3] = "Bob Garcia";
    name[4] = "Thomas Sanchez";

    number[1] = 24;
    number[2] = 45;
    number[3] = 25;
    number[4] = 34;

    file.open("/Users/goten/Desktop/computer science/Lab-12-Read_and_Write_to_a_File/data.txt");

        for (i = 0; i <= 4; i++)
        {
            file << name[i] <<" "<< number[i] << endl;
        }

    file.close();
}

/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-12-Read_and_Write_to_a_File\" && g++ write.cpp -o write && "c:\Users\goten\Desktop\computer science\Lab-12-Read_and_Write_to_a_File\"write
Lisa Smith 24
Josue Smith 45
Bob Garcia 25
Thomas Sanchez 34

*/
