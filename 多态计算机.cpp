#include<bits/stdc++.h>
using namespace std;
//ԭ�򣺿���ԭ�� 
class calculator
{ 
	public:
		/*virtual void gg()=0;*///�����಻����ʵ���� ���������д 
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
��������ʱ���Ѹ����������Ϊ������ 
�����鹹��Ҫ����Ҳ��Ҫʵ�� 
virtual ~calculator()=0;
calculator::~calculator(){};
