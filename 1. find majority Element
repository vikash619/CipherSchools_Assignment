#include <iostream>

using namespace std;

void majorityElement(int arr[], int size)
{
    int index = 0;
    int Maximinum_count = 0;
    
    for(int i=0; i<size; i++)
    {
        int count = 0;
        for(int j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        
        if(count>Maximinum_count)
        {
            Maximinum_count = count;
            index = i;
        }
    }
    
    if(Maximinum_count>size/2)
    {
        cout<<"Element found :"<<arr[index]<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
}
int main()
{
    int length;
    
    cout<<"Enter lenght of array :";
    cin>>length;
    
    int arr[length];
    
    cout<<"Enter elements : ";
    for(int i=0; i < length; i++)
    {
        cin>>arr[i];
    }
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    majorityElement(arr,size);
    
    return 0;
}
