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
	
	cout<<"What is your name?: ";
	cin.getline(name,MAX_LENGTH);
	cout<<"When is your birthday?: ";
	cin.getline(bDay, MAX_LENGTH);
	
	cout<<"Name: "<<name<<endl;
	cout<<"Birthday: "<<bDay<<endl;
	
	return 0;
}

//This is the second program that asks for my weekly expenses and then adds it together

int second()
{
	int total, food, gas;

	cout<<"How much did you spend on groceries last week?:";
	cin>>food;
	cout<<"How much did you spend on diesel?:";
	cin>>gas;

	total=food+gas;

  cout<<"You spent this much money this week:"<<total<<endl;

  return 0;
}