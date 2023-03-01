#include<bits/stdc++.h>
using namespace std;

template<typename/*class*/ T>//声明一个模板 类型参数化
void huan(T &a,T &b)
{
	T temp=a;
	a=b;
	b=temp;
} 


int main()
{
	int c=10;
	int d=100;
	huan/*<int>*/(c,d);
	cout<<c<<" "<<d<<endl; 
	system("pause");
	return 0;
}
