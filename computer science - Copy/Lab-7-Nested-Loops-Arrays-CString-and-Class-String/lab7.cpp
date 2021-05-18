// lab7.cpp
// Ivan Alier-Reyes
// March 14th 2021
// I think i have to do some programs that have to do with nested loops, arrays, and strings

#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{

//Program 1: Nested Loops

    int numero[10], i, j, num, temp, swapped;
    int total = 0;

    cout<<"Please enter 10 numbers"<<endl;

        for(i = 0; i < 10; i++)
            {
                cin>>numero[i];
                total = total + numero[i];
            } 
   
        do 
        {
            swapped = 0;

            for(i = 0; i < 10; i++)
                {
                    if (numero[i] > numero[i+1])
                        {
                                    temp = numero [i];
                                    numero[i] = numero[i+1];
                                    numero[i+1] = temp;

                                    swapped = 1;

                        }
                }

            if (swapped == 0)
                {
                    break;
                }
 
        }
        while (1);

    //numero[i] = numero[j];
    
    /* 
        okay so like i got this far. it makes sense right??
        i kinda had to watch a youtube video on C but i think i got the hang of it. 
        the part im struggling in is displaying both at the same time. i know that it shouldnt take me that long to figure it out
        but i am stuck here.
    */

        do 
        {
            swapped = 0;

            for(i = 0; i < 10; i++)
                {
                    if (numero[i] < numero[i+1])
                        {
                                    temp = numero[i];
                                    numero[i] = numero[i+1];
                                    numero[i+1] = temp;

                                    swapped = 1;

                        }
                }

            if (swapped == 0)
                {
                    break;
                }
        }
        while (1);
        
    cout<<"Least to Greatest"<<"   "<<"Greatest to Least"<<endl;

        for (i = 0; i<10; i++)
            {
                cout<<numero[i]<<"                   "<<numero[i]<<endl;
            }

    cout<<"Sum"<<endl;

    cout<<""<<total<<endl;

// Program 2: Dice Roll

    int num, attempts = 0, total = 0;
    string resp1, resp2;


    cout<<"Want to roll a die?"<<endl;
    cin>>resp1;
    cout<<""<<endl;

    if (resp1 == "yes" || resp1 == "y" || resp1 == "Y" || resp1 == "Yes")
    {
        cout<<"Let it rip"<<endl;
        cout<<""<<endl;
        do
        {
            cout<<"rolling die....."<<endl;
            cout<<""<<endl;
            
            srand((time(0)));
                num = (rand()%6)+1;
                    if (num == 1)
                        {
                            cout<<"What a loser"<<endl;                            
                        }
                    else 
                        {
                            cout<<num<<endl;
                        }

            attempts++;
            total = total + num;
                if (total == 100)
                    {
                        cout<<"You Win"<<endl;
                    }
                else 
                    {}
                        
            cout<<"want to roll again?"<<endl;
            cin>>resp2;
            cout<<""<<endl;
        }

        while (resp2 == "yes" || resp2 == "y" || resp2 == "Y" || resp2 == "Yes");
        
        cout<<"you rolled the die "<<attempts<<" times"<<endl;
        cout<<"your total is "<<total<<endl;
    }

    else
    {
        return 0;
    }

// Program 3: Roll Call

    int i;
    string name[10];

    cout<<"Please enter a name"<<endl;

        for (i = 0; i <= 9; i++)
            {
                cin>>name[i];
            }

    cout<<""<<endl;

    cout<<"Name"<<endl;

        for (i = 0; i <= 9; i++)
            {
                cout<<i+1<<". "<<name[i]<<endl;
            }

}

// Program 1: Nested Loop
/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-7-Nested-Loops-Arrays-CString-and-Class-String\" && g++ lab7.cpp -o lab7 && "c:\Users\goten\Desktop\computer science\Lab-7-Nested-Loops-Arrays-CString-and-Class-String\"lab7
Please enter 10 numbers
6
8
9
3
8
7
5
1
2
4
Least to Greatest   Greatest to Least
9                   9
8                   8
8                   8
7                   7
6                   6
5                   5
4                   4
3                   3
2                   2
1                   1
Sum
53
*/

// Program 2: Dice Roll
/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-7-Nested-Loops-Arrays-CString-and-Class-String\" && g++ lab7.cpp -o lab7 && "c:\Users\goten\Desktop\computer science\Lab-7-Nested-Loops-Arrays-CString-and-Class-String\"lab7
Want to roll a die?
y

Let it rip

rolling die.....   

6
want to roll again?
y
rolling die.....

3
want to roll again?
y
rolling die.....

What a loser
want to roll again?
y
rolling die.....

What a loser
want to roll again?
y
rolling die.....

What a loser
want to roll again?
y
rolling die.....

5
want to roll again?
n

you rolled the die 6 times
your total is 17
*/

// Program 3: Roll Call
/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-7-Nested-Loops-Arrays-CString-and-Class-String\" && g++ lab7.cpp -o lab7 && "c:\Users\goten\Desktop\computer science\Lab-7-Nested-Loops-Arrays-CString-and-Class-String\"lab7
Please enter a name
juan 
jose
julio
summer
joe
reggie
kim 
julissa
lesley
josue

Name
1. juan
2. jose
3. julio
4. summer
5. joe
6. reggie
7. kim
8. julissa
9. lesley
10. josue
*/