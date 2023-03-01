#include<bits/stdc++.h>
using namespace std;

class kk
{
	public:
		int k=10;
};
class gg:virtual public kk
{ 
	public:
		int a=10;
};
class base:virtual public kk
{
	public:
	int a;
	protected:
	int b;
	private:
	int c;
}; 

class son:public/*public、private*/ base,public gg
{
	public:
	int a=1;
};
//不可访问父类中的private 
int main()
{
	son wode;
	wode.base::a=100;
	cout<<wode.a<<endl<<wode.gg::a<<endl<<wode.k;
	system("pause");
	return 0;
}
