//read.cpp
// Ivan Alier-Reyes
// May 10 2021
// i have to read the data from teh student data txt file and store it in arrays


#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{

    int student_id[12], credits[12], i, reply;
    string last_name[12], name[12], course[12];
    char grade[12];

    ifstream inFile;
    ofstream outFile;

    inFile.open("C:/Users/goten/Desktop/computer science/Lab-13/studentdata.txt");

        if(inFile.fail())
        {
            cout << "error opening file" << endl;
            exit(1);
        }

        while(!inFile.eof())
        {
            for(i = 0; i < 12; i++)
            {
                inFile >> student_id[i];
                inFile >> last_name[i];
                inFile >> name[i];
                inFile >> course[i];
                inFile >> credits[i];
                inFile >> grade[i];
            }
        }

    inFile.close();

// program 2

        cout << "Who's student's information would you like to view? (1, 2, or 3)" << endl;
        // 1: Bokow R.
        // 2: Fallin D.
        // 3: Kingsley M.
        cin >> reply;

    outFile.open("C:/Users/goten/Desktop/computer science/Lab-13/reportcard.txt");

        if (reply == 1)
        {
            outFile << "Student Name: " << last_name[1] <<" " << name[1] << endl;
            outFile << "Student ID Number: " << student_id[1] << endl;
            outFile << " " << endl;
            outFile << "  Course Code  " << "  Course Credits  " << "  Course Grade  " << endl;
            outFile << "_______________________________________________" << endl;

            for(i = 0; i < 3; i++)
            {
                outFile << "     " << course[i] << "             ";
                outFile << credits[i] << "                 ";
                outFile << grade[i] << endl;
            }
        }
        else if (reply == 2)
        {
            outFile << "Student Name: " << last_name[4] << " " << name[4] << endl;
            outFile << "Student ID Number: " << student_id[4] << endl;
            outFile << " " << endl;
            outFile << "  Course Code  " << "  Course Credits  " << "  Course Grade  " << endl;
            outFile << "_______________________________________________" << endl;

            for(i = 3; i < 7; i++)
            {
                outFile << "     " << course[i] << "             ";
                outFile << credits[i] << "                 ";
                outFile << grade[i] << endl;
            }
        }
        else if (reply == 3)
        {
            outFile << "Student Name: " << last_name[8] << " " << name[8] << endl;
            outFile << "Student ID Number: " << student_id[8] << endl;
            outFile << " " << endl;
            outFile << "  Course Code  " << "  Course Credits  " << "  Course Grade  " << endl;
            outFile << "_______________________________________________" << endl;

            for(i = 7; i < 12; i++)
            {
                outFile << "     " << course[i] << "             ";
                outFile << credits[i] << "                 ";
                outFile << grade[i] << endl;
            }
        }
        else
        {
            cout << "that is not an option" << endl;
        }     

    inFile.close();

    return 0;
}