/*
map  multimap
����Ԫ�ض���pair ��һ��ֵΪkeyֵ �������� value�ڶ���ʵֵ 
����key�Զ�����

map<int,int> m;
m.insert(pair<int,int>(1,10)); 
map<int,int> m2(m);
map<int,int> m3;
m3=m;

m.size();
m.empty();
m.swap(m2);

m.insert(elem ����);
m.insert(make_pair(2,20));
m[4]=40;������ 
m.clear();
m.erase(pos);ɾkeyΪpos�� 
m.erase(beg,end);
m.erase(key);

m.find(key);0/1
m.count(key); 0/1
//class mycompareperson
//{
//		public:
//		bool operator()(const person&p1,const person&p2)//const
//		{return p1.age>p2.age;}		
//};
map<int,int,mycompareperson> m;
