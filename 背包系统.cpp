#include<bits/stdc++.h>
using namespace std;
#define max 6

void  menu()
{
	cout<<"-------------------"<<endl;
	cout<<"----1�����뾫��----"<<endl; 
	cout<<"----2��ѡ��˳��----"<<endl;
	cout<<"----3���Żزֿ�----"<<endl;
	cout<<"----4���鿴����----"<<endl; 
	cout<<"----5����Ϣ�޸�----"<<endl;
	cout<<"----6��ȫ�����----"<<endl;
	cout<<"----0���˳�����----"<<endl;
	cout<<"-------------------"<<endl;
}

struct jl
{
	string name;
	int level;
	int weizhi;
};

struct beibao
{	
	int leng;
	struct jl all[max];
};

void add(beibao *p)
{	
system("cls");
	if(p->leng>=max)
	{	
		cout<<"����������"<<endl;
	}
	if(p->leng<max)
	{
		cout<<"���ֶ����뾫����Ϣ/doge";
		cout<<endl<<"���ƣ�";
		cin>>p->all[p->leng].name;
		cout<<endl<<"�ȼ���";
		cin>>p->all[p->leng].level;
		cout<<endl<<"(������ֵ���ڱ����ھ���������������ǰ����ϳ�����\n��С��1����Ϊ�׷�)\n��սλ��:"; 
		cin>>p->all[p->leng].weizhi;
		if(p->all[p->leng].weizhi<1)
		{
			p->all[p->leng].weizhi=1;
		}
		if(p->all[p->leng].weizhi>=p->leng+1)
		{
			p->all[p->leng].weizhi=p->leng+1;
		}
		else if(p->all[p->leng].weizhi>=1||p->all[p->leng].weizhi<p->leng+1)
		{
			int m=p->all[p->leng].weizhi;
			for(int b=0;b<p->leng;b++)
			{
				if(p->all[b].weizhi==m)
				{
					p->all[b].weizhi=p->leng+1;
				}
			}
		}
		cout<<endl<<"��¼�뾫����Ϣ��"<<endl;
		system("pause"); 
		p->leng+=1;
	}
}

void cheak(beibao *p)
{
	system("cls");
	if(p->leng==0)
	{
		cout<<"���ı����ڿտ���Ҳ��~";
		cout<<endl;
		system("pause"); 
	}
	if(p->leng>0)
	{
		for(int a=0;a<p->leng;a++)
		{
			for(;;)
			{
				int t=1,g=0;
				for(int b=0;b<p->leng;b++)
				{
					if(p->all[b].weizhi==a+t&&p->all[b].weizhi<=p->leng+1)
					{
						cout<<"˳λ��"<<p->all[b].weizhi<<endl;
						cout<<"���ƣ�"<<p->all[b].name<<endl;
						cout<<"�ȼ���"<<p->all[b].level<<endl;
						cout<<endl;
						g=b;
						t=100;
					}
				
				}	
				if(t!=100)
				{
					t+=1;
				}
				if(t==100)
				{
					p->all[g].weizhi=a+1;
					break;
				}
			}
		}
	}
}

void fugai(beibao *p,int j)
{
	//����leng���ƶ�ȡ��λ������ɾ�������ݺ��Ƴ���ȡ�ķ�Χ�������´�����ʱ�ɽ��и��� 
	p->all[j].weizhi=p->all[p->leng].weizhi;
	p->all[j].name=p->all[p->leng].name;
	p->all[j].level=p->all[p->leng].level;
	p->leng-=1;
}

void delet(beibao *q)
{
	cheak(q);
	if(q->leng==0)
	{
		cout<<"������ʲô��û���أ���"<<endl;
		system("pause"); 
		return;
	}
	else
	{
		cout<<"����������Żزֿ�ľ����˳�ţ�"<<endl;
		int ll;
		cin>>ll;
		if(ll>q->leng+1||ll<1)
		{
			system("cls");
			cout<<"�����ڸþ���~";
			cheak(q);	 
		}
		else
		{for(int a=0;a<q->leng;a++)
			{
				if(q->all[a].weizhi==ll)
				{
					fugai(q,a);
					cout<<"ɾ���ɹ�~"<<endl;
					system("pause"); 
					cheak(q);
					cout<<"����������ز˵�"<<endl; 
					system("pause");
				}
			}
		}
		
	}	
}

void replace(beibao *p,int n)
{
	for(int a=0;a<p->leng;a++)
	{
		if(p->all[a].weizhi==n)
		{	
			int jk=0;
			for(;;)
			{
			cout<<endl<<"��˶���Ϣ~"<<endl;
			cout<<"1�����ƣ�"<<p->all[a].name<<endl;
			cout<<"2���ȼ���"<<p->all[a].level<<endl;
			cout<<"3���˳�"<<endl;
			cout<<"������Ҫ�޸ĵ���ֵ���~"<<endl;
			cin>>jk;
			for(;jk!=3&&jk!=1&&jk!=2;)
			{	 
				cout<<"����1��2��3���������ϣ�"<<endl;
				cout<<"������Ҫ�޸ĵ���ֵ���~"<<endl;
				cin>>jk;	 
			}
			if(jk==1) 
			{
				cout<<"�������޸ľ��������~"<<endl;
				cin>>p->all[a].name; 
				cout<<"�޸���ϣ�"; 
			}
			else if(jk==2) 
			{
				cout<<"�������޸ľ���ĵȼ�~"<<endl;
				cin>>p->all[a].level; 
				cout<<"�޸���ϣ�"; 
			}
			else if(jk==3) 
			{
				system("cls");
				cout<<"�����˳�~";
				system("pause");
				break;
			}
			system("cls");
			}
		}
	}
}


int main()
{
	beibao wode;
	wode.leng=0;
	int select=0;
	for(;;) 
	{
		label:system("cls");
		menu();
		cin>>select;
		if(select==0)
		{
			break;
		}
		if(select==1)
		{
			add(&wode);	
		}
		if(select==2)
		{
			cheak(&wode);
			if(wode.leng==1)
			{
				cout<<"��������Ҫ��λ��";
				system("pause");
				goto label;
			}
			cout<<"��ѡ�����뽻��λ�õ���ֻ�����˳λ��"<<endl; 
			int a,b;
			cout<<"�����뾫��1��˳�ţ�";
			cin>>a;
			while(a<1||a>wode.leng+1)
			{
				cout<<"�������ֵ���Ϸ����벻Ҫ�Ҹ�������\n���������룡"<<endl;
				cout<<"�����뾫��1��˳�ţ�";
				cin>>a;
				cout<<endl; 
			}
			cout<<"�����뾫��2��˳�ţ�";
			cin>>b;
			while(b<1||b>wode.leng+1)
			{
				cout<<"�������ֵ���Ϸ����벻Ҫ�Ҹ�������\n���������룡"<<endl;
				cout<<"�����뾫��2��˳�ţ�";
				cin>>b;
				cout<<endl; 
			}
			int p=0;
			for(int k=0;k<wode.leng;k++)
			{
				if(wode.all[k].weizhi==b)
				{
					p=k;
				}			 
			}
			for(int k=0;k<wode.leng;k++)
			{
				if(wode.all[k].weizhi==a)
				{
					wode.all[k].weizhi=b;
				}			 
			}
			wode.all[p].weizhi=a;
			system("cls");
			cout<<"�����ɹ���";
			system("pause");
			cheak(&wode);
			cout<<"�����������";
			system("pause");	 
		}
		if(select==3)
		{
			delet(&wode);	
		}
		if(select==4)
		{
			cheak(&wode);
			cout<<"�����������";
			system("pause"); 
		}
		if(select==5)
		{
			cheak(&wode);
			if(wode.leng==0)
			{
				continue;
			}
			cout<<"�����������޸ĵľ���˳λ��";
			int number;
			cin>>number;
			
			if(number>wode.leng+1||number<1)
			{
				cout<<"����Ҫ�󲻺Ϸ�������\n"<<"���ڷ��ز˵�~";
				system("pause");
			}
			else
			{
				replace(&wode,number);
			}  
		}
		if(select==6)
		{
			cheak(&wode);
			cout<<"��Ҫ�����һ�����ڵĻ���~"<<endl; 
			cout<<"������ա���"<<endl; 
			system("pause");
			wode.leng=0;
			cheak(&wode);
		}
	}
	system("cls");
	cout<<"�����˳�����"<<endl; 
	system("pause");
	return 0;
}
