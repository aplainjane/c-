#include<bits/stdc++.h>
using namespace std;
#define max 6

void  menu()
{
	cout<<"-------------------"<<endl;
	cout<<"----1、加入精灵----"<<endl; 
	cout<<"----2、选择顺序----"<<endl;
	cout<<"----3、放回仓库----"<<endl;
	cout<<"----4、查看精灵----"<<endl; 
	cout<<"----5、信息修改----"<<endl;
	cout<<"----6、全部入库----"<<endl;
	cout<<"----0、退出背包----"<<endl;
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
		cout<<"背包已满！"<<endl;
	}
	if(p->leng<max)
	{
		cout<<"清手动输入精灵信息/doge";
		cout<<endl<<"名称：";
		cin>>p->all[p->leng].name;
		cout<<endl<<"等级：";
		cin>>p->all[p->leng].level;
		cout<<endl<<"(若输入值大于背包内精灵数量将视作当前最后上场精灵\n若小于1则视为首发)\n出战位置:"; 
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
		cout<<endl<<"已录入精灵信息！"<<endl;
		system("pause"); 
		p->leng+=1;
	}
}

void cheak(beibao *p)
{
	system("cls");
	if(p->leng==0)
	{
		cout<<"您的背包内空空如也呢~";
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
						cout<<"顺位："<<p->all[b].weizhi<<endl;
						cout<<"名称："<<p->all[b].name<<endl;
						cout<<"等级："<<p->all[b].level<<endl;
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
	//利用leng限制读取的位数，将删除的数据后移出读取的范围，并在下次输入时可进行覆盖 
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
		cout<<"您好像什么都没有呢？！"<<endl;
		system("pause"); 
		return;
	}
	else
	{
		cout<<"请输入您想放回仓库的精灵的顺号："<<endl;
		int ll;
		cin>>ll;
		if(ll>q->leng+1||ll<1)
		{
			system("cls");
			cout<<"不存在该精灵~";
			cheak(q);	 
		}
		else
		{for(int a=0;a<q->leng;a++)
			{
				if(q->all[a].weizhi==ll)
				{
					fugai(q,a);
					cout<<"删除成功~"<<endl;
					system("pause"); 
					cheak(q);
					cout<<"按任意键返回菜单"<<endl; 
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
			cout<<endl<<"请核对信息~"<<endl;
			cout<<"1、名称："<<p->all[a].name<<endl;
			cout<<"2、等级："<<p->all[a].level<<endl;
			cout<<"3、退出"<<endl;
			cout<<"请输入要修改的数值编号~"<<endl;
			cin>>jk;
			for(;jk!=3&&jk!=1&&jk!=2;)
			{	 
				cout<<"请在1、2和3中做出决断！"<<endl;
				cout<<"请输入要修改的数值编号~"<<endl;
				cin>>jk;	 
			}
			if(jk==1) 
			{
				cout<<"您正在修改精灵的名称~"<<endl;
				cin>>p->all[a].name; 
				cout<<"修改完毕！"; 
			}
			else if(jk==2) 
			{
				cout<<"您正在修改精灵的等级~"<<endl;
				cin>>p->all[a].level; 
				cout<<"修改完毕！"; 
			}
			else if(jk==3) 
			{
				system("cls");
				cout<<"正在退出~";
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
				cout<<"您并不需要换位！";
				system("pause");
				goto label;
			}
			cout<<"请选择你想交换位置的两只精灵的顺位号"<<endl; 
			int a,b;
			cout<<"请输入精灵1的顺号：";
			cin>>a;
			while(a<1||a>wode.leng+1)
			{
				cout<<"您输入的值不合法！请不要乱搞了啦！\n请重新输入！"<<endl;
				cout<<"请输入精灵1的顺号：";
				cin>>a;
				cout<<endl; 
			}
			cout<<"请输入精灵2的顺号：";
			cin>>b;
			while(b<1||b>wode.leng+1)
			{
				cout<<"您输入的值不合法！请不要乱搞了啦！\n请重新输入！"<<endl;
				cout<<"请输入精灵2的顺号：";
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
			cout<<"交换成功！";
			system("pause");
			cheak(&wode);
			cout<<"按任意键返回";
			system("pause");	 
		}
		if(select==3)
		{
			delet(&wode);	
		}
		if(select==4)
		{
			cheak(&wode);
			cout<<"按任意键返回";
			system("pause"); 
		}
		if(select==5)
		{
			cheak(&wode);
			if(wode.leng==0)
			{
				continue;
			}
			cout<<"请输入您想修改的精灵顺位：";
			int number;
			cin>>number;
			
			if(number>wode.leng+1||number<1)
			{
				cout<<"您的要求不合法了啦！\n"<<"正在返回菜单~";
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
			cout<<"不要妄想我会给你后悔的机会~"<<endl; 
			cout<<"正在清空……"<<endl; 
			system("pause");
			wode.leng=0;
			cheak(&wode);
		}
	}
	system("cls");
	cout<<"正在退出……"<<endl; 
	system("pause");
	return 0;
}
