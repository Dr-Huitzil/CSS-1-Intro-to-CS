// Ivan Alier-Reyes
// March 1st 2021
// This is the code part to the midterm

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    double wallet, poundA, total, remainderW;
    int apple;
    wallet = 100.00;
    poundA = 1.72;

    cout << "How many pounds of apples did you purchase today?"<<endl;
    cin >> apple;

        total = apple * poundA;
        remainderW = wallet - total;

            if (total > 100.00)
            {
                cout<<"You don't have enough money for this purchase"<<endl;
                return 0;
            }

    cout<<"You now have $" <<remainderW<< " remaining in your wallet"<<endl;

        if (apple < 5)
        {
            cout<<"Hope you make delicious caramel apples!"<<endl;
        }
        
        else if (5 < apple && apple < 10)
        {
            cout<<"Hope you're planning on making some apple pie!"<<endl;
        }

        else if (apple > 10)
        {
            cout<<"What can a person possibly do with that many apples??"<<endl;
        }

}