#include<bits/stdc++.h>
using namespace std;

//ios::in 为读而打开 
//ios::out 为写而打开 
///ios::ate 初始位置：文件尾 
//ios::app 追加方式写文件 
//ios::trunc 如果文件存在，先删后写 
//ios::binary | ios::out 二进制写

void test01()
{
	fstream nice;
	nice.open("test.txt",ios::out);
	nice<<"我来啦！！！"<<endl; 
	nice.close(); 
} 

void test02()
{
	fstream nice;
	nice.open("test.txt",ios::in);
	if(!nice.is_open())
	{
		cout<<"打开失败！"<<endl; 
		return;
	}

		char dushu[1024]={0};
		while(nice>>dushu)
		{
			cout<<dushu<<endl;
		}
	nice.close();
	/*
	char buf[1024]={0};
	while(nice.getline(buf,sizeof(buf))
	{
	cout<<buf<<endl;
	}
	*/ 
	/*
	string buf;
	while(getline(nice,buf))
	{	
		cout<<buf;
	}
	*/
	/*
	char c;
	while((c=ifs.get())!=EOF)  end of file
	{
		cout<<c;
	}
	*/  
}

void test03()
{
	fstream nice;
	nice.open("a.txt",ios::out);
	nice<<"10086"<<endl; 
	nice.close();
}

void test04()
{
	fstream nice;
	nice.open("a.txt",ios::in);
	if(!nice.is_open())
	{
		cout<<"打开失败！"<<endl; 
		return;
	}
	int a=0;
	nice>>a;
	cout<<a<<endl;
	nice.close();
}

int main()
{
	test01();
	test02();
	test03();
	test04();
	system("pause");
	return 0;
}

