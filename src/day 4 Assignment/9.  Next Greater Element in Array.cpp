#include <bits/stdc++.h>
using namespace std;

void intiliazeArray(int arr[], int size)
{
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

void nextgretaer(int arr[], int size)
{
    stack<int> usingStact;
    
    usingStact.push(arr[0]);
    
    for(int i=1; i<size; i++)
    {
        if(usingStact.empty())
        {
            usingStact.push(arr[i]);
        }
        
        while(usingStact.empty() == false && usingStact.top() < arr[i])
        {
            cout<<usingStact.top()<<" -> "<<arr[i]<<endl;
            usingStact.pop();
        }
        
        usingStact.push(arr[i]);
    }
    
    while(usingStact.empty() == false)
    {
        cout<<usingStact.top()<<" -> "<<-1<<endl;
        usingStact.pop();
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
    
    cout<<endl<<"Next Greater Elements "<<endl;
    nextgretaer(arr,size);
    return 0;
}
