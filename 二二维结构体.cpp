#include<bits/stdc++.h>
using namespace std;

struct people
{
	string name;
	int score;
	int money;
}; 

int main()
{
	struct people erwei[10][10];
	for(int a=0;a<10;a++)
	{
		for(int k=0;k<10;k++)
		{
			cin>>erwei[a][k].name;
			cin>>erwei[a][k].score;
			cin>>erwei[a][k].money;
		}
	}
	return 0;
}
