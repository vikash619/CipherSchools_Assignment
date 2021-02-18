
# include<iostream> 
using namespace std;
# define M_S 100 

void print_Parenthesis(int pos, int n, int open, int close); 

void printParenthesis(int n) 
{ 
	if(n > 0) 
		print_Parenthesis(0, n, 0, 0); 
	return; 
}	 

void print_Parenthesis(int pos, int n, int open, int close) 
{ 
	static char str[M_S];	 
	
	if(close == n) 
	{ 
		cout<<str<<endl; 
		return; 
	} 
	else
	{ 
		if(open > close) 
		{ 
			str[pos] = ')'; 
			print_Parenthesis(pos+1, n, open, close+1); 
		} 
		
		if(open < n) 
		{ 
		str[pos] = '('; 
		print_Parenthesis(pos+1, n, open+1, close); 
		} 
	} 
} 

int main() 
{ 
	int n = 3; 
	printParenthesis(n); 
	
	return 0; 
} 
