#include <iostream>
#include <string>
#include <cstdlib>

#include <ctime>

using namespace std;

int  main ()
{
  int sum = 0;

    for(int i = 100; i >= 50; i-=20)

    {

        sum+=i;

    }

    cout << sum << endl;
}