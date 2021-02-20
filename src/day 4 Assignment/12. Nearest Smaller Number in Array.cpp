#include <bits/stdc++.h>
using namespace std;

void intiliazeArray(int arr[], int size)
{
    cout<<"Initialising array"<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
}

void printArr(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void nearestsmaller(int arr[], int size)
{
    stack<int> usingStack;
    
    for(int i=0; i<size; i++)
    {
        while(usingStack.empty() == false && usingStack.top() >= arr[i])
        {
            usingStack.pop();
        }
        
        if(usingStack.empty())
        {
            cout<<"_, ";
        }
        else
        {
            cout<<usingStack.top()<<" , ";
        }
        
        usingStack.push(arr[i]);
    }
}

int main()
{
    
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    
    intiliazeArray(arr, size);
    printArr(arr, size);
    
    cout<<endl<<"Nearst smaller Elements "<<endl;
    nearestsmaller(arr,size);
    return 0;
}
