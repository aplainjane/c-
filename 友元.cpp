#include<bits/stdc++.h>
using namespace std;
 
class person
{
	friend void keyima(person *p);
	public:
		person()
		{
			keting=1;
			woshi=0;
		}
		void change()
		{
			this->woshi=1;
		}
		int getwoshi()
		{
			return woshi;
		}
		int getketing()
		{
			return keting;
		}
		int keting;
	private:
		int woshi;
};

int ren=0;
void keyima(person *p)
{
	p->woshi=1;
}

int main()
{
	person wo;
	cout<<wo.getketing()<<endl;
	cout<<wo.getwoshi()<<endl;
	keyima(&wo);
	cout<<wo.getketing()<<endl;
	cout<<wo.getwoshi()<<endl;
	system("pause");
	return 0;	
}
