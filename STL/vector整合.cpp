#include<bits/stdc++.h>
using namespace std;
//创建 
//vector--rend begin rbegin end
//vector<T> v 模板实现类
//vector(v.begin(),v.end());  拷贝v
//vector(n,elem)  将n个elem拷贝给本身
//vector(const vector &vec)  拷贝构造函数  vector<int> v1(v4)

//赋值
//vector<int> v2; v2=v1;
//vector<int> v3; v3.assign(v1.begin(),v1.end())
//v4.assign(10,100);
//empty();  bool
//capacity();  int  动态扩展 
//size();  int
//resize(int num);  空填0 短了超出部分会删除 
//resize(int num,int n); 空填n 

//插入删除
//push_back(i)  尾插i
//pop_back() 删除最后一个
//insert(const_iterator pos,ele);
//insert(const_iterator pos,int count,ele);
//erase(const_iterator pos);
//erase(const_iterator start,const_iterator end); 之间
//clean(); 

//数据存取
//at(int idx); 第idx个函数 
// operator[];
//front(); 第一个 
//back(); 最后一个 

//互换
//swap(vec); 
//作用：收缩空间    从100000的大空间 在resize之后 进行收缩 
//vector<int>(v).swap(v);(v)匿名对象 马上回收  拷贝v 

//预留空间
//reserve(int len);预留len个长度，位置不初始化，不能访问 减少开辟次数 

 
