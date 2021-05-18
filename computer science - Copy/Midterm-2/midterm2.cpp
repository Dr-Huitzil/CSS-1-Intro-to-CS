// midterm2.cpp
// Ivan Alier-Reyes
// April 12 2021
// this is the second midterm

#include <iostream>
#include <string>
#include <cstdlib>

#include <ctime>

using namespace std;

int  main ()
{

    int mega = ((rand()%20)+1);
    int random5[5] = {((rand()%69)+1), ((rand()%69)+1), ((rand()%69)+1), ((rand()%69)+1), ((rand()%69)+1)};
    int num1, num2, num3, num4, num5;
    int myMega;

    string reply;

    //this is to check my random number because *spoiler alert* i cant really guess the random numbers on my own
    /* 
    for (int i = 0; i <= 4; i ++)
    {
        cout<<random5[i]<<endl;
    }
        cout<<mega<<endl;
    */

    do
    {
        cout<<"Enter 5 Numbers"<<endl;
        cin>>num1;
        cin>>num2;
        cin>>num3;
        cin>>num4;
        cin>>num5;
        cout<<"Enter 1 Mega Number"<<endl;
        cin>>myMega;

        int myNumbers[5] = {num1, num2, num3, num4, num5};

        // i had to double check
        /*
        for (int i = 0; i<=4; i ++)
        {
            cout<<myNumbers[i]<<endl;
        }
        */

            if (myNumbers[5] == random5[5] || myMega == mega)
            {
                cout<<"You hit the JACKPOT!!!!"<<endl;
            }
            else
            {
                cout<<"Sorry those are not the winning numbers. Would you like to try again? (Yes or No)"<<endl;
                cin>>reply;
            }
    } 
    while (reply == "yes" || reply == "y" || reply == "Yes" || reply == "Y");
    
}

/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Midterm-2\" && g++ midterm2.cpp -o midterm2 && "c:\Users\goten\Desktop\computer science\Midterm-2\"midterm2
Enter 5 Numbers
3
69
20
32
45
Enter 1 Mega Number
16
Sorry those are not the winning numbers. Would you like to try again? (Yes or No)
yes
Enter 5 Numbers
45
56
5
57
62
Enter 1 Mega Number
2
You hit the JACKPOT!!!!
*/
