//lab8.cpp
//Ivan Alier-Reyes
//April 03 2021

#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
// Program 1: Password Checker

    // int pass;
    // string reply;

    // do
    // {
    //     int attempt = 1;

    //     cout<<"Please enter your 4 digit password"<<endl;

    //         do 
    //         {
    //             cin>>pass;

    //             if (pass == 4696)
    //             {
    //                 cout<<"Authentication Successful!"<<endl;
    //                 return 0;
    //             }
    //             else
    //             {  
    //                 cout<<"Failed Attempt: Please try again. (Attempt " <<attempt<< ")"<<endl; 
    //             } 

    //             attempt++;  
    //         }
    //         while (attempt <= 5);
        
    //     cout<<"Error: You have exceeded the number of attempts. Would you like to try again?"<<endl;
    //     cin>>reply;
        
    // }
    // while (reply == "Yes" || reply == "yes" || reply == "y" || reply == "Y");


// Program 2: Guess

    int comp;
    int me;
    string reply;

    do 
    {
        srand((time(0)));
        
            comp = (rand()%6)+1;

            cout<<"Selecting a random number...........Done"<<endl;
            cout<<""<<endl;
            cout<<"what number do i have in my memory (1-6)??"<<endl;
            cin>>me;
            
            cout<<""<<endl;

                if (me == comp)
                {
                    cout<<"Congrats, You guessed correclty"<<endl;
                    cout<<""<<endl;
                }
                else 
                {
                    cout<<"Sorry Please try again"<<endl;
                    cout<<""<<endl;
                }
    }
    while (me != comp);
}

// Program 1: Password Checker
/*

C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-8-Loops-and-Rand()\" && g++ lab8.cpp -o lab8 && "c:\Users\goten\Desktop\computer science\Lab-8-Loops-and-Rand()\"lab8

Please enter your 4 digit password
2734
Failed Attempt: Please try again. (Attempt 1)
23473
Failed Attempt: Please try again. (Attempt 2)
283472 
Failed Attempt: Please try again. (Attempt 3)
32897
Failed Attempt: Please try again. (Attempt 4)
2834
Failed Attempt: Please try again. (Attempt 5)
Error: You have exceeded the number of attempts. Would you like to try again?
y
Please enter your 4 digit password
28374
Failed Attempt: Please try again. (Attempt 1)
4696
Authentication Successful!

*/

// Program 2: Guess Game
/*

C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-8-Loops-and-Rand()\" && g++ lab8.cpp -o lab8 && "c:\Users\goten\Desktop\computer science\Lab-8-Loops-and-Rand()\"lab8
Selecting a random number...........Done  

what number do i have in my memory (1-6)??
4

Sorry Please try again

Selecting a random number...........Done

what number do i have in my memory (1-6)??
3

Congrats, You guessed correclty

*/