#include<bits/stdc++.h>
using namespace std;
//原则：开闭原则 
class calculator
{ 
	public:
		/*virtual void gg()=0;*///纯虚类不允许实例化 子类必须重写 
		virtual int getresult()
		{
			return 0;	
		}	
		int num1;
		int num2;
};

class add:public calculator
{
	public:
		int getresult()
		{
			return num1+num2;
		}
} ;
class sub:public calculator
{
	public:
		int getresult()
		{
			return num1-num2;
		}
} ;
class mul:public calculator
{
	public:
		int getresult()
		{
			return num1*num2;
		}
} ;

void test()
{
	int b,c;
	string d;
	cin>>b;
	cin>>d;
	cin>>c;
	if(d=="+");
	{
		calculator *a=new add;
		a->num1=b;
		a->num2=c;
		cout<<"="<<a->getresult()<<endl;	
		delete a;
	}

}

int main()
{
	test();
	system("pause");
	return 0;
}
/*if(a!=NULL)
{
	delete a;
	a=NULL;
}
析构子类时，把父类的析构改为虚析构 
纯虚虚构需要声明也需要实现 
virtual ~calculator()=0;
calculator::~calculator(){};
