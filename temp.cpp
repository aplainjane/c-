#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a;
	for (;;)
	{
		system("cls");
		cout << "menu:A(dd) D(elete) S(ort) Q(uit) select one:"
		cin >> a;
		switch(a)
			case A:
				system("cls");
				cout << "数据已添加" << endl;
				break;
			case D:
				system("cls");
				cout << "数据已删除" << endl;
				break;
			case S:
				system("cls");
				cout << "数据已排序" << endl;
				break;
			case Q:
				system("cls");
				cout << "正在退出" << endl;
				goto quitt;
				break;
			default:
				system("cls");
				cout << "错误的指令" << endl;
				break;	
	}
quitt:system("pause");
	return 0;
}