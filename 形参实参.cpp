#include<bits/stdc++.h>
using namespace std;
int n,m,*p=&n,*q=&m;//&ȡ��ַ *pָ��ֵ pָ���ַ 
void swap(int *a,int *b); 

void swap(int *a,int *b)
{
	int k=*a;
	*a=*b;
	*b=k;
}

int main()
{
	cin>>n;
	cin>>m;
	cout<<"n="<<n<<" "<<"m="<<m<<endl;
	swap(*p,*q);
	cout<<"n="<<n<<" "<<"m="<<m<<endl;
	system("pause");
	return 0;
}

