#include <iostream>
#include <stdlib.h>
void showArray ( int a[ ], int size ); // shows the array
void showReverse ( int a[ ], int size ); // shows the array in reverse
int lowest ( int a[ ], int size ); // finds and returns the lowest value
int highest ( int a[ ], int size ); // finds and returns the highest
int sumArray ( int a[ ], int size ); // calculates and returns the sum
float averageVal ( int a[ ], int size ); // calculates and returns the average of all values in the array
int count5 ( int a[ ], int size ); // returns how many times the number 5 appears in the array
int firstMinusLast ( int a[ ], int size ); // returns the difference b/w the First and Last Array Element
void showBeforeIndex( int a [ ], int index); // shows all array values before a specific index
void done ( ); // a function that shows the message "I am now done

int main(int argc, char const *argv[])
{
   int i,size=25,lower=3,upper=7,a[25];
for (i = 0; i < size; i++) {
int num = (rand() % (upper - lower + 1)) + lower;
a[i]=num;
}
printf("Showing the Array : ");
showArray(a,size);
printf(" Showing the Array In reverse : ");
showReverse(a,size);
printf(" The lowest of array : %d ",lowest(a,size) );
printf(" The highest of array : %d ",highest(a,size) );
printf(" The sum of array : %d ",sumArray(a,size) );
printf(" The average of array : %f ",averageVal(a,size) );
printf(" Numbe of 5's in array : %d ",count5(a,size) );
printf(" firstMinusLast in array : %d ",firstMinusLast(a,size) );
printf(" Before Index in Array : ");
showBeforeIndex(a,4);
printf(" ");
done();
   return 0;
}
void showArray(int a[],int size){
   int i=0;
   for(i=0;i<size;i++){
       printf("%d ",a[i] );
   }
}
void showReverse(int a[],int size){
   int i=0;
   for(i=size-1;i>=0;i--){
       printf("%d ",a[i] );
   }
}
int lowest(int a[],int size){
   int i=0,min=a[0];
   for(i=0;i<size;i++){
       if(a[i]<min)
           min=a[i];
   }
   return min;
}
int highest(int a[],int size){
   int i=0,max=a[0];
   for(i=0;i<size;i++){
       if(a[i]>max)
           max=a[i];
   }
   return max;
}
int sumArray(int a[],int size){
   int i=0,total=0;
   for(i=0;i<size;i++){
       total+=a[i];
   }
   return total;
}
float averageVal(int a[],int size){
   int i=0;
   float avg=0;
   for(i=0;i<size;i++){
       avg+=a[i];
   }
   return (float)avg/size;
}
int count5(int a[],int size){
   int i=0,total=0;
   for(i=0;i<size;i++){
       if(a[i]==5)
           total++;
   }
   return total;
}
int firstMinusLast(int a[],int size){
   return a[0]-a[size-1];
}
void showBeforeIndex(int a[],int index){
   int i=0;
   for(i=0;i<index;i++){
       printf("%d ",a[i] );
   }
}
void done(){
   printf("I am now done. ");
}