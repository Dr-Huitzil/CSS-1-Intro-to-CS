//lab11.cpp
//Ivan Alier-Reyes
//April 26th 2021

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

    string list[10], reply;
    int i, item;
    
    cout<<"Welcome to you list. please add 10 items to your list"<<endl;
    
        for(i = 0; i <= 9; i++)
        {
            cin>>list[i];
        }
    
    cout<<"would you like to view or remove items from your list?"<<endl;
    cin>>reply;

        if (reply == "view")
        {
            for(i = 0; i <= 9; i++)
            {
                cout<<i+1<<") "<<list[i]<<endl;
            }
        }
        else if (reply == "remove")
        {
            for(i = 0; i <= 9; i++)
            {
                cout<<i+1<<") "<<list[i]<<endl;
            } 

            cout<<"what item would you like to remove???"<<endl;
            cin>>item;

                switch(item)
                {
                    case '1':
                                //delete 1
                                for (int i = 0; i <= 9; i++)
                                list[0] = list[0+1];
                                list[10-1] = 0;
                                //show updated list
                    case '2':
                                for (int i = 0; i <= 9; i++)
                                list[0] = list[0+1];
                                list[10-1] = 0;
                    case '3':
                                for (int i = 0; i <= 9; i++)
                                list[0] = list[0+1];
                                list[10-1] = 0;
                    case '4':
                                for (int i = 0; i <= 9; i++)
                                list[0] = list[0+1];
                                list[10-1] = 0;
                    case '5':
                                for (int i = 0; i <= 9; i++)
                                list[0] = list[0+1];
                                list[10-1] = 0;
                    case '6':
                                for (int i = 0; i <= 9; i++)
                                list[0] = list[0+1];
                                list[10-1] = 0;
                    case '7':
                                for (int i = 0; i <= 9; i++)
                                list[0] = list[0+1];
                                list[10-1] = 0;
                    case '8':
                                for (int i = 0; i <= 9; i++)
                                list[0] = list[0+1];
                                list[10-1] = 0;
                    case '9':
                                for (int i = 0; i <= 9; i++)
                                list[0] = list[0+1];
                                list[10-1] = 0;
                    case '10':
                                for (int i = 0; i <= 9; i++)
                                list[0] = list[0+1];
                                list[10-1] = 0;
                }
            
        }
        else 
        {

        }





}