#include<bits/stdc++.h>
using namespace std;

class phone
{
	public:
		phone()
		{
			cout<<"手机的构造"<<endl; 
		}
		~phone()
		{
			cout<<"手机的消亡"<<endl; 
		}
};
class person 
{
	public:
	static void func()
	{
		cout<<"静态成员函数的调用"<<endl;
	}
	int getage()
	{
		int g;
		g=age;
		return g;
	}
	person()
	{
		cout<<"人的构造"<<endl; 
	}
	~person()
	{
		cout<<"人的解构"<<endl; 
	}
		
	private:
		static int age;
		int *height;
		phone wode;
};

int person::age=100;

void test01(person &p)
{
	person::func();
	cout<<p.getage()<<endl; 
	person g;
} 

int main()
{	
	person pp;
	test01(pp);	
	system("pause");
	return 0;
}



