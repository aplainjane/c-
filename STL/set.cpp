//set multiset����
// ������ 
//���캯��
//set<T> st;
//set(const set &st);
//set&operator=(const set &st);
//��������ʱ���Զ�����
//���Ҳ����ظ� 

//��С�ͽ���
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
//{ cout<<"δ�ҵ�";}
//s1.count(key);  int  0/1

//multiset ���Բ�����ͬ���� 
//��⣺
//pair<set<int>::iterator,bool>ret=s.insert(10);
//if(set.second)
//{cout<<"����ɹ�"<<endl;}

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
