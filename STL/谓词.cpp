/*谓词
class greatfive
{
public:
	bool operator()(int val)
	{
		return val>5;
	}
}

find_if(v.begin(),v.end(),greatfive())//匿名 

二元谓词
void 


sort(v.begin(),v.end(),mycompare());

class mycompare
{
	public:
	bool operator()(int val1,int val2)
	{
		return val1>val2;
 	}
};


#include<functional>
算术仿函数
negate 一元 取反
plus 二元 加法
minus减法
multiplies乘法
divides除法
modulus取模 

negate<int> n;
int k=n(50);

plus<int> p;
cout<<p(10,20);
 
关系仿函数
greater 大于
not_equal
equal
greater_equal
less
less_equal

vector<int> v;
v.push_back(5);
v.push_back(10);
sort(v.begin(),v.end(),greater<int>()) 

逻辑仿函数
logical_and
logical_or
logica_not<bool>() 
