#include<bits/stdc++.h>
using namespace std;

class circle
{
	public:
		circle()
		{
			cout<<"Բ�ڴ�����~"<<endl; 
		}
		int getX()
		{
			return c_X;
		}		
		void setX(int a)
		{
			c_X=a;
		}
		int getY()
		{
			return c_Y;
		}		
		void setY(int a)
		{
			c_Y=a;
		}
		void setr(int a)
		{
			r=a;
		}
		void getxin(int &a,int &b)
		{
			a=c_X;
			b=c_Y;
		}
		int getr()
		{
			return r;
		}
		~circle()
		{
			cout<<"Բ������!"<<endl; 
		}
	private:
		int c_X;
		int c_Y;
		int r;
};

class point
{
	public:
		int getX()
		{
			return X;
		}		
		void setX(int a)
		{
			X=a;
		}
		int getY()
		{
			return Y;
		}		
		void setY(int a)
		{
			Y=a;
		}
		void getxin(int &a,int &b)
		{
			a=X;
			b=Y;
		}
	private:
		int X;
		int Y;		
};

void gx(circle &a,point &b)
{
	int jl=(a.getX()-b.getX())*(a.getX()-b.getX())+(a.getY()-b.getY())*(a.getY()-b.getY());
	cout<<"���ǵĹ�ϵ�ǣ�"; 
	if(a.getr()*a.getr()<jl)
	{
		cout<<"����Բ��"<<endl; 
	}
	if(a.getr()*a.getr()==jl)
	{
		cout<<"����Բ��"<<endl; 
	}
	if(a.getr()*a.getr()>jl)
	{
		cout<<"����Բ��"<<endl; 
	}
}

int main()
{
	circle yi;
	point er;
	cout<<"������Բ�����꣺x=";
	int n;
	cin>>n;
	yi.setX(n);
	cout<<"y=";
	cin>>n;
	yi.setY(n);
	cout<<"������Բ�İ뾶��r=";
	cin>>n;
	yi.setr(n);
	cout<<"������������:x=";
	cin>>n;
	er.setX(n);
	cout<<"y=";
	cin>>n;
	er.setY(n);
	gx(yi,er);
	system("pause");
	return 0;
} 
