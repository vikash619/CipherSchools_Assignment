#include<bits/stdc++.h>
using namespace std;

void initializeArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
}
int missingNumber(int arr[], int size)
{
    int number = (size + 1) * (size + 2) / 2;
    for (int i = 0; i < size; i++)
        number -= arr[i];
    return number;
}
int main ()
{
    int size;
    cout<<"Enter size of array :";
    cin>>size;
    int arr[size];
    
    initializeArray(arr, size);
    
    int miss_Number = missingNumber(arr, size);
    cout<<"Missing Number : "<<miss_Number<<endl;
    return 0;
}
