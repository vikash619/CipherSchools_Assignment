#include <iostream>

using namespace std;

void occurence(int arr[],int size,int number)
{
    int first= -1;
    int last = -1;
    for(int i=0; i<size; i++)
    {
        if(number != arr[i])
        {
            continue;
        }
        if(first == -1)
        {
            first = i;
        }
        last = i;
    }
    
    cout<<first<<" "<<last;
}
int main()
{
  
  int size;
  cout<<"Enter size of array :";
  cin>>size;
  
  int arr[size];
  for(int i=0; i<size; i++)
  {
      cin>>arr[i];
  }
    
    int number;
    cout<<"Enter number whose occurence want to find :";
    cin>>number;
    
    occurence(arr,size,number);
    return 0;
}
