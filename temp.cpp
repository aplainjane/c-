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
				cout << "���������" << endl;
				break;
			case D:
				system("cls");
				cout << "������ɾ��" << endl;
				break;
			case S:
				system("cls");
				cout << "����������" << endl;
				break;
			case Q:
				system("cls");
				cout << "�����˳�" << endl;
				goto quitt;
				break;
			default:
				system("cls");
				cout << "�����ָ��" << endl;
				break;	
	}
quitt:system("pause");
	return 0;
}