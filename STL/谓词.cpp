/*ν��
class greatfive
{
public:
	bool operator()(int val)
	{
		return val>5;
	}
}

find_if(v.begin(),v.end(),greatfive())//���� 

��Ԫν��
void 


sort(v.begin(),v.end(),mycompare());

class mycompare
{
	public:
	bool operator()(int val1,int val2)
	{
		return val1>val2;
 	}
};


#include<functional>
�����º���
negate һԪ ȡ��
plus ��Ԫ �ӷ�
minus����
multiplies�˷�
divides����
modulusȡģ 

negate<int> n;
int k=n(50);

plus<int> p;
cout<<p(10,20);
 
��ϵ�º���
greater ����
not_equal
equal
greater_equal
less
less_equal

vector<int> v;
v.push_back(5);
v.push_back(10);
sort(v.begin(),v.end(),greater<int>()) 

�߼��º���
logical_and
logical_or
logica_not<bool>() 
