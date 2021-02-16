#include <iostream>

using namespace std;

void segregate(int arr[], int size)
{
    int count_Zero = 0;
      for(int i=0; i<size; i++)
      {
          if(arr[i]==0)
          {
              count_Zero++;
          }
      }
      
      for(int i=0; i<count_Zero; i++)
      {
          arr[i] = 0;
      }
      
      for(int i=count_Zero; i<size; i++)
      {
          arr[i] = 1;
      }
      
      for(int i=0; i<size; i++)
      {
          cout<<arr[i]<<" ";
      }
}

int main()
{
   int size;
   cin>>size;
   int arr[size];
   cout<<"Enter only 0 and 1 please ";
   for(int i =0; i<size; i++)
   {
       cin>>arr[i];
   }
    
    segregate(arr, size);
    return 0;
}
