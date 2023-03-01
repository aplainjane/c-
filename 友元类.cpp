#include<bits/stdc++.h>
using namespace std;

class building;

class haojiyou
{
public:
	void visit();
	void visit2();
	haojiyou();
private:
	building* fanwen;
};



class building
{
	friend void haojiyou::visit2();
public:
	int keting = 1;
private:
	int woshi = 0;
};

void test01()
{
	haojiyou li;
	li.visit();
	li.visit2();
}
void haojiyou::visit()
{
	cout << fanwen->keting << endl;
}
void haojiyou::visit2()
{
	cout << fanwen->woshi << endl;
}
haojiyou::haojiyou()
{
	fanwen = new building;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
