// lab10(1).cpp
// Ivan ALier-Reyes
// April 20th 2021
// 

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int randint( int min, int max );
void showArray ( int a[], int size );
void showReverse ( int a[], int size );
int lowest ( int a[], int size );
int highest ( int a[], int size );
int sumArray ( int a[], int size );
float averageVal ( int a[], int size );
int count5 ( int a[], int size );
int firstMinusLast ( int a[], int size );
void showBeforeIndex ( int a[], int size, int index );
void done ( );


int main ()
{
    int max, min, i, a[25], size = 25; 

    cout<<"give me a minimum quantity"<<endl;
    cin>>min;
    cout<<"give me  maximum quantity"<<endl;
    cin>>max;
    
    for (i = 0; i<=24; i++)
    {
         a[i] = randint(min, max);
    }

    // i need to check my arrays lmao

    /*
    for (i = 0; i<=24; i++)
    {
        cout<<array[i]<<endl;
    }
    */

   showArray(a, size);
   cout<<""<<endl;
   showReverse(a, size);
   cout<<""<<endl;
   lowest(a, size);
   cout<<""<<endl;
   highest(a, size);
   cout<<""<<endl;
   sumArray(a, size);
   cout<<""<<endl;
   averageVal(a, size);
   cout<<""<<endl;
   count5(a, size);
   cout<<""<<endl;
   firstMinusLast(a, size);
   cout<<""<<endl;
   showBeforeIndex(a, size, 4);
   cout<<""<<endl;
   done();



}

int randint(int min, int max)
{
    int result;

    // srand((time(0)));
    result = ((rand()%((max - min) + 1))+ min);


}
void showArray ( int a[], int size )                                         // shows the array in the format "int a [ ] = { 3, 7, 4, ... ,5, 6, 3, 4, 7 } "
{
    cout<<"a[] = { "<<endl;
    for(int i=0;i<size-1;i++)
    {
        cout<<a[i]<<", ";
    }
    cout<<a[size-1]<<" }";
}
void showReverse ( int a[], int size )                                   // shows the array in reverse using the format "int a [ ] = { 7, 4, 3, 6, 5, ... , 4, 7, 3 } "
{
    cout<<" a[] = { "<<endl;
    for(int i=size-1;i>=1;i--)
    {
        cout<<a[i]<<", ";
    }
    cout<<a[0]<<" }";
}
int  lowest ( int a[], int size )                                                // finds and returns the lowest value in the array (should be 3)
{
    int min;
    min = a[0];
    for (int i = 0; i<size ; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}
int  highest ( int a[], int size )                                                // finds and returns the highest value in the array (should be 7)
{
    int max;
    max = a[0];
    for (int i = 0; i<size ; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int  sumArray ( int a[], int size )                              // calculates and returns the sum of all values in the array
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
float averageVal ( int a[], int size )                          // calculates and returns the average of all values in the array
{
    int sum = 0;
    float avg;
    for(int i=0;i<size;i++)
    {
        sum = sum + a[i];
    }
    avg = (float)sum/size;
    return avg;
}
int count5 ( int a[], int size )                                   // returns how many times the number 5 appears in the array
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==5)
        {
            count = count + 1;
        }
    }
    return count;
}
int firstMinusLast ( int a[], int size )                      // returns the difference between the First Array Element - Last Array Element
{
    int diff;
    diff = a[0] - a[size-1];
    return diff;
}
void showBeforeIndex( int a [], int size, int index)            // shows all array values before a specified index
{
    for(int i=0;i<index;i++)
    {
        cout<<a[i]<<" ";
    }
}
void done ( )                                                            // a function that shows the message "I am now a pro at functions!:
{
    cout<<"i am an OG in functions"<<endl;
}