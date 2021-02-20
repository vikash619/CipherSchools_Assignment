#include<bits/stdc++.h> 
using namespace std; 

stack<char> usingStack; 

string ns; 
 
char insert_at_bottom(char x) 
{ 

	if(usingStack.size() == 0) 
	usingStack.push(x); 

	else
	{ 
		char a = usingStack.top(); 
		usingStack.pop(); 
		insert_at_bottom(x); 
		usingStack.push(a); 
	} 
} 

char reverse() 
{ 
	if(usingStack.size()>0) 
	{ 
		char x = usingStack.top(); 
		usingStack.pop(); 
		reverse(); 
		insert_at_bottom(x); 
	} 
} 

int main() 
{ 
	usingStack.push('1'); 
	usingStack.push('2'); 
	usingStack.push('3'); 
	usingStack.push('4'); 
	
	cout<<"Original Stack"<<endl; 

	cout<<"1"<<" "<<"2"<<" "
		<<"3"<<" "<<"4"
		<<endl; 
		
	reverse(); 
	cout<<"Reversed Stack"
		<<endl; 
		
	while(!usingStack.empty()) 
	{ 
		char p=usingStack.top(); 
		usingStack.pop(); 
		ns+=p; 
	} 

	cout<<ns[3]<<" "<<ns[2]<<" "
		<<ns[1]<<" "<<ns[0]<<endl; 
	return 0; 
} 
