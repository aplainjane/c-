#include<bits/stdc++.h>
using namespace std;

class jl
{
	public:
		virtual void speak()
		{
			cout<<"bb"<<endl; 
		}
};

class pika:public jl
{
	void speak()
	{
		cout<<"pikapika"<<endl;
	}
};

class kaka:public jl
{
	void speak()
	{
		cout<<"kaka"<<endl;
	}
};

void dospeak(jl &p)
{
	p.speak();
}
//��ַ��� 
//����������˵�����Ǿ͵���� 
void test()
{
	pika wode;
	kaka wodee;
	dospeak(wode);
	dospeak(wodee);
}

int main()
{
	test();
	system("pause");
	return 0;
}
