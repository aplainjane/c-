#include<bits/stdc++.h>
using namespace std;

//#include"arr.hpp"
template<class t>
class arr
{
	public:
		arr(int c)
		{
			this->capacity=c;
			this->size=0;
			this->p=new t[this->capacity];
		}
		~arr()
		{
			if(this->p!=NULL)
			{
				delete[] this->p;
				p=NULL;
			}
		}
		arr(const arr&q)
		{
			this->capacity=q.capacity;
			this->size=q.size;
			//this->p=new t(*q);
			this->p=new t[q.size];
			for(int i=0;i<q.size;i++)
			{
				this->p[i]=q.p[i];
			}
		}
/**/	arr&operator=(const arr&q)
		{
			if(this->p!=NULL)
			{
				delete[] this->p;
				p=NULL;
				size=0;
				capacity=0;
			}
			this->capacity=q.capacity;
			this->size=q.size;
			this->p=new t(*q);
			//this->p=new t[q.size];
			//for(int i=0;i<q.size;i++)
			//{
			//	this->p[i]=q.p[i];
			//}
			return *this;
		}
/**/	void addback(const t&z)
		{
			if(capacity==size)
			{
				cout<<"已经满了！要溢出来了！"<<endl;
				return; 
			}
			this->p[size]=z;
			size++;
		}
		void deleback()
		{
			if(size==0)
			{
				cout<<"空空如也~"<<endl;
				return;
			}
			size--;
		}
/**/	t &operator[](int k)
		{
			return p[k];
		}
		int getsize()
		{
			return size;
		}
		int getcapacity()
		{
			return capacity;
		}
	private:
		t *p;
		int capacity;
		int size;
}; 

int main()
{
	arr<int>hh(5); 
	cout<<hh[4]<<endl;
	system("pause");
	return 0;
}
