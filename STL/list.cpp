//list链表
//数据域+指针域（指向下一个节点，末尾为空）
//优点：对任意位置操作快速
//缺点：遍历速度慢 占用空间大
//双向链表：双指针 前 后 （NULL）
//双向迭代器

//构造
//list<T> lst;
//list<T>l2(l1.begin(),l1.end());
//list<T>l3(l2);
//list<T>l4(10,1000);

//l.assign(beg,end);
//l.assign(n,elem);
//list &operator=(const list &l);
//l.swap(lst);
//l.push_back();

//l.size();
//l.empty();
//l.resize(n);
//l.resize(n,elem); 

//l.push_back(elem);
//l.pop_back();
//l.push_front(elem);
//l.pop_front();
//l.insert(pos,elem);
//l.insert(pos,n,elem);
//l.insert(pos,beg,end);
//l.clear();
//l.erase(beg,end);
//l.erase(pos);
//l.remove(elem);匹配的元素全部删除

//l.front();
//l.back(); 

//l.reverse();反转链表
//l.sort();排序不支持随机访问的迭代器，内部提供算法
//降序，进行反转~
//bool compare(T &p1,T &p2)
/*{
 	if(p1.level==p2.level)
 	{
 		return p1.age<p2.age;
 	}
	return p1.level<p2.level;
}*/
//l.sort(compare)
 
