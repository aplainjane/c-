#include<bits/stdc++.h>
using namespace std;
 
class person
{
	public:
	void showage() const//����ָ�볣�� 
	{
		this->personb=100;
	}	
	int showagea() const//����ָ�볣�� 
	{
		return personb;
	}	
	private:
	int persona=100;
	mutable int personb=10;//�����޸� 
};
//������ֻ�ܵ��ó����� 

int main()
{
	const person opdd;
	opdd.showage();
	cout<<opdd.showagea()<<endl;
	system("pause");
	return 0;
 } 
