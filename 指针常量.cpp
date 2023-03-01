#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=0,b=5;
	const int *p=&a;
	int *const q=&b;
	cout<<*p<<endl;
	cout<<p<<endl; 
	cout<<*q<<endl;
	cout<<q<<endl;
	p=&b;
	*q=10;
	cout<<*p<<endl;
	cout<<p<<endl; 
	cout<<*q<<endl;
	cout<<q;
	return 0;
	
}
