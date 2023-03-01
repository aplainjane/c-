#include<bits/stdc++.h>
using namespace std;
 
class person
{
	public:
	void showage() const//常量指针常量 
	{
		this->personb=100;
	}	
	int showagea() const//常量指针常量 
	{
		return personb;
	}	
	private:
	int persona=100;
	mutable int personb=10;//允许修改 
};
//常对象只能调用常函数 

int main()
{
	const person opdd;
	opdd.showage();
	cout<<opdd.showagea()<<endl;
	system("pause");
	return 0;
 } 
