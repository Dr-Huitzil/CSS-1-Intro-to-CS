#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    
}

string VendingMachine()
{
    int random = rand()%3+1;
    string option;
if(random == 1)    {return option = "Maruchan Soup";
    }else if(random == 2)    {return option = "Frozen burrito";
        }else {return option = "Machine Jammed!";
            }
            }
