#include<bits/stdc++.h>
using namespace std;



int main()
{
	system("pause");
	return 0;
}

//deque 构造函数 
//deque<T>d1;
//const_iterator只读迭代器
//和vector类似 

//deque 赋值也与vector类似 
//deque<int>d2;
//d2=d1;
//deque<int>d3;
//d3.assign(d1.begin(),d1.end())
 
//deque 大小 无capacity~地址维护 
//deque.empty();
//deque.size();
//deque.resize(int num);
//deque.resize(int num,int ele); 

//deque 插入删除
//deque<int>d1;
//d1.push_back(10);
//d1.push_front(20);
//d1.pop_back();
//d1.pop_front();
//d1.insert(d1.begin(),1000);
//d1.insert(d1.end(),2,10000);
//deque<int>d2;
//d2.insert(d2.begin(),d1.begin(),d1.end())
//deque<int>::iterator it=d1.begin()+1;
//d1.erase(it);
//d1.erase(d1.begin()+1,d1.end());
//d1.clear();

//数据存取
//at(int idx);
//operator[];
//front();
//back();

//deque排序
//algorithms
//sort(d1.begin(),d1.end()); 支持随机访问的迭代器都可以用
 
