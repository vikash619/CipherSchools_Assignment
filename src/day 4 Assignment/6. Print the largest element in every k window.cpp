#include <bits/stdc++.h>
using namespace std;

void printingMax(int arr[], int n, int k) 
{ 
	int j, maximum; 

	for (int i = 0; i <= n - k; i++) 
	{ 
		maximum = arr[i]; 

		for (j = 1; j < k; j++) 
		{ 
			if (arr[i + j] > maximum) 
				maximum = arr[i + j]; 
		} 
		cout << maximum << " "; 
	} 
} 

int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int k = 3; 
	printingMax(arr, n, k); 
	return 0; 
}
