//Lab 5- Boolean Expressions and if Statements.cpp
//Ivan Alier-Reyes
//February 15th 2021
//This lab will ask me to implement the basics of boolean expressions as well as the basics of math


#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main () 
{

// Program number 1

    int num1, num2, num3;

    cout<<"PLEASE INPUT YOUR THREE DIGIT COMBINATION"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;

if (num1 == 7, num2 == 7, num3 == 3)
{
    cout<<"OPENED"<<endl;
}

else
{
    cout<<"INCORRECT PASSWORD. PLEASE TRY AGAIN"<<endl;
}
    
/*
PS C:\Users\goten\Desktop\computer science> cd "c:\Users\goten\Desktop\computer science\Lab-5-Boolean_Expressions_and_if_Statements\" ; if ($?) { g++ lab5.cpp -o lab5 } ; if ($?) { .\lab5 }
PLEASE INPUT YOUR THREE DIGIT COMBINATION
3
9
7
INCORRECT PASSWORD. PLEASE TRY AGAIN
PS C:\Users\goten\Desktop\computer science\Lab-5-Boolean_Expressions_and_if_Statements> cd "c:\Users\goten\Desktop\computer science\Lab-5-Boolean_Expressions_and_if_Statements\" ; if ($?) { g++ lab5.cpp -o lab5 } ; if ($?) { .\lab5 }
PLEASE INPUT YOUR THREE DIGIT COMBINATION
7
7
3
OPENED
PS C:\Users\goten\Desktop\computer science\Lab-5-Boolean_Expressions_and_if_Statements> 
*/


// Program numba 2


    string nombre;
    double Ftemp, Ctemp;


    cout<<"What is your name?"<<endl;
    cin>>nombre;

    cout<<"What is the current temperature in Fahrenheit"<<endl;
    cin>>Ftemp;
    
    Ctemp = (Ftemp - 32) * 5.0/9;

    cout<<"Thank you " <<nombre<< " for your service to this country"<<endl;
    cout<<"The temperature of " <<Ftemp<< " degrees Fahrenheit is equivalent to " <<Ctemp<< " degrees Celsius"<<endl;


/*
PS C:\Users\goten\Desktop\computer science> cd "c:\Users\goten\Desktop\computer science\Lab-5-Boolean_Expressions_and_if_Statements\" ; if ($?) { g++ lab5.cpp -o lab5 } ; if ($?) { .\lab5 }
What is your name?
Ivan
What is the current temperature in Fahrenheit
70
Thank you Ivan for your service to this country
The temperature of 70 degrees Fahrenheit is equivalent to 21.1111 degrees Celsius
*/

}