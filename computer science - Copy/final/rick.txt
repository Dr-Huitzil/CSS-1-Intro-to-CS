//Final
//Ivan Alier-Reyes
//May 18th 2021
// it's the last assignment of the semester and this is basically lab 10. kinda fun but its okay i guess

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void showArray (int a[], int size);
void showReverse (int a[], int size);
int lowest (int a[], int size);
int highest (int a[], int size);
int sumArray (int a[], int size);

int main ()
{
    int ran1[5], ran2[10], i;

    srand(time(0));

        for(i = 0; i < 5; i++)
        {
            ran1[i] = ((rand()%10)+1);
        }
        
        for(i = 0; i < 10; i++)
        {
            ran2[i] = ((rand()%10)+1);
        }

            // to check the numbers

                // for(i = 0; i < 5; i++)
                // {
                //     cout<<ran1[i]<<endl;
                // }
                // cout<<" "<<endl;
                // for(i = 0; i < 10; i++)
                // {
                //     cout<<ran2[i]<<endl;
                // }

    //rand1[5]
    showArray(ran1, 5);
    showReverse(ran1, 5);
    lowest(ran1, 5);
    highest(ran1, 5);
    sumArray(ran1, 5);

    cout << "---------------------" << endl;

    //rand2[10]
    showArray(ran2, 10);
    showReverse(ran2, 10);
    lowest(ran2, 10);
    highest(ran2, 10);
    sumArray(ran2, 10);
    

}

void showArray (int a[], int size) 
{
    cout << "array[] = { ";

        for(int i = 0; i < size-1; i++)
        {
            cout << a[i] << ", ";
        }

    cout << a[size-1] << " }" << endl;
}

void showReverse (int a[], int size) 
{
    cout << "array[] = { ";

        for(int i = size-1; i >= 1; i--)
        {
            cout << a[i] << ", ";
        }

    cout << a[0] << " }" << endl;
}

int lowest (int a[], int size) 
{
    int min = a[0], i;

    for(i = 0; i < size; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }

    return min;

    cout << "" << endl;
}

int highest (int a[], int size) 
{
    int max = a[0], i;

    for(i = 0; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    return max;

    cout << "" << endl;
}

int sumArray (int a[], int size)
{
    int sum = 0, i;

    for(i = 0; i < size; i++)
    {
        sum = sum + a[1];
    }

    return sum;
}

/*
array[] = { 3, 9, 2, 8, 3 }
array[] = { 3, 8, 2, 9, 3 }
2
9
25
---------------------
array[] = { 10, 4, 2, 7, 1, 8, 7, 9, 7, 5 }
array[] = { 5, 7, 9, 7, 8, 1, 7, 2, 4, 10 }
1
10
60
*/
