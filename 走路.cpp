#include<bits/stdc++.h>
using namespace std;
int x=0,y=0;
	
void yidong(int n,int m)
{
	system("cls"); 
	for(int b=0;b>=-10;b--)
	{
		for(int a=0;a<=10;a++)
		{
			
			if(a==n&&b==m)
			{
				cout<<"QAQ";
			}
			else
			{	
				cout<<"www";
			}	
		}
		cout<<endl;
	}
	cout<<endl;
}

int main()
{

	
	for(int k=1;k!=0;)
	{
		yidong(x,y);
		cout<<"�����������ж�"<<endl<<"����1 ����3 ����2 ����5"<<endl;
		int d=0;
		cin>>d;
		if(d==1&&x>0)
		{
			x=x-1;
			yidong(x,y);
		} 
		else if(d==3&&x<10)
		{	x=x+1;
			yidong(x,y);
		}
		else if(d==5&&y<0)
		{	y=y+1;
			yidong(x,y);
		}
		else if(d==2&&y>-10)
		{	y=y-1;
			yidong(x,y);
		}
		else
		{
			cout<<"���Ϸ��Ĳ���";
			system("pause");
			yidong(x,y) ;
		}
	}
	system("pause");
	return 0; 
}


