//STL ���� �㷨 ������ �º��� ��������������� �ռ������� 
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
	vector<int>::iterator a=num.begin();//��ʼ������ 
	vector<int>::iterator b=num.end();//ĩβ����һ�� 
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
