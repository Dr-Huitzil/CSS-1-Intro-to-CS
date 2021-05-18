//lab11.cpp
//Ivan Alier-Reyes
//April 26th 2021

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void alpha(string name[]);

int main ()
{
    string name[25];
    int i;

    cout<<"what are the names of the students in your class"<<endl;
    for(i = 0; i <= 9; i++)
    {
        cin>>name[i];
    }

    alpha(name);

}
void alpha(string name[])
{
    int i, j;
    string temp;

        for(i=0; i <= 9; i++)
        {
            for (int j = i+1; j <= 9; j++) 
            {   
                if(name[i] > name[j]) 
                {  
                    temp = name[i];  
                    name[i] = name[j];  
                    name[j] = temp;  
                }   
            }  
        }

    cout<<"Names of the students in alphabetical order: "<<endl;
    for (int i = 0; i <= 9; i++) 
    {   
        cout<<i+1<<") "<<name[i]<<endl;  
    } 

}

/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-11\" && g++ alphaname.cpp -o alphaname && "c:\Users\goten\Desktop\computer science\Lab-11\"alphaname
what are the names of the students in your class
gery
kim
summer
joe
reggie
jose
rick
julissa
josue
sam
Names of the students in alphabetical order: 
1) gery
2) joe
3) jose
4) josue
5) julissa
6) kim
7) reggie
8) rick
9) sam
10) summer
*/