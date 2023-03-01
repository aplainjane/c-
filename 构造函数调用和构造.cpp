#include<bits/stdc++.h>
using namespace std;

class person 
{
	public:
		
		person(const person &p)
		{
			age=p.age;
			height=new int(p.height);//深拷贝 
			cout<<"调用~拷贝"<<endl;
		}
		person()
		{
			cout<<"调用~无参"<<endl; 
		}
		person(int a,int b):age(a)
		{
			age=a;
			height=new int(b);//new int()返回一个地址 
			cout<<"调用~有参"<<endl; 
		}
		~person()
		{
			cout<<"析构了~"<<endl; 
			if(height!=NULL)
			{
				delete height;
				height=NULL;
			}
		} 
		
	private:
		int age;
		int *height;
};

void test01(person &p)
{
	person g;
	person p1(10,160);//person p1=person (10);匿名对象 
	//匿名对象在所在行经过后，立刻被析构； 
	person p2(p1);//person p2=person (p3); 
	//隐式:peson p4=10;person p5=p4; 
} 

int main()
{	
	person pp;
	test01(pp);	
	system("pause");
	return 0;
}



