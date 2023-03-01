//STL 容器 算法 迭代器 仿函数 适配器（配接器） 空间配置器 
//algorithms
#include<bits/stdc++.h>
using namespace std;
//vector for_each vector<int>::iterator

void print(int n)
{
	cout<<n<<endl;
}

void test01()
{
	vector<int> num;
	num.push_back(10);
	num.push_back(30);
	num.push_back(20);
	num.push_back(40);
	vector<int>::iterator a=num.begin();//起始迭代器 
	vector<int>::iterator b=num.end();//末尾的下一个 
	while(a!=b)
	{
		cout<<*a<<endl;
		a++;
	}
	for(vector<int>::iterator i=num.begin();i!=num.end();i++)
	{
		cout<<*i<<endl;
	}
	for_each(num.begin(),num.end(),print);
}

int main()
{
	test01(); 
	system("pause");
	return 0;
}
