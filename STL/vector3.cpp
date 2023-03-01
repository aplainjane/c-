#include<bits/stdc++.h>
using namespace std;

void test01()
{
	vector<vector<int> > v;
	vector<int> v1;
	vector<int> v2;
	for(int i=0;i<2;i++)
	{
		v1.push_back(i);
	}
	for(int i=0;i<4;i++)
	{
		v2.push_back(i);
	}
	v.push_back(v1);
	v.push_back(v2);
	for(vector<vector<int> >::iterator i=v.begin();i!=v.end();i++)
	{
		for(vector<int>::iterator a=(*i).begin();a!=(*i).end();a++)
		{
			cout<<*a<<" ";	
		}
		cout<<endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;	
} 
