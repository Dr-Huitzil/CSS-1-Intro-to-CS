#include <iostream>
#include <math.h>
using namespace std;

int main ()
{

double Paper, smallPaper, bigPaper, small, big, rest, total;

cout<<"how much paper will you fax today?: ";
cin>>Paper;

smallPaper = (Paper < 10);
bigPaper = (Paper > 10);
small = (Paper * 0.2);
rest = (Paper - 10);

if (smallPaper) {
	total = (small) + 3.00;
    cout<<"it will cost you " <<total<< " dollars to print today" <<endl;
}
else if (bigPaper) {
          total = (10 * 0.2) + (rest * 0.10) + 3.00;
          cout<<"it will cost you " <<total<< " dollars to print today" <<endl;
}


}