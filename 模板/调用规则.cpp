#include<bits/stdc++.h>
using namespace std;

template<class T>//����һ��ģ�� ���Ͳ�����
void huan(T &a,T &b)
{
	cout<<"����ģ��"<<endl; 
} 

void huan(int a,int b)
{
	cout<<"������ͨ"<<endl;
}

template<class T>//����һ��ģ�� ���Ͳ�����
void huan(T &a,T &b,T &c)
{
	cout<<"����ģ��2"<<endl; 
} 

template<>void huan(char &a,char &b)//����
{
	cout<<"����3"<<endl; 
} 

int main()
{
	int c=10;
	int d=100;
	huan(c,d);
	huan<>(c,d);//ǿ�Ƶ��� 
	huan(c,d,c);
	char g=g;
	char k=k;
	huan(g,k);
	system("pause");
	return 0;
}
