#include<bits/stdc++.h>
using namespace std;

class person 
{
	public:
	person(int age)
	{
		this->age=age; //thisָ��ָ���Ա���� 
	}
	int getage()
	{
		return age;
	}	
	person &/*�˴��������� ʹreturn��ֵ�ĵ�ַҲΪ����*/addage(person &p)
	{
		this->age+=p.age;//(���˵�age��ͬһ��ȫ�ֱ���)
		cout<<age<<endl;
		return *this;//thisָ��p��ָ�룬��*this���Ǳ��塣 
	}	
	private:
		static int age;
		int *height;
};

int person::age=100;

void test01(person &p)
{
	cout<<p.getage()<<endl; 
} 

void test02(person &p)
{
	cout<<p.getage()<<endl;
}

int main()
{	
	person pp(18);
	test01(pp);	
	person gg(18);
	gg.addage(pp).addage(pp).addage(pp);//(��ʽ׷��) 
	test02(gg);
	system("pause");
	return 0;
}

//*����˼Ϊ���ñ���
//&����˼Ϊȡַ ���ʾ�Ϊ���� 


