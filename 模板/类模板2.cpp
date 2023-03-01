#include<bits/stdc++.h>
using namespace std;

template<class nametype,class agetype>
class person
{
public:
	person(nametype aname,agetype aage)
	{
		this->name=aname;
		this->age=aage;	
	}	
	nametype name;
	agetype age;
};

template<class t1,class t2>
void test02(person<t1,t2>&p)
{
	p.name="hhhh";
}

template<class T>
void test03(T &p)
{
	p.name="hhhhhh";
}

void test()
{
	person<string,int>k("юовс",999);
	test03(k); 
	cout<<k.name<<" "<<k.age<<endl; 
}

class son:public person<int,int>
{

};

int main()
{
	test();
	son j;
	cout<<j.name<<" "<<j.age;
	system("pause");
	return 0;
}
