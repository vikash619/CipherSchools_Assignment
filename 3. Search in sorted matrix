#include <iostream>

using namespace std;

int main()
{
   int rows,column;
   cin>>rows;
   cin>>column;
   
   int arr[rows][column];
   
   
   for(int i =0; i<rows; i++)
   {
       for(int j=0; j<column; j++)
       {
           cin>>arr[i][j];
       }
   }

    cout<<endl;
    
    int find;
    cout<<"Enter number want to find :";
    cin>>find;
    
    
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(arr[i][j]==find)
            {
                cout<<"Number found at index : "<<i<<","<<j<<endl;
            }
        }
    }

    return 0;
}
