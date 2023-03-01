#include<bits/stdc++.h>
using namespace std;
int z;
int ans;
void srand(unsigned seed);
int rand(void);


int main()
{
	srand(time(NULL));
	z = rand() % 100 + 1;
	cout << "可莉：猜猜我把蹦蹦炸弹埋在哪里啦~" << endl;
	cout << "(在1~100间输入一个数字~)" << endl;
	int a = 1, b = 100;
	cin >> ans;
	for (; ans != z;)
	{
		
		if (ans <= a || ans >= b)
		{
			cout << "超出范围了嗷~" << endl;
			cout << "请在" << a << "到" << b << "之间输入一个数字" << endl;
			cin >> ans;
		}
		else
		{
			a = (ans < z ? ans : a);
			b = (ans > z ? ans : b);
			cout << "不对不对！重新猜猜看啦~" << endl;
			cout << "请在" << a << "到" << b << "之间输入一个数字" << endl;
			cin >> ans;
		}
	}
	cout << "哇！你挖出来了呢！\n欸，小心喔，会爆炸的！\n啊！要爆炸啦！\n可莉先溜啦~\nboom!";
	system("pause");
	return 0;
}









