#include<bits/stdc++.h>
using namespace std;         

class ren
{
	public:
		int level;
		char sex[100];	
};

void test01()
{
	fstream nice("ren.txt",ios::out|ios::binary);
	ren p={100,"��"};
	nice.write((const char *)&p,sizeof(ren));
	nice.close();	
}

void test02()
{
	fstream nice("ren.txt",ios::in|ios::binary);
	if(!nice.is_open())
	{
		cout<<"�ļ���ʧ��"<<endl;
		return; 
	}
	ren p;
	nice.read((char *)&p,sizeof(ren));
	nice.close();	
	cout<<p.level<<" "<<p.sex<<endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
