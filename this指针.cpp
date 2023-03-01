#include<bits/stdc++.h>
using namespace std;

class person 
{
	public:
	person(int age)
	{
		this->age=age; //this指针指向成员变量 
	}
	int getage()
	{
		return age;
	}	
	person &/*此处采用引用 使return的值的地址也为本身*/addage(person &p)
	{
		this->age+=p.age;//(两人的age是同一个全局变量)
		cout<<age<<endl;
		return *this;//this指向p的指针，而*this就是本体。 
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
	gg.addage(pp).addage(pp).addage(pp);//(链式追加) 
	test02(gg);
	system("pause");
	return 0;
}

//*的意思为调用本体
//&的意思为取址 本质均为引用 


