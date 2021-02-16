#include <iostream>
using namespace std;


//Two people meet each other
bool willMeetorNot(int d1, int d2, int v1, int v2)
{
    if(d1>d2 && v1 > v2)
    {
        cout<<"They will never meet"<<endl;
        return false;
    }
    if(d2>d2 && v2>v2)
    {
        cout<<"They will never meet"<<endl;
        return false;
    }
    //Using method Relative speed
    int D = d1-d2;
    int V = v1-v2;
    
    if(D%V==0)
    {
        cout<<"They will meet"<<endl;
        return true;
    }
    cout<<"They will never meet"<<endl;
    return false;
    
    cout<<"They will never meet"<<endl;
    return false;
}

int main()
{
    int d1, d2;
    int v1, v2;
    cout<<"Enter first person's distance :";
    cin>>d1;
    cout<<"Enter firs person's speed :";
    cin>>v1;
    cout<<"Enter second person's distance :";
    cin>>d2;
    cout<<"Enter second person's speed :";
    cin>>v2;
  
    cout<<willMeetorNot(d1,d2,v1,v2);
    return 0;
}
