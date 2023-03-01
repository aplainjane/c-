#include<bits/stdc++.h>
using namespace std;

class person
{
	public:
		person(int name,int age)
		{
			m_name=name;
			m_age=age;
		}
		string m_name;
		int m_age;
};

void test01()
{
	vector<person> v;
	person p1(1,1);
	person p2(2,2);
	person p3(3,3);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	for(vector<person>::iterator i=v.begin();i!=v.end();i++) 
	{
		cout<<"姓名:"<<(*i).m_name;
		cout<<"年龄:"<<i->m_age<<"\n"; 
	}
}

void test02()
{
	vector<person*> v;
	person p1(1,1);
	person p2(2,2);
	person p3(3,3);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	for(vector<person*>::iterator i=v.begin();i!=v.end();i++) 
	{
		cout<<"姓名:"<<(*(*i)).m_name;
		cout<<"年龄:"<<(*i)->m_age<<"\n"; 
	}
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
