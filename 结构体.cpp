#include<bits/stdc++.h>
using namespace std;

struct Player
{
	string name;
	int score;
	int time;
}; 

struct all
{
	int name;
	int score;
	int time;
	struct Player h;
};

int main()
{
	all yi;
	yi.h.time=10;
	struct Player d1;
	struct Player *p=&d1;
	cin>>d1.name;
	cin>>d1.score;
	cin>>d1.time;
	cout<<"name:"<<p->name<<"score:"<<(*p).score<<"time"<<d1.time<<endl;
	system("pause");
	return 0;
}

