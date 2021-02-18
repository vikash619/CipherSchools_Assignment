#include <iostream> 
using namespace std; 

int numberOfPaths(int m, int n) 
{ 

	if (m == 1 || n == 1) 
		return 1; 

	return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1); 
	
} 

int main() 
{ 
    int row;
    cout<<"Enter Row :";
    cin>>row;
    int col;
    cout<<"Enter column :";
    cin>>col;
	cout << "Number Of Paths we can have : "<<numberOfPaths(row, col); 
	return 0; 
} 
