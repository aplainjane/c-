#include<bits/stdc++.h>
using namespace std;

template<class T>//声明一个模板 类型参数化
void huan(T &a,T &b)
{
	cout<<"调用模板"<<endl; 
} 

void huan(int a,int b)
{
	cout<<"调用普通"<<endl;
}

template<class T>//声明一个模板 类型参数化
void huan(T &a,T &b,T &c)
{
	cout<<"调用模板2"<<endl; 
} 

template<>void huan(char &a,char &b)//重载
{
	cout<<"调用3"<<endl; 
} 

int main()
{
	int c=10;
	int d=100;
	huan(c,d);
	huan<>(c,d);//强制调用 
	huan(c,d,c);
	char g=g;
	char k=k;
	huan(g,k);
	system("pause");
	return 0;
}
