#include<bits/stdc++.h>
using namespace std;

int *woc()
{
	int *p=new int(10);//new int[10]---����һ�������Ǹ�Ԫ�ص����飬�ڶ��� 
	return p;
}

int main()
{
	int a=10,b=5;
	int *p=woc();
	delete p;//����λ���ͷ�   ������ͷ�---delete[] p; 
	//�����ٴη��ʸ�λ�� 
	swap(a,b);
	return 0;
}
//��������  �������� &����=ԭ���� 

//���ཻ�� ����ָ��
void swap(int &a,int &b) 
{
	int temp=a;
	a=b;
	b=temp;
}
//��̬���� static int a;���Ʒ���ȫ�ֱ��� 
