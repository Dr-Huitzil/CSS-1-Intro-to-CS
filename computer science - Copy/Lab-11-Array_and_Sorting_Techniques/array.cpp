//lab11.cpp
//Ivan Alier-Reyes
//April 26th 2021

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void showReverse ( int a[], int size );
void showGreatest ( int a[], int size );
int sumArray( int a[], int size);

int main()
{
    int a[10], i;
    int size = 10;

    cout<<"enter 10 numbers"<<endl;

    for (i=0; i<=10; i++)
    {
        cin>>a[i];
    }

    showGreatest(a, size);
    cout<<""<<endl;
    showReverse(a, size);
    cout<<""<<endl;
    sumArray(a, size);
}


void showReverse ( int a[], int size )
{
    int i, j;
    int temp = 0;

        for(i=0; i <= 9; i++)
        {
            for (int j = i+1; j <= 9; j++) 
            {   
                if(a[i] < a[j]) 
                {  
                    temp = a[i];  
                    a[i] = a[j];  
                    a[j] = temp;  
                }   
            }  
        }

    cout<<"Elements of array sorted in decending order: "<<endl;
    for (int i = 0; i <= 9; i++) 
    {   
        cout<<" "<<a[i];  
    } 

}


void showGreatest ( int a[], int size )
{
    int i, j;
    int temp = 0;

    for (int i = 0; i < 9; i++)
    {   
        for (int j = i+1; j < 10; j++) {   
           if(a[i] > a[j]) {  
               temp = a[i];  
               a[i] = a[j];  
               a[j] = temp;  
           }   
        }   
    }  
 
    cout<<"Elements of array sorted in ascending order: "<<endl;
    for (int i = 0; i < 10; i++) 
    {   
        cout<<" "<<a[i];  
    } 
}

int sumArray( int a[], int size)
{
    int sum = 0, i;
    for (i = 0; i <= 9; i++)
    {
        sum = sum + a[i];
    }
    
    return sum;
}

/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-11\" && g++ array.cpp -o array && 
"c:\Users\goten\Desktop\computer science\Lab-11\"array
enter 10 numbers
75
38
84
7
9
1
19929
834
32
94
82
Elements of array sorted in ascending order: 
 1 7 9 32 38 75 84 94 834 19929
Elements of array sorted in decending order:
 19929 834 94 84 75 38 32 9 7 1
*/