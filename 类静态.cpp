#include<bits/stdc++.h>
using namespace std;

class phone
{
	public:
		phone()
		{
			cout<<"�ֻ��Ĺ���"<<endl; 
		}
		~phone()
		{
			cout<<"�ֻ�������"<<endl; 
		}
};
class person 
{
	public:
	static void func()
	{
		cout<<"��̬��Ա�����ĵ���"<<endl;
	}
	int getage()
	{
		int g;
		g=age;
		return g;
	}
	person()
	{
		cout<<"�˵Ĺ���"<<endl; 
	}
	~person()
	{
		cout<<"�˵Ľ⹹"<<endl; 
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



