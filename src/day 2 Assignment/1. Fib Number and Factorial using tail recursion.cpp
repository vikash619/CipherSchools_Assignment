#include<bits/stdc++.h>
using namespace std;
 
 int fibNumber(int fib_number)
 {
     if(fib_number == 1 || fib_number ==2)
     {
         return 1;
     }
     
     return fibNumber(fib_number-1) + fibNumber(fib_number-2);
 }
 
 int factorial(int fac)
 {
     if(fac <= 1)
     {
         return 1;
     }
     return fac*factorial(fac-1);
 }
int main ()
{
    int fib_number;
    cout<<"Enter number for Fibonacci :";
    cin>>fib_number;
    cout<<"Fibonacci : "<<fibNumber(fib_number);
    cout<<endl;
    
    int fac;
    cout<<"Enter number for factorial :";
    cin>>fac;
    cout<<"factorial : "<<factorial(fac);
    return 0;
}
