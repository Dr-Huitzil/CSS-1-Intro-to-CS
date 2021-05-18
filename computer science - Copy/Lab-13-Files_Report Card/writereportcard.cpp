//write.cpp
// Ivan Alier-Reyes
// May 10 2021
// i have to read the data from teh student data txt file and store it in arrays


#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int student_id[12] = {2333021, 2333021, 2333021, 2574063, 2574063, 2574063, 2574063, 2663628, 2663628, 2663628, 2663628, 2663628};
    int credits[12] = {3, 3, 1, 3, 3, 3, 2, 3, 3, 3, 3, 2};
    int i;
    string last_name[12] = {"BOKOW, ", "BOKOW, ", "BOKOW, ", "FALLIN, ", "FALLIN, ", "FALLIN, ", "FALLIN, ", "KINGSLEY, ", "KINGSLEY, ", "KINGSLEY, ", "KINGSLEY, ", "KINGSLEY, "};
    string name[12] = {"R.", "R.", "R.", "D.", "D.", "D.", "D.", "M.", "M.", "M.", "M.", "M."};
    string course[12] = {"NS201", "MG342", "FA302", "MK106", "MA208", "CM201", "CP101", "QA140", "CM245", "EQ521", "MK341", "CP101"};
    char grade[12] = {'A', 'A', 'A', 'C', 'B', 'C', 'B', 'A', 'B', 'A', 'A', 'B'};

    ofstream outFile;

    outFile.open("C:/Users/goten/Desktop/computer science/Lab-13/studentdata.txt");

            for(i = 0; i < 12; i++)
            {
                outFile << student_id[i] << " ";
                outFile << last_name[i];
                outFile << name[i] << " ";
                outFile << course[i] << " ";
                outFile << credits[i] << " ";
                outFile << grade[i] << endl;
            }
}
