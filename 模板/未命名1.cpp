#include<bits/stdc++.h>
using namespace std;

template<typename/*class*/ T>//����һ��ģ�� ���Ͳ�����
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
