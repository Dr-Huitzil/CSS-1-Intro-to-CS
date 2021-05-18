//Ivan Alier-Reyes
//February 22nd 2021
//I need to write a program that does my taxes for me



#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main ()
{
//Lab 6 Part 1: Change Counting Game (if/else)



    double penny, nickle, dime, quarter, total;

    cout<<"Enter Quarters"<<endl;
    cin>>quarter;
    cout<<"Enter Dimes"<<endl;
    cin>>dime;
    cout<<"Enter Nickles"<<endl;
    cin>>nickle;
    cout<<"Enter Pennies"<<endl;
    cin>>penny;

    total = (0.25 * quarter) + (0.1 * dime) + (0.05 * nickle) + (0.01 * penny);

    if (total == 1.00)
    {
        cout<<"Congrats, your total is exactly one dollar"<<endl;
    }
    else if (total < 1.00)
    {
        cout<<"Unfortunately, your total was less than one dollar"<<endl;
    }
    else if (total > 1.00)
    {
        cout<<"Unfortunately, your total was more than one dollar"<<endl;
    }



//Lab 6 Part 2: Nested Statements (if/else with nested statements)



    string status;
    double income, tax;
    
    cout<<"Are you Married or Single?"<<endl;
    cin>>status;
    cout<<"What is your income?"<<endl;
    cin>>income;

    if (status == "Single" || status == "single")
    {
        if (income <= 8000.00)
        {
            tax = (income * 0.1);
            cout<<"Your total tax is " <<tax<< " dollars. good job"<<endl;
        }
        else if (8001.00 <= income || income <= 32000.00)
        {
            tax = (income * 0.15) + 800.00;
            cout<<"Your total tax is " <<tax<< " dollars. good job"<<endl;
        }
        else if (income >= 32001.00)
        {
            tax = (income * 0.25);
            cout<<"Your total tax is " <<tax<< " dollars. good job"<<endl;
        }
    }

    else if(status == "Married" || status == "married")
    {
        if (income <= 16000.00)
        {
            tax = (income * 0.1);
            cout<<"Your total tax is " <<tax<< " dollars. good job"<<endl;
        }
        else if (16001.00 <= income || income <= 64000.00)
        {
            tax = (income * 0.15) + 1600.00;
            cout<<"Your total tax is " <<tax<< " dollars. good job"<<endl;
        }
        else if (income >= 64001.00)
        {
            tax = (income * 0.25) + 8800;
            cout<<"Your total tax is " <<tax<< " dollars. good job"<<endl;
        }
    }



//Lab 6 Part 3: Calculator Program (switch statement)



    char symbol;
    double numero1, numero2, total;

    cout<<"Would you like to multiple, divide, add or subtract today?"<<endl;
    cin>>symbol;
    cout<<"Please enter the first number"<<endl;
    cin>>numero1;
    cout<<"Please enter the second number"<<endl;
    cin>>numero2;

    switch(symbol)
    {
        case '*':
                    total = numero1 * numero2;
                    cout<<"Your total is " <<total<<endl;
                    break;
        case '/':
                    total = numero1 / numero2;
                    cout<<"Your total is " <<total<<endl;
                    break;
        case '+':
                    total = numero1 + numero2;
                    cout<<"Your total is " <<total<<endl;
                    break;
        case '-':
                    total = numero1 - numero2;
                    cout<<"Your total is " <<total<<endl;
                    break;
        default:
                    cout<<"that does not exist"<<endl;
     }
}



//Lab 6 Part 1: Change Counting Game (if/else)
/*
PS C:\Users\goten\Desktop\computer science\Lab-6-if-else-nested-statements-and-switch-statements> cd "c:\Users\goten\Desktop\computer science\Lab-6-if-else-nested-statements-and-switch-statements\" ; if ($?) { g++ lab6.cpp -o lab6 } ; if ($?) { .\lab6 }
Enter Quarters
2
Enter Dimes
2
Enter Nickles
4
Enter Pennies
10
Congrats, your total is exactly one dollar
*/



//Lab 6 Part 2: Nested Statements (if/else with nested statements)
/*
PS C:\Users\goten\Desktop\computer science> cd "c:\Users\goten\Desktop\computer science\Lab-6-if-else-nested-statements-and-switch-statements\" ; if ($?) { g++ lab6.cpp -o lab6 } ; if ($?) { .\lab6 }
Are you Married or Single?
single
What is your income?
12076.54
Your total tax is 2611.48 dollars. good job
*/



//Lab 6 Part 3: Calculator Program (switch statement)
/*
PS C:\Users\goten\Desktop\computer science> cd "c:\Users\goten\Desktop\computer science\Lab-6-if-else-nested-statements-and-switch-statements\" ; if ($?) { g++ lab6.cpp -o lab6 } ; if ($?) { .\lab6 }
Would you like to multiple, divide, add or subtract today?
/
Please enter the first number
69
Please enter the second number
72
Your total is 0.958333
*/