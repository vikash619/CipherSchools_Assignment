#include<bits/stdc++.h>
using namespace std;
 void initialize(int arr[], int size)
 {
     for(int i=0; i<size; i++)
     {
         cin>>arr[i];
     }

      for(int i=0; i<size; i++)
     {
            cout<<arr[i]<<" ";
     }
     
     cout<<endl;
 }
 
 int maximunmProfit(int arr[], int size)
 {
     int profit = 0;
     int mini_element = arr[0];
     for(int i=0; i<size; i++)
     {
         for(int j=0; j<size; j++)
         {
             if(arr[i] < mini_element)
             {
                 mini_element = arr[i];
             }
             else if(arr[i] - mini_element > profit)
             {
                 profit = arr[i] - mini_element;
             }
             
         }
     }
     
     return profit;
 }
int main ()
{
    int size;
    cin>>size;
    int arr[size];
    
    initialize(arr, size);
    
    int maxProfit = maximunmProfit(arr, size);
    cout<<"Max profit : "<<maxProfit<<endl;
    return 0;
}
