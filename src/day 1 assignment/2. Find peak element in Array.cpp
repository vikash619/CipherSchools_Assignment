#include <iostream>
using namespace std;

int peakElement(int arr[],int size)
{
    
    int left = 0;
    int right = size-1;
    
    while(left<right)
    {
        int mid = (left+right)/2;
        if(mid<size-1 && arr[mid]<arr[mid+1])
        {
            left = mid+1;
        }
        else{
            right = mid;
        }
        
    }
    return left;
}
int main()
{
    
    int lenght;
    cout<<"Enter length of array :";
    cin>>lenght;
    int arr[lenght];
    
    for(int i = 0; i<lenght; i++)
        cin>>arr[i];
    
    int size = sizeof(arr)/sizeof(arr[0]);
    int peak = peakElement(arr,size);
    cout<<"Peak Elemen is at Index "<<peak<<endl;
    return 0;
}
