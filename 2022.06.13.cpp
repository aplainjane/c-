#include<bits/stdc++.h>
using namespace std;

int main()
{
	int score;
	cout << "请输入您的选择" << endl;
	cout << "1.增加伤害\n2.增加防御\n3.增加法力值";
	cin >> score;
	switch (score)
	{
		case score = 1:
		
			cout << "敌人的伤害增加了";
			break;
		
		case score = 2:
		
			cout << "敌人的防御增加了";
			break;
		
		case score = 3:
		
			cout << "敌人的法力值增加了";
			break;
		
		default:
		
			cout << "无效的选择\n您的属性没有任何变化";
			break;	
		
		system("pause");
		return 0;
	}
}
