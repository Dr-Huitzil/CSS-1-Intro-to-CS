// lab2.cpp
// Ivan Alier-Reyes
// Februry 2nd 2021
// I think i am supposed to write a program that asks a person for their name and birthdate


#include <iostream>
#include <string>
using namespace std;

#define MAX_LENGTH 100

//This is program numero uno. it asks me for my name and birthdate

int main()
{
	char name[MAX_LENGTH]={0};
	char bDay[MAX_LENGTH]={0};
	char resp[MAX_LENGTH]={0};

	cout<<"Enter your name: ";
	cin.getline(name,MAX_LENGTH);
	cout<<"Enter your birthday: ";
	cin.getline(bDay, MAX_LENGTH);
	
	cout<<"Is your name " <<name<< " and your birthday on " <<bDay<<"?: ";
  cin.getline(resp,MAX_LENGTH);
  cout<<"cool"<<endl;
  
	
  cout<<""<<endl;
//I put those in there to like add space
//This is the second program that asks for my weekly expenses and then adds it together

  cout<<""<<endl;

	int total, food, gas;

	cout<<"How much did you spend on groceries last week?: ";
	cin>>food;
	cout<<"How much did you spend on diesel?: ";
	cin>>gas;

	total=food+gas;

  cout<<"You spent " <<total<< " this week" <<endl;

  return 0;
}

/*
 clang++-7 -pthread -std=c++17 -o main main.cpp
 ./main
Enter your name: Ivan Alier-Reyes
Enter your birthday: October 22nd 2001
Is your name Ivan Alier-Reyes and your birthday on October 22nd 2001?: yes
cool


How much did you spend on groceries last week?: 120
How much did you spend on diesel?: 10
You spent 130 this week
 
*/