// lab3.cpp
// Ivan Alier-Reyes
// Februry 9th 2021
// I think i am supposed to write a program that helps me solve a problem in a diary farm


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double leche, milk_carton, cost, profit;

	cout<<"How much milk do you produce in the morning?: ";
	cin>>leche;
		milk_carton = leche / 3.78;
	cout<<"You would need " <<milk_carton<< " milk cartons to hold the milk" <<endl;
		cost = leche * 0.38;
	cout<<"It will cost you " <<cost<< " dollars to produce" <<endl;
		profit = milk_carton * 0.27;
	cout<<"You will have made " <<profit<< " dollars profit" <<endl;


  return 0;
}

/* PS C:\Users\goten\Desktop\computer science\Lab-3-Problem-Solving-and-Dairy-Farm> cd "c:\Users\goten\Desktop\computer science\Lab-3-Problem-Solving-and-Dairy-Farm\" ; if ($?) { g++ lab3.cpp -o lab3 } ; if ($?) { .\lab3 }
How much milk do you produce in the morning?: 845.68
You would need 223.725 milk cartons to hold the milk
It will cost you 321.358 dollars to produce
You will have made 60.4057 dollars profit
PS C:\Users\goten\Desktop\computer science\Lab-3-Problem-Solving-and-Dairy-Farm> 
*/