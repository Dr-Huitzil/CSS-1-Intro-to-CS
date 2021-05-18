// Name
// main.cpp
// Date
// Description:

#include <iostream>
#include <string>

using namespace std;

//function prototype
void withdraw(double& balance, double amount);
void deposits (double& balance, double amount);

int main()
{
    double joint_account = 1000.00;
    string reply, reply2, reply3, reply4, back, back2;
    double newbalance, moneyin;
    double balance = 500.00;
    
    do
    {
        cout<<"which account do you want to access? Personal or Joint?"<<endl;
        cin>>reply;
        cout<<"remember you can alway go back to the main menu by typing return at any time"<<endl;

            if (reply == "Personal")
            {
                do
                {
                    cout<<"What will you like to do today? Deposit or Withdraw"<<endl;
                    cin>>reply2;

                        if (reply2 == "deposit")
                        {
                            cout<<"how much will you like to deposit?"<<endl;
                            cin>>moneyin;
                            deposits(balance, moneyin);
                            cout<<"your new balance is $"<<balance<<endl;

                        }
                        else if (reply2 == "withdraw")
                        {
                            cout<<"how much will you like to withraw?"<<endl;
                            cin>>moneyin;
                            withdraw(balance, moneyin);
                            cout<<"your new balance is $"<<balance<<endl;
                        }
                        else
                        {

                        }

                    cout<<"would you like to do something else?"<<endl;
                    cin>>back;
                }
                while (back == "return");
            }
            else if (reply == "Joint")
            {
                do
                {
                    cout<<"What will you like to do today? Deposit or Withdraw"<<endl;
                    cin>>reply3;
                        
                        if (reply3 == "deposit")
                        {
                            cout<<"how much will you like to deposit?"<<endl;
                            cin>>moneyin;
                            deposits(joint_account, moneyin);
                            cout<<"your new balance is $"<<joint_account<<endl;
                        }
                        else if (reply3 == "withdraw")
                        {
                            cout<<"hwo much will you like to withdraw?"<<endl;
                            cin>>moneyin;
                            withdraw(joint_account, moneyin);
                            cout<<"your new balace is $"<<joint_account<<endl;
                        }
                        else
                        {
                            
                        }
                    
                    cout<<"would you like to do something else?"<<endl;
                    cin>>back;
                }
                while (back == "return");
            }
            else
            {
                cout<<"what was that?"<<endl;
                cout<<"type return to go back to the main menu"<<endl;
                cin>>back2;
            }
    }
    while(back2 == "return");   

    cout<<"Your new balance is: $"<<newbalance<<". Have a great day"<<endl;
    
    return 0;
}


//function definition
//void functions do not return a value
void withdraw(double& balance, double amount)
{
    if (balance >= amount)
    {
        balance = balance - amount;
        //balance = joint_account - amount;
    }
}

//function definition
//void functions do not return a value
void deposits(double& balance, double amount)
{
    if (balance <= amount)
    {
        balance = balance + amount;
        //balance = balance + amount;
    }

}

/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-10-\" && g++ bankaccount.cpp -o bankaccount && "c:\Users\goten\Desktop\computer science\Lab-10-\"bankaccount
which account do you want to access? Personal or Joint?
Personal
remember you can alway go back to the main menu by typing return at any time
What will you like to do today? Deposit or Withdraw
deposit
how much will you like to deposit?
675.98
your new balance is $1675.98
would you like to do something else?
no 
Your new balance is: $1675.98. Have a great day
*/
