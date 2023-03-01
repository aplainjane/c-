#include<bits/stdc++.h>
using namespace std;
int woc[10];

void maopaopaixu(int *p,int n)
{
	int *q=p;
	for(int gg=0;gg<n-1;gg++)
	{
		p=q;
		for(int hh=0;hh<n-1-gg;hh++)
		{
			int temp=*p;
			if(*p<*(p+1))
			{
				*p=*(p+1);
				*(p+1)=temp;
			}
			p++;
		}
		
	}
}

int main()
{
	int longwoc=sizeof(woc)/sizeof(woc[0]);
	for(int k=0;k<longwoc;k++)
	{
		cin>>woc[k];
	}
	maopaopaixu(woc,longwoc);
	for(int y=0;y<longwoc;y++)
	{
		cout<<woc[y]<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
	
}
