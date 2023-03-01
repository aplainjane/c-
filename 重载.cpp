#include<bits/stdc++.h>
using namespace std; 

class person
{
	friend ostream &operator<<(ostream &out,person &p);
	public:
		int a=1;
		int b=1;
	person operator+(person &p2)
	{
		person temp;
		temp.a=this->a+p2.a;
		temp.b=this->b+p2.b;
		return temp;
	}
	person operator+(int a)
	{
		person temp;
		temp.a=this->a+a;
		return temp;
	}
	person &operator++()
	{
		this->a++;
		return *this;
	}
	person &operator++(int)//int 代表占位参数，用于区分前置后置 
	{
		person mm=*this;
		this->a++;
		return mm;
	}
	void operator()(int a)
	{
		cout<<a<<endl;
	}
	private:
		int c=10;
		int d=55;
};
/*person operator+(person &p1,person &p2)
{
	person temp;
	temp.a=p1.a+p2.a;
	temp.b=p1.b+p2.b;
	return temp;
}*/

ostream &operator<<(ostream &cout,person &p)
{
	cout<<p.a<<" "<<p.b<<" "<<p.c<<" "<<p.d; 
	return cout;
}


int main()
{
	person o1;
	person o2;
	person p3=o1+o2;
	person p4=o1+10;
	cout<<p3.a<<endl<<p3.b<<endl;
	cout<<p4.a<<endl<<
	p4.b<<endl;
	cout<<++(++p4)<<endl;
	cout<<p4++<<endl;
	person()(10);
	system("pause");
	return 0;
}
