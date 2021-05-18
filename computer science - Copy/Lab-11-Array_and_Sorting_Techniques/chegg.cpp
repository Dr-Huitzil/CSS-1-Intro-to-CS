#include <iostream>

using namespace std;

int main ()
{
     //Initialize array   
    int arr[10], i;  
    int temp = 0;  
      
    for (i=0; i<=9; i++)
    {
        cin>>arr[i];
    }

    //Calculate length of array arr  
    // int length = sizeof(arr)/sizeof(arr[0]);  
      
    //Displaying elements of original array  
    // printf("Elements of original array: \n");  
    // for (int i = 0; i < length; i++) {   
    //     printf("%d ", arr[i]);   
    // }    
      
    //Sort the array in ascending order  
    for (int i = 0; i < 9; i++)
    {   
        for (int j = i+1; j < 9; j++) {   
           if(arr[i] > arr[j]) {  
               temp = arr[i];  
               arr[i] = arr[j];  
               arr[j] = temp;  
           }   
        }   
    }  
      
    // printf("\n");  
      
    //Displaying elements of array after sorting  
    cout<<"Elements of array sorted in ascending order: "<<endl;
    for (int i = 0; i < 9; i++) {   
        cout<<" "<<arr[i];  
    }  
    return 0;  
            for (int i = 0; i < arr.Length; i++) {   
            for (int j = i+1; j < arr.Length; j++) {   
               if(arr[i] < arr[j]) {  
                   temp = arr[i];  
                   arr[i] = arr[j];  
                   arr[j] = temp;  
               }   
            }   
        }  
}