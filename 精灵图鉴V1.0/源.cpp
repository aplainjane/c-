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
��--sx1
ľ--sx2 
ˮ--sx3
��--sx4
��--sx5
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
			cout<<"�����ţ�"<<this->xh;
			cout<<"\t�������ƣ�"<<this->name;
			cout<<"\t�������ԣ�"<<this->getsx()<<endl; 
		}
		string getsx()
		{
			return string("��"); 
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
			cout<<"�����ţ�"<<this->xh;
			cout<<"\t�������ƣ�"<<this->name;
			cout<<"\t�������ԣ�"<<this->getsx()<<endl; 
		}
		string getsx()
		{
			return string("ľ"); 
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
			cout<<"�����ţ�"<<this->xh;
			cout<<"\t�������ƣ�"<<this->name;
			cout<<"\t�������ԣ�"<<this->getsx()<<endl; 
		}
		string getsx()
		{
			return string("ˮ"); 
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
			cout<<"�����ţ�"<<this->xh;
			cout<<"\t�������ƣ�"<<this->name;
			cout<<"\t�������ԣ�"<<this->getsx()<<endl; 
		}
		string getsx()
		{
			return string("��"); 
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
			cout<<"�����ţ�"<<this->xh;
			cout<<"\t�������ƣ�"<<this->name;
			cout<<"\t�������ԣ�"<<this->getsx()<<endl; 
		}
		string getsx()
		{
			return string("��"); 
		}	
};
//�� 
class manager
{
	public:
		manager()
		{
			fstream file("����ͼ��.txt",ios::in);
			if(!file.is_open())
			{
				system("cls");
				cout<<"�ļ������ڣ�"<<endl;
				cout<<"���ڳ�ʼ���С���";
				this->leng=0;
				this->tempjl=NULL;
				this->fileempty=true;
				file.close();
				system("pause");
				return;	
			}
			//�ж��Ƿ�Ϊ�� 
			char cheak;
			file>>cheak;//����һ���ַ� 
			if(file.eof()/*����ĩβ�������ж�*/)
			{
				system("cls");
				cout<<"�ļ��տ���Ҳ~"<<endl;
				cout<<"���ڳ�ʼ���С���"<<endl;
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
			cout<<"��ǰ����¼��������Ϊ��"<<num<<"!"<<endl;
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
			cout<<"-----����ͼ��-----"<<endl;
			cout<<"--0.�˳�����ͼ��--"<<endl;
			cout<<"--1.¼�뾫����Ϣ--"<<endl;
			cout<<"--2.��ʾ������Ϣ--"<<endl; 
			cout<<"--3.ɾ��������Ϣ--"<<endl;
			cout<<"--4.�޸ľ�����Ϣ--"<<endl; 
			cout<<"--5.���Ҿ�����Ϣ--"<<endl;
			cout<<"--6.�����������--"<<endl;
			cout<<"--7.��վ�����Ϣ--"<<endl;
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
		int leng; //��ǰ���� 
		jl ** tempjl;
		void save()
		{
			fstream savet("����ͼ��.txt",ios::out);
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
		cout<<"����û��¼�뾫����Ϣ����Ϣ��ʧ��"<<endl;
		this->pause();
		return;
	}
	else
	{
		cout<<"������������Ҫ�޸ĵľ����ţ�"; 
		int kk;
		cin>>kk;
		int pd=this->searchjl(kk);
		if(pd==-10086)
		{
			cout<<"�Ҳ����ñ�ŵľ�����Ϣ��QAQ"<<endl;
			this->pause();
			return;
		}
		this->clean();
		cout<<"�������޸ı��Ϊ��"<<kk<<"�ľ�����Ϣ��"<<endl;
		int xh1;
		string name1;
		int sx1;
		label1:cout<<"�þ�����±��Ϊ��";
		cin>>xh1; 
		for(int i=0;i<leng;i++)
		{
			if(xh1==tempjl[i]->xh)
			{
				cout<<"�Ѿ����ڸñ�ŵľ���Ӵ~"<<endl;
				system("cls");
				goto label1; 
			}
		}
		label4:cout<<"�þ����������Ϊ��";
		cin>>name1;
		for(int a=0;a<leng;a++)
				{
					if(name1==tempjl[a]->name)
					{
						cout<<"�Ѿ����ڸ����Ƶľ���Ӵ~"<<endl;
						system("pause");
						system("cls");
						goto label4; 
					}
				}
		cout<<"(��--1 ľ--2 ˮ--3 ��--4 ��--5)\n�þ����������Ϊ��";
		cin>>sx1;
		while(sx1!=1&&sx1!=2&&sx1!=3&&sx1!=4&&sx1!=5)
		{
			this->clean();
			cout<<"���ǲ��Ǿ��������Ĭ����"<<endl; 
			cout<<"(��--1 ľ--2 ˮ--3 ��--4 ��--5)\n��ү����þ����������Ϊ��";
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
	cout<<"�޸ĳɹ�~"<<endl;
	this->pause(); 
}

void manager::addjl()
{
	this->clean();
	cout<<"��������ӵľ�������:";
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
				label2:cout<<"�������"<<i+1<<"ֻ����ı�ţ�";
				cin>>xh1;
				for(int a=0;a<leng;a++)
				{
					if(xh1==tempjl[a]->xh)
					{
						cout<<"�Ѿ����ڸñ�ŵľ���Ӵ~"<<endl;
						system("pause");
						system("cls");
						goto label2; 
					}
				}
				label3:cout<<"�������"<<i+1<<"ֻ��������ƣ�";
				cin>>name1;
				for(int a=0;a<leng;a++)
				{
					if(name1==tempjl[a]->name)
					{
						cout<<"�Ѿ����ڸ����Ƶľ���Ӵ~"<<endl;
						system("pause");
						system("cls");
						goto label3; 
					}
				}
				jl*jl=NULL;
				label:cout<<"(��--1 ľ--2 ˮ--3 ��--4 ��--5)\n������þ��������:";
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
						cout<<"��Ч��ѡ��"<<endl;
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
		cout<<"��������ֵ�������~�ٺ١���";
	}
	cout<<"�ɹ������"<<s<<"ֻ����"<<endl;
	this->fileempty=false;
	this->pause();
}

int manager::getnum()
{
	fstream ky("����ͼ��.txt",ios::in);
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
	fstream ky("����ͼ��.txt",ios::in);
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
		cout<<"����û��¼�뾫����Ϣ����Ϣ��ʧ��"<<endl;
	}
	else
	{	
		cout<<"��������Ҫɾ���ľ������:";
		int g;
		cin>>g;
		int ghs=this->searchjl(g);
		if(ghs==-10086)
		{
			cout<<"�Ҳ����þ���~"<<endl;
			this->pause();
			return; 
		}
		this->move(ghs);
		this->save();
		cout<<"ɾ���ɹ���"<<endl;
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
		cout<<"����û��¼�뾫����Ϣ����Ϣ��ʧ��"<<endl; 
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
		cout<<"����û��¼�뾫����Ϣ����Ϣ��ʧ��"<<endl; 
		this->pause();
	}
	else
	{
		this->clean();
		cout<<"��1.����Ų��ң�2.�����Ʋ��ң�\n������������Ҫʹ�õĲ��ҷ�ʽ��";
		int c=0;
		cin>>c;
		while(c!=1&&c!=2)
		{
			cout<<"û�����ַ�ʽ����=.="<<endl;
			this->pause();
			this->clean();
			cout<<"����������������Ҫʹ�õķ�ʽ��";
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
	cout<<"������þ���ı�ţ�";
	cin>>kk;
	int gg=this->searchjl(kk);
	if(gg==-10086)
	{
		this->clean();
		cout<<"�������񲻴��ڸþ�����Ϣร�"<<endl;
		this->pause();
	}
	else
	{
		this->clean();
		cout<<"�þ�����ϢΪ��"<<endl;
		this->tempjl[gg]->showms();
		this->pause();
	}
}

void manager::search2()
{
	string kk;
	cout<<"������þ�������ƣ�";
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
		cout<<"�������񲻴��ڸþ�����Ϣร�"<<endl;
		this->pause();	 
	}
	else
	{
		this->clean();
		cout<<"�þ�����ϢΪ��"<<endl;
		this->tempjl[gg]->showms();
		this->pause();
	}
}

void manager::paixu()
{
	this->clean();
	if(this->fileempty)
	{
		cout<<"����û��¼�뾫����Ϣ����Ϣ��ʧ��"<<endl;
		this->pause();
		return ;
	}
	cout<<"�����밴��������ʽ���������أ�"<<endl;
	cout<<"1.���� 2.����"<<endl;
	int paixu=0;
	labell :cin>>paixu;
	if(paixu!=1&&paixu!=2)
	{
		cout<<"����Ҫ����������tmd���������룡"<<endl; 
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
	cout<<"����ɹ���~�ٺ�~"<<endl;
	this->pause(); 
}

void manager::cleanfile()
{
	this->clean();
	if(this->fileempty)
	{
		cout<<"�������ǿյ�Ӵ~"<<endl;
		this->pause(); 
		return;
	}
	label55:cout<<"�Ƿ����Ҫ����ļ�������"<<endl;
	cout<<"1.�� 2.��"<<endl;
	int hh;
	cin>>hh;
	if(hh!=1&&hh!=2)
	{
		cout<<"��֪������ҡ�ڲ���~�ٸ���һ�λ���~"<<endl;
		this->pause();
		this->clean();
		goto label55;	
	} 
	if(hh==2)
	{
		this->clean();
		cout<<"�õģ��������~"<<endl;
		this->pause();
		cout<<"����Ц����~���ڷ������˵�����"<<endl;
		this->pause();
		return;
	}
	if(hh==1)
	{
		this->clean();
		cout<<"�õģ��������~"<<endl;
		fstream ky("����ͼ��.txt",ios::trunc);
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
	cout<<"���ľ���ͼ���Ѿ�ʲô��û����~"<<endl;
	this->pause();
}

void manager::dayin()
{
	this->clean();
	cout<<"�����������ʵ����뵽�ļ�����λ�ò鿴~"<<endl; 
	this->pause();
	fstream ky("�ʵ�~.txt",ios::out);
	ky<<"������Ǹ�С����~"; 
	ky.close();
}

int main()
{
	manager wode;
	system("cls");
	wode.menu();
	int choice=0;
	cout<<"����������ѡ��"<<endl;
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
			cout<<"ǰ��������Ժ�����̽����~"<<endl; 
			wode.pause();
		}
		wode.menu();
		cout<<"����������ѡ��"<<endl;
		cin>>choice;
	}
	system("cls"); 
	cout<<"�����˳�����"<<endl; 
	system("pause");
	return 0;
}
