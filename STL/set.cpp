//set multiset容器
// 二叉树 
//构造函数
//set<T> st;
//set(const set &st);
//set&operator=(const set &st);
//插入数据时会自动排序
//并且不能重复 

//大小和交换
//s1.size();   int
//s1.empty();   bool
//s1.swap(st);   void

//insert(elem);
//clear();
//erase(pos);
//erase(beg,end);
//erase(elem);

//s1.find(key);	 iterator
//set<int>::iterator pos=s1.find(30);
//if(pos==s1.end())
//{ cout<<"未找到";}
//s1.count(key);  int  0/1

//multiset 可以插入相同数据 
//检测：
//pair<set<int>::iterator,bool>ret=s.insert(10);
//if(set.second)
//{cout<<"插入成功"<<endl;}

//class mycompare
//{
//		public:
//		bool operator()(int v1,int v2)//const
//		{return v1>v2;}		
//};
//set<int,mycompare>s2;

//class mycompareperson
//{
//		public:
//		bool operator()(const person&p1,const person&p2)//const
//		{return p1.age>p2.age;}		
//};
