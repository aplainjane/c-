#include<bits/stdc++.h>
using namespace std;

class jl
{
	public:
		virtual void showms()=0;
		virtual string getsx()=0;
		int xh;
		string name;
		int sx;
};

/*
金--sx1
木--sx2 
水--sx3
火--sx4
土--sx5
*/ 
class jing:public jl
{
	public:
		jing(int a,string b,int c)
		{
			this->xh=a;
			this->name=b;
			this->sx=c;
		} 
		void showms()
		{
			cout<<"精灵编号："<<this->xh;
			cout<<"\t精灵名称："<<this->name;
			cout<<"\t精灵属性："<<this->getsx()<<endl; 
		}
		string getsx()
		{
			return string("金"); 
		}	
};
class mu:public jl
{
	public:
		mu(int a,string b,int c)
		{
			this->xh=a;
			this->name=b;
			this->sx=c;
		} 
		void showms()
		{
			cout<<"精灵编号："<<this->xh;
			cout<<"\t精灵名称："<<this->name;
			cout<<"\t精灵属性："<<this->getsx()<<endl; 
		}
		string getsx()
		{
			return string("木"); 
		}	
};
class shui:public jl
{
	public:
		shui(int a,string b,int c)
		{
			this->xh=a;
			this->name=b;
			this->sx=c;
		} 
		void showms()
		{
			cout<<"精灵编号："<<this->xh;
			cout<<"\t精灵名称："<<this->name;
			cout<<"\t精灵属性："<<this->getsx()<<endl; 
		}
		string getsx()
		{
			return string("水"); 
		}	
};
class huo:public jl
{
	public:
		huo(int a,string b,int c)
		{
			this->xh=a;
			this->name=b;
			this->sx=c;
		} 
		void showms()
		{
			cout<<"精灵编号："<<this->xh;
			cout<<"\t精灵名称："<<this->name;
			cout<<"\t精灵属性："<<this->getsx()<<endl; 
		}
		string getsx()
		{
			return string("火"); 
		}	
};
class tu:public jl
{
	public:
		tu(int a,string b,int c)
		{
			this->xh=a;
			this->name=b;
			this->sx=c;
		} 
		void showms()
		{
			cout<<"精灵编号："<<this->xh;
			cout<<"\t精灵名称："<<this->name;
			cout<<"\t精灵属性："<<this->getsx()<<endl; 
		}
		string getsx()
		{
			return string("土"); 
		}	
};
//主 
class manager
{
	public:
		manager()
		{
			fstream file("精灵图鉴.txt",ios::in);
			if(!file.is_open())
			{
				system("cls");
				cout<<"文件不存在！"<<endl;
				cout<<"正在初始化中……";
				this->leng=0;
				this->tempjl=NULL;
				this->fileempty=true;
				file.close();
				system("pause");
				return;	
			}
			//判断是否为空 
			char cheak;
			file>>cheak;//输入一个字符 
			if(file.eof()/*到达末尾函数的判断*/)
			{
				system("cls");
				cout<<"文件空空如也~"<<endl;
				cout<<"正在初始化中……"<<endl;
				this->leng=0;
				this->tempjl=NULL;
				this->fileempty=true;
				file.close();
				system("pause");
				return;	 
			}
			int num=this->getnum();
			this->tempjl=new jl*[num];
			this->leng=num;
			this->input();
			cout<<"当前已收录精灵数量为："<<num<<"!"<<endl;
			/*for(int i=0;i<this->leng;i++)
			{
				cout<<tempjl[i]->xh<<" "<<tempjl[i]->name<<" "<<tempjl[i]->sx<<endl;
			}*/
			system("pause"); 
		}
		~manager()
		{
			if(this->tempjl!=NULL)	
			{
				delete[] this->tempjl;
				this->tempjl=NULL;
			}
		}
		void menu()
		{
			system("cls");
			cout<<"-----精灵图鉴-----"<<endl;
			cout<<"--0.退出精灵图鉴--"<<endl;
			cout<<"--1.录入精灵信息--"<<endl;
			cout<<"--2.显示精灵信息--"<<endl; 
			cout<<"--3.删除精灵信息--"<<endl;
			cout<<"--4.修改精灵信息--"<<endl; 
			cout<<"--5.查找精灵信息--"<<endl;
			cout<<"--6.按照序号排序--"<<endl;
			cout<<"--7.清空精灵信息--"<<endl;
			cout<<"------------------"<<endl;
			cout<<endl;
		}
		void clean()
		{
			system("cls");
		}
		void pause()
		{
			system("pause");
		}
		void input();
		void addjl();
		int leng; //当前人数 
		jl ** tempjl;
		void save()
		{
			fstream savet("精灵图鉴.txt",ios::out);
			for(int i=0;i<this->leng;i++)
			{
				savet<<this->tempjl[i]->xh<<" "
					<<this->tempjl[i]->name<<" "
					<<this->tempjl[i]->sx<<" "<<endl;	 
			}
			savet.close();
		}
		bool fileempty;
		int getnum();
		void show(); 
		void deletejl();
		int searchjl(int num);
		void move(int num);
		void change();
		void search();
		void search1();
		void search2();
		void paixu();
		void cleanfile();
		void dayin();
};

void manager::change()
{
	this->clean();
	if(this->fileempty)
	{
		cout<<"您并没有录入精灵信息或信息遗失！"<<endl;
		this->pause();
		return;
	}
	else
	{
		cout<<"请输入您所想要修改的精灵编号："; 
		int kk;
		cin>>kk;
		int pd=this->searchjl(kk);
		if(pd==-10086)
		{
			cout<<"找不到该编号的精灵信息！QAQ"<<endl;
			this->pause();
			return;
		}
		this->clean();
		cout<<"您正在修改编号为："<<kk<<"的精灵信息！"<<endl;
		int xh1;
		string name1;
		int sx1;
		label1:cout<<"该精灵的新编号为：";
		cin>>xh1; 
		for(int i=0;i<leng;i++)
		{
			if(xh1==tempjl[i]->xh)
			{
				cout<<"已经存在该编号的精灵哟~"<<endl;
				system("cls");
				goto label1; 
			}
		}
		label4:cout<<"该精灵的新名称为：";
		cin>>name1;
		for(int a=0;a<leng;a++)
				{
					if(name1==tempjl[a]->name)
					{
						cout<<"已经存在该名称的精灵哟~"<<endl;
						system("pause");
						system("cls");
						goto label4; 
					}
				}
		cout<<"(金--1 木--2 水--3 火--4 土--5)\n该精灵的新属性为：";
		cin>>sx1;
		while(sx1!=1&&sx1!=2&&sx1!=3&&sx1!=4&&sx1!=5)
		{
			this->clean();
			cout<<"你是不是觉得你很幽默？！"<<endl; 
			cout<<"(金--1 木--2 水--3 火--4 土--5)\n给爷输入该精灵的新属性为：";
			cin>>sx1;
		}
		jl *jl=NULL;
		if(sx1==1)
		{
			jl=new jing(xh1,name1,sx1);
		}
		else if(sx1==2)
		{
			jl=new mu(xh1,name1,sx1);
		}
		else if(sx1==3)
		{
			jl=new shui(xh1,name1,sx1);
		}
		else if(sx1==4)
		{
			jl=new huo(xh1,name1,sx1);
		}
		else if(sx1==5)
		{
			jl=new tu(xh1,name1,sx1);
		}
		//delete this->tempjl[this->searchjl(kk)];
		tempjl[this->searchjl(kk)]=jl;
	}
	this->save();
	this->clean();
	cout<<"修改成功~"<<endl;
	this->pause(); 
}

void manager::addjl()
{
	this->clean();
	cout<<"请输入添加的精灵数量:";
	int s=0;
	cin>>s; 
	if(s>0)
	{
		int newsize=this->leng+s;
		jl **newspace=new jl*[newsize];
		if(this->tempjl!=NULL) 
		{
			for(int i=0;i<this->leng;i++)
			{
				newspace[i]=this->tempjl[i];
			}
		}
		for(int i=0;i<s;i++) 
			{
				this->clean();
				int xh1;
				string name1;
				int sx1;
				label2:cout<<"请输入第"<<i+1<<"只精灵的编号：";
				cin>>xh1;
				for(int a=0;a<leng;a++)
				{
					if(xh1==tempjl[a]->xh)
					{
						cout<<"已经存在该编号的精灵哟~"<<endl;
						system("pause");
						system("cls");
						goto label2; 
					}
				}
				label3:cout<<"请输入第"<<i+1<<"只精灵的名称：";
				cin>>name1;
				for(int a=0;a<leng;a++)
				{
					if(name1==tempjl[a]->name)
					{
						cout<<"已经存在该名称的精灵哟~"<<endl;
						system("pause");
						system("cls");
						goto label3; 
					}
				}
				jl*jl=NULL;
				label:cout<<"(金--1 木--2 水--3 火--4 土--5)\n请输入该精灵的属性:";
				cin>>sx1; 
				switch(sx1)
				{
					case 1:
						jl=new jing(xh1,name1,sx1);
						break;
					case 2:
						jl=new mu(xh1,name1,sx1);
						break;
					case 3:
						jl=new shui(xh1,name1,sx1);
						break;
					case 4:
						jl=new huo(xh1,name1,sx1);
						break;
					case 5:
						jl=new tu(xh1,name1,sx1);
						break;
					default:
					{
						cout<<"无效的选择"<<endl;
						goto label;
					}
				}
				newspace[this->leng+i]=jl;
			}
			delete[] this->tempjl;
			this->tempjl=newspace;
			this->leng=newsize;
			this->clean(); 
	}
	else
	{
		cout<<"输入了奇怪的数字呢~嘿嘿……";
	}
	cout<<"成功添加了"<<s<<"只精灵"<<endl;
	this->fileempty=false;
	this->pause();
}

int manager::getnum()
{
	fstream ky("精灵图鉴.txt",ios::in);
	int xh1;
	string name1;
	int sx1;
	int nn=0;
	while(ky>>xh1&&ky>>name1&&ky>>sx1)
	{
		nn++;
	}
	ky.close();
	return nn;
}

void manager::input()
{
	fstream ky("精灵图鉴.txt",ios::in);
	int xh1;
	string name1;
	int sx1;
	int nn=0;		
	while(ky>>xh1&&ky>>name1&&ky>>sx1)
	{
		jl *jl=NULL;
		if(sx1==1)
		{
			jl=new jing(xh1,name1,sx1);
		}
		else if(sx1==2)
		{
			jl=new mu(xh1,name1,sx1);
		}
		else if(sx1==3)
		{
			jl=new shui(xh1,name1,sx1);
		}
		else if(sx1==4)
		{
			jl=new huo(xh1,name1,sx1);
		}
		else if(sx1==5)
		{
			jl=new tu(xh1,name1,sx1);
		}
		tempjl[nn]=jl;
		nn++;
	}	
	ky.close();
}

void manager::deletejl()
{	
	this->clean();
	if(this->fileempty)
	{
		cout<<"您并没有录入精灵信息或信息遗失！"<<endl;
	}
	else
	{	
		cout<<"请输入想要删除的精灵序号:";
		int g;
		cin>>g;
		int ghs=this->searchjl(g);
		if(ghs==-10086)
		{
			cout<<"找不到该精灵~"<<endl;
			this->pause();
			return; 
		}
		this->move(ghs);
		this->save();
		cout<<"删除成功！"<<endl;
	}
	if(this->leng==0)
	{
		this->fileempty=true;
	}
	this->pause();
}

void manager::move(int num)
{
	for(int i=num;i<leng-1;i++)
	{
		this->tempjl[i]=this->tempjl[i+1];
	}
	this->leng-=1;
}

int manager::searchjl(int num)
{ 
	int xh1=-10086;
	for(int i=0;i<this->leng;i++)
	{
		if(this->tempjl[i]->xh==num)
		{
		xh1=i;
		break;
		}
	}
	return xh1;
}

void manager::show()
{
	this->clean();
	if(this->fileempty)
	{
		cout<<"您并没有录入精灵信息或信息遗失！"<<endl; 
	}
	else
	{
		for(int i=0;i<this->leng;i++)
		{
			this->tempjl[i]->showms();
		}
	}
	this->pause();
}

void manager::search()
{
	this->clean();
	if(this->fileempty)
	{
		cout<<"您并没有录入精灵信息或信息遗失！"<<endl; 
		this->pause();
	}
	else
	{
		this->clean();
		cout<<"（1.按编号查找；2.按名称查找）\n请输入您所想要使用的查找方式：";
		int c=0;
		cin>>c;
		while(c!=1&&c!=2)
		{
			cout<<"没有这种方式啦！=.="<<endl;
			this->pause();
			this->clean();
			cout<<"请重新输入您所想要使用的方式：";
			cin>>c; 
		}
		if(c==1)
		{
			this->search1();
			return;
		}
		if(c==2)
		{
			this->search2();
			return;
		}
	}
}

void manager::search1()
{
	int kk;
	cout<<"请输入该精灵的编号：";
	cin>>kk;
	int gg=this->searchjl(kk);
	if(gg==-10086)
	{
		this->clean();
		cout<<"诶！好像不存在该精灵信息喔！"<<endl;
		this->pause();
	}
	else
	{
		this->clean();
		cout<<"该精灵信息为："<<endl;
		this->tempjl[gg]->showms();
		this->pause();
	}
}

void manager::search2()
{
	string kk;
	cout<<"请输入该精灵的名称：";
	cin>>kk;
	int gg=0;
	int xh1=-10086;
	for(int i=0;i<this->leng;i++)
	{
		if(this->tempjl[i]->name==kk)
		{
			xh1=i;
			break;
		}
	}
	gg=xh1;
	if(gg==-10086)
	{
		this->clean();
		cout<<"诶！好像不存在该精灵信息喔！"<<endl;
		this->pause();	 
	}
	else
	{
		this->clean();
		cout<<"该精灵信息为："<<endl;
		this->tempjl[gg]->showms();
		this->pause();
	}
}

void manager::paixu()
{
	this->clean();
	if(this->fileempty)
	{
		cout<<"您并没有录入精灵信息或信息遗失！"<<endl;
		this->pause();
		return ;
	}
	cout<<"您是想按哪种排序方式进行整理呢？"<<endl;
	cout<<"1.升序 2.降序"<<endl;
	int paixu=0;
	labell :cin>>paixu;
	if(paixu!=1&&paixu!=2)
	{
		cout<<"您想要乱序排列吗！tmd请重新输入！"<<endl; 
		goto labell;
	}
	else if(paixu==1)
	{
		for(int c=0;c<this->leng;c++)
		{
			for(int d=1;c+d<this->leng;d++)
			{
				jl *temp=this->tempjl[c];
				if(tempjl[c+d]->xh<temp->xh)
				{
					tempjl[c]=tempjl[c+d];
					tempjl[c+d]=temp;
				}
			}
		}
	}
	else if(paixu==2)
	{
		for(int c=0;c<this->leng;c++)
		{
			for(int d=1;c+d<this->leng;d++)
			{
				jl *temp=this->tempjl[c];
				if(tempjl[c+d]->xh>temp->xh)
				{
					tempjl[c]=tempjl[c+d];
					tempjl[c+d]=temp;
				}
			}
		}
	}
	this->clean();
	this->save();
	cout<<"排序成功啦~嘿嘿~"<<endl;
	this->pause(); 
}

void manager::cleanfile()
{
	this->clean();
	if(this->fileempty)
	{
		cout<<"本来就是空的哟~"<<endl;
		this->pause(); 
		return;
	}
	label55:cout<<"是否真的要清空文件！！！"<<endl;
	cout<<"1.是 2.否"<<endl;
	int hh;
	cin>>hh;
	if(hh!=1&&hh!=2)
	{
		cout<<"我知道你在摇摆不定~再给你一次机会~"<<endl;
		this->pause();
		this->clean();
		goto label55;	
	} 
	if(hh==2)
	{
		this->clean();
		cout<<"好的，马上清空~"<<endl;
		this->pause();
		cout<<"开玩笑的啦~正在返回主菜单……"<<endl;
		this->pause();
		return;
	}
	if(hh==1)
	{
		this->clean();
		cout<<"好的，马上清空~"<<endl;
		fstream ky("精灵图鉴.txt",ios::trunc);
		ky.close();
		if(this->tempjl!=NULL)
		{
			for(int i=0;i<this->leng;i++)
			{
				delete this->tempjl[i];
			}
		}
		this->leng=0;
		delete[] this->tempjl;
		this->tempjl=NULL;
		this->fileempty=true;
	}
	this->clean();
	cout<<"您的精灵图鉴已经什么都没有了~"<<endl;
	this->pause();
}

void manager::dayin()
{
	this->clean();
	cout<<"啊哈！触发彩蛋！请到文件所在位置查看~"<<endl; 
	this->pause();
	fstream ky("彩蛋~.txt",ios::out);
	ky<<"你真的是个小聪明~"; 
	ky.close();
}

int main()
{
	manager wode;
	system("cls");
	wode.menu();
	int choice=0;
	cout<<"请输入您的选择"<<endl;
	cin>>choice;
	for(;choice!=0;)
	{
		if(choice==1)
		{
			wode.clean();
			wode.addjl();
			wode.save();
		}
		else if(choice==2)
		{
			wode.show();
		}
		else if(choice==3)
		{
			wode.deletejl();
		}
		else if(choice==4)
		{
			wode.change();
		}
		else if(choice==5)
		{
			wode.search();
		}
		else if(choice==6)
		{
			wode.paixu();
		}		
		else if(choice==7)
		{
			wode.cleanfile();
		}
		else if(choice==666)
		{
			wode.dayin();
		}
		else
		{
			wode.clean();
			cout<<"前面的区域以后再来探索吧~"<<endl; 
			wode.pause();
		}
		wode.menu();
		cout<<"请输入您的选择"<<endl;
		cin>>choice;
	}
	system("cls"); 
	cout<<"正在退出……"<<endl; 
	system("pause");
	return 0;
}
