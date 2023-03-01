#include<bits/stdc++.h>
using namespace std;

class player
{
	public:
		player(string name,int score)
		{
			this->m_name=name;
			this->m_score=score;
		}
		string m_name;
		int m_score;
}; 

void creatplayer(vector<player>&k)
{
	string nameseed="ABCDE";
	for(int i=0;i<5;i++)
	{
		string name="选手";
		name+=nameseed[i]; 
		int score=0;
		player p(name,score);
		k.push_back(p);
	}
}

void setscore(vector<player>&k)
{
	for(int i=0;i<k.size();i++)
	{
		deque<int> d;
		for(int a=0;a<10;a++)
		{
			int score=rand()%41+60;//60~100
			d.push_back(score);
		}
		cout<<k[i].m_name<<"得分情况：\n"; 
		for(int b=0;b<d.size();b++)
		{
			cout<<d[b]<<" ";
		}
		cout<<endl;
		sort(d.begin(),d.end());
		{
			d.pop_front();
			d.pop_back();
		}
		int sum=0;
		for(int b=0;b<d.size();b++)
		{
			sum+=d[b];
		}
		k[i].m_score=sum/d.size();
		cout<<"去除最高分最低分后平均分：";
		cout<<sum/8<<endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	vector<player> v;
	creatplayer(v);
	setscore(v);
	system("pause");
	return 0;
}
