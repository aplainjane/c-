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
	cout << "���򣺲²��Ұѱı�ը������������~" << endl;
	cout << "(��1~100������һ������~)" << endl;
	int a = 1, b = 100;
	cin >> ans;
	for (; ans != z;)
	{
		
		if (ans <= a || ans >= b)
		{
			cout << "������Χ���~" << endl;
			cout << "����" << a << "��" << b << "֮������һ������" << endl;
			cin >> ans;
		}
		else
		{
			a = (ans < z ? ans : a);
			b = (ans > z ? ans : b);
			cout << "���Բ��ԣ����²²¿���~" << endl;
			cout << "����" << a << "��" << b << "֮������һ������" << endl;
			cin >> ans;
		}
	}
	cout << "�ۣ����ڳ������أ�\n�G��С��ร��ᱬը�ģ�\n����Ҫ��ը����\n����������~\nboom!";
	system("pause");
	return 0;
}









