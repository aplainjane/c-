#include<bits/stdc++.h>
using namespace std;

class person 
{
	public:
		
		person(const person &p)
		{
			age=p.age;
			height=new int(p.height);//��� 
			cout<<"����~����"<<endl;
		}
		person()
		{
			cout<<"����~�޲�"<<endl; 
		}
		person(int a,int b):age(a)
		{
			age=a;
			height=new int(b);//new int()����һ����ַ 
			cout<<"����~�в�"<<endl; 
		}
		~person()
		{
			cout<<"������~"<<endl; 
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
	person p1(10,160);//person p1=person (10);�������� 
	//���������������о��������̱������� 
	person p2(p1);//person p2=person (p3); 
	//��ʽ:peson p4=10;person p5=p4; 
} 

int main()
{	
	person pp;
	test01(pp);	
	system("pause");
	return 0;
}



