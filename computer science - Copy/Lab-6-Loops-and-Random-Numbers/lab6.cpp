// Ivan Alier-Reyes
// Lab 6
// March 8th 2021
// I will be learning how to implement loops successfully in my code

#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{

//Program 1: While Loop

    int cTemp, fTemp;
    int same;

    cTemp = 100;
    fTemp = ((9 * cTemp) / 5) + 32;
    
        while (cTemp <= fTemp)
        {

            fTemp--;
            cTemp = ((fTemp-32) * 5)/9;

        }

    cout<<"celcius and farentheight are the same at " << cTemp <<endl;

// Program 2: Do While Loop

    int quantity;
    double  taco = 3.00, burrito = 5.00, quesadilla = 6.00,
            horchata = 1.50, tamarindo = 1.75, coke = 1.00, sprite = 1.25,
            Ftotal, Dtotal, total;
    string food, drink, reply, Sreply;

    do 
    {
        cout<<"Would you like to view the menu?"<<endl;
        cin>>reply;
            if (reply == "yes" || reply == "y" || reply == "Y" || reply == "Yes" || reply == "yea")
            {
                cout<<"        Main"<<endl;
                cout<<"Taco----------$3.00"<<endl;
                cout<<"Burrito-------$5.00"<<endl;
                cout<<"Quesadilla----$6.00"<<endl;
                cout<<""<<endl;
                cout<<"       Drinks"<<endl;
                cout<<"Horchata------$1.50"<<endl;
                cout<<"Tamarindo-----$1.75"<<endl;
                cout<<"Coke----------$1.00"<<endl;
                cout<<"Sprite--------$1.25"<<endl;
                cout<<""<<endl;
            }
            else
            {
                return 0;
            }
        cout<<"What will you like to order today?"<<endl;
        cin>>food;
            if (food == "taco" || food == "Taco")
                {
                    food = "taco";
                    cout<<"How many tacos would you like"<<endl;
                    cin>>quantity;
                        Ftotal = (quantity * taco);
                }
            else if (food == "burrito" || food == "Burrito")
                {
                    cout<<"How many burritos would you like?"<<endl;
                    cin>>quantity;
                        Ftotal = (quantity * burrito);
                }
            else if (food == "quesadilla" || food == "Quesadilla")
                {
                    cout<<"How many quesadillas would you like?"<<endl;
                    cin>>quantity;
                        Ftotal = (quantity * quesadilla);
                }
        cout<<"Would you like anything to drink?"<<endl;
        cin>>drink;
            if (drink == "Horchata" || drink == "horchata")
                {
                    drink = "horchata";
                    cout<<"How many would you like?"<<endl;
                    cin>>quantity;
                        Dtotal = (quantity * horchata);
                }
            else if (drink == "tamarindo" || drink == "Tamarindo")
                {
                    drink = "tamarindo";
                    cout<<"How many would you like?"<<endl;
                    cin>>quantity;
                        Dtotal = (quantity * tamarindo);
                }
            else if (drink == "coke" || drink == "Coke")
                {
                    drink = "coke";
                    cout<<"How many would you like?"<<endl;
                    cin>>quantity;
                        Dtotal = (quantity * coke);
                }
            else if (drink == "Sprite" || drink == "sprite")
                {
                    drink = "Sprite";
                    cout<<"How many would you like?"<<endl;
                    cin>>quantity;
                        Dtotal = (quantity * sprite);
                }
        cout<<"Would you like to view the menu again?"<<endl;
        cin>>Sreply;
    }
    while (Sreply == "yes");
    
        total = Ftotal + Dtotal;
    
    cout<<"You ordered the "<<quantity<< " " <<food<< "s and the " <<quantity<< " " <<drink<< "s" <<endl;
    cout<<"Your total will be $"<<total<<endl;

// Program 3: For Loop

// (part 1)

    int ran;

    srand(time(0)); 
    
    for (ran = 0; ran <=9; ran++)  
        {
            cout << (rand()% 19) + 1 << endl;
        }

// (part 2)

    int sum = 0, numero, tin;

    cout<<"Please enter 10 numbers"<<endl;

        for (tin=0; tin <= 9; tin++)    
        {
            cin>>numero;         
            sum += numero;    
        }

    cout<<"your total is "<<sum<<endl;

// Program 4: Random Event in a Do While Loop

    int num;
    string Treply, Freply;

    cout<<"Want to play a game?"<<endl;
    cin>>Treply;

    if (Treply == "yes" || Treply == "y" || Treply == "Y" || Treply == "Yes")
    {
        cout<<"Lets flip a coin"<<endl;
        do
        {
            cout<<"flipping coin....."<<endl;
            srand((time(0)));
                num = (rand()%2)+1;
                    if (num == 1)
                        {
                            cout<<"Tails"<<endl;
                        }
                    else if (num == 2)
                        {
                            cout<<"Heads"<<endl;
                        }
            cout<<"Try Again?"<<endl;
            cin>>Freply;
        }

        while (Freply == "yes" || Freply == "y" || Freply == "Y" || Freply == "Yes");
    }
    else
    {
        return 0;
    }
}

// Program 1: While Loop
/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-6-Loops-and-Random-Numbers\" && g++ lab6.cpp -o lab6 && "c:\Users\goten\Desktop\computer science\Lab-6-Loops-and-Random-Numbers\"lab6
celcius and farentheight are the same at -40
*/

// Program 2: Do While Loop
/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-6-Loops-and-Random-Numbers\" && g++ lab6.cpp -o lab6 && "c:\Users\goten\Desktop\computer science\Lab-6-Loops-and-Random-Numbers\"lab6
Would you like to view the menu?
yes
        Main       
Taco----------$3.00
Burrito-------$5.00
Quesadilla----$6.00

       Drinks      
Horchata------$1.50
Tamarindo-----$1.75
Coke----------$1.00
Sprite--------$1.25

What will you like to order today?
Taco
How many tacos would you like
6
Would you like anything to drink?
sprite
How many would you like?
9
Would you like to view the menu again?
no
You ordered the 9 tacos and the 9 Sprites
Your total will be $29.25
*/

// Program 3: Random Part 1
/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-6-Loops-and-Random-Numbers\" && g++ lab6.cpp -o lab6 && "c:\Users\goten\Desktop\computer science\Lab-6-Loops-and-Random-Numbers\"lab6
8
3
10
14
9
10
2
9
3
4
*/

// Program 3: Random Part 2
/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-6-Loops-and-Random-Numbers\" && g++ lab6.cpp -o lab6 && "c:\Users\goten\Desktop\computer science\Lab-6-Loops-and-Random-Numbers\"lab6
Please enter 10 numbers
3
4
5
6
7
8
9
0
1
2
your total is 45
*/

// Program 4: Coin Flippping Game
/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-6-Loops-and-Random-Numbers\" && g++ lab6.cpp -o lab6 && "c:\Users\goten\Desktop\computer science\Lab-6-Loops-and-Random-Numbers\"lab6
Want to play a game?
yes
Lets flip a coin  
flipping coin.....
Tails
Try Again?        
y
flipping coin.....
Heads
Try Again?
n
*/
