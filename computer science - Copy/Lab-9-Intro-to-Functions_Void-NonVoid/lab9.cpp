//lab9.cpp
//Ivan Alier-Reyes
//April 06 2021
//I think im finally going to implement some more complicated math into programming. cant wait to implemetn calculus.

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

double cyvol(double radius, double height);
string randomFortune();
void votingMachine(string name, int age);

//Program 1: Finding the volume of a cylinder

int main ()
{
    double radius;
    double height;

    cout<<"give me the radius and the height of the cylinder"<<endl;
    cin>>radius;
    cin>>height;

    cout << "the volume of the cylinder is " << cyvol(radius, height)<<endl;

    return 0;

}

double cyvol(double radius, double height)
{
    double vol = 0;
    vol = 3.14 * pow(radius, 2.0) * height;
    return vol;
}

// Program 2: Random Fortune Generator

int main ()
{

    string reply;

    cout << "you have approached a suspicious looking cookie on the floor? Would you like to pick it up? (Y/N)"<<endl;
    cin >> reply;

    cout << randomFortune() << endl;

    return 0;

}

string randomFortune()
{
    string reply;
    string fortune;

    do
    {
        srand((time(0)));
        int cookie = ((rand()%6)+1);

            if (cookie == 1)
            {
                return fortune = "What is the point of homework? We're alll going to die anyways.";
            }
            else if (cookie == 2)
            {
                return fortune = "If you think about it, all religions seem to be similar when it comes to the lore of the religious beliefs";
            }
            else if (cookie == 3)
            {
                return fortune = "You will die";
            }
            else if (cookie == 4)
            {
                return fortune = "There is a lot of evidence pointing towards the CIA as the culpirt when it comes to the assassination of JFK";
            }
            else if (cookie == 5)
            {
                return fortune = "Its kinda weird that the Nazi's spent too much time setting up bases in the Antartic continent when it is well known that Antartica has nothing in it. After the end of World War II, the United States government sent a guy known as Admiral Bird on an expedition to Antartica. Soon after he came back, he was awarded some awards and the goverment told him to shut up. He has implied that he saw thngs that we may not comprehend since there seems to be an earth inside of the earth thus the belief of the Hollow Earth Theory";
            }
            else if (cookie == 6)
            {
                return fortune = "If you really think about it, the present does not exist within our understanding of time itself. It takes time for us to process the things that are happening in our surroundings. It may be micro seconds but everything we see has already passed and everything we are yet to see is in the future. Which is why only the past and the future exist.";
            }
            else
            {
                return 0;
            }
    }
    while ((reply == "y" || reply == "yes" || reply == "Yes" || reply == "Y"));
}

// Program 3: Vote Checker

int main ()
{

    string name;
    int age;

    cout << "what is your name" <<endl;
    cin >> name;

    cout << "what is your age"<< endl;
    cin >> age;

    votingMachine(name, age);
 
    return 0;

}
 
void votingMachine(string name, int age)
{
    if(age >= 18)
    {
        cout<<name<<", you can vote"<<endl;
    }
    else
    {
        cout<<name<<", you cannot Vote"<<endl;
    }
}

// Program 1: Finding the volume of a cylinder
/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-9-Intro-to-Functions_Void-NonVoid\" && g++ lab9.cpp -o lab9 && "c:\Users\goten\Desktop\computer science\Lab-9-Intro-to-Functions_Void-NonVoid\"lab9
give me the radius and the height of the cylinder
7.00
7.85
the volume of the cylinder is 1207.8
*/

// Program 2: Random Fortune Generator
/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-9-Intro-to-Functions_Void-NonVoid\" && g++ lab9.cpp -o lab9 && "c:\Users\goten\Desktop\computer science\Lab-9-Intro-to-Functions_Void-NonVoid\"lab9
you have approached a suspicious looking cookie on the floor? Would you like to pick it up? (Y/N)
yes
If you really think about it, the present does not exist within our understanding of time itself. It takes time for us to process the things that are happening in our surroundings. It may be micro seconds but everything we see has already passed and everything we are yet to see is in the future. Which is why 
only the past and the future exist.


*/

// Program 3: Vote Checker
/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-9-Intro-to-Functions_Void-NonVoid\" && g++ lab9.cpp -o lab9 && "c:\Users\goten\Desktop\computer science\Lab-9-Intro-to-Functions_Void-NonVoid\"lab9
what is your name
Ivan 
what is your age
19
Ivan, you can vote
*/


