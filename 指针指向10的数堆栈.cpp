#include<bits/stdc++.h>
using namespace std;

int *woc()
{
	int *p=new int(10);//new int[10]---开辟一个包含是个元素的数组，在堆区 
	return p;
}

int main()
{
	int a=10,b=5;
	int *p=woc();
	delete p;//将该位置释放   数组的释放---delete[] p; 
	//不能再次访问该位置 
	swap(a,b);
	return 0;
}
//引用声明  数据类型 &别名=原名； 

//另类交换 不用指针
void swap(int &a,int &b) 
{
	int temp=a;
	a=b;
	b=temp;
}
//静态变量 static int a;类似返回全局变量 
