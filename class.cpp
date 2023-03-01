#include<bits/stdc++.h>
using namespace std;

class circle
{
	public:
		circle()
		{
			cout<<"圆在创建中~"<<endl; 
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
			cout<<"圆已销毁!"<<endl; 
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
	cout<<"它们的关系是："; 
	if(a.getr()*a.getr()<jl)
	{
		cout<<"点在圆外"<<endl; 
	}
	if(a.getr()*a.getr()==jl)
	{
		cout<<"点在圆上"<<endl; 
	}
	if(a.getr()*a.getr()>jl)
	{
		cout<<"点在圆内"<<endl; 
	}
}

int main()
{
	circle yi;
	point er;
	cout<<"请输入圆心坐标：x=";
	int n;
	cin>>n;
	yi.setX(n);
	cout<<"y=";
	cin>>n;
	yi.setY(n);
	cout<<"请输入圆的半径：r=";
	cin>>n;
	yi.setr(n);
	cout<<"请输入点的坐标:x=";
	cin>>n;
	er.setX(n);
	cout<<"y=";
	cin>>n;
	er.setY(n);
	gx(yi,er);
	system("pause");
	return 0;
} 
