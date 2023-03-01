#include<bits/stdc++.h>
using namespace std;

class worker
{
	public:
		string m_name;
		int m_salary; 
};

void createworker(vector<worker>&a)
{
	string nameseed="ABCDEFGHIJ";
	for(int i=0;i<10;i++)
	{
		worker wo;
		wo.m_name="员工";
		wo.m_name+=nameseed[i];
		wo.m_salary=rand()%10001+10000;
		a.push_back(wo);
	}
	
}

void setgroup(vector<worker>&a,multimap<int,worker>&b)
{
	for(vector<worker>::iterator it=a.begin();it!=a.end();it++)
	{
		int wid=rand()%3;
		b.insert(make_pair(wid,*it)); 
	}
}

void showworker(multimap<int,worker>&m)
{
	cout<<"策划部门："<<endl;
	multimap<int,worker>::iterator pos1=m.find(0);
	multimap<int,worker>::iterator pos2=m.find(1);
	for(;pos1!=pos2;pos1++)
	{
		cout<<"姓名："<<pos1->second.m_name<<" 工资："<<pos1->second.m_salary<<endl;		
	}
	cout<<"美术部门："<<endl;
	multimap<int,worker>::iterator pos3=m.find(2);
	for(;pos2!=pos3;pos2++)
	{
		cout<<"姓名："<<pos2->second.m_name<<" 工资："<<pos2->second.m_salary<<endl;		
	}
	cout<<"技术部门："<<endl;
	multimap<int,worker>::iterator pos4=m.end();
	for(;pos3!=pos4;pos3++)
	{
		cout<<"姓名："<<pos3->second.m_name<<" 工资："<<pos3->second.m_salary<<endl;		
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	vector<worker> vw;
	createworker(vw);
	multimap<int,worker> mw;
	setgroup(vw,mw);
	showworker(mw);
	system("pause");
	return 0;
}
