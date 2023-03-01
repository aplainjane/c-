/*仿函数 
函数对象
 
class myadd
{
public:
	int operator()(int v1,int v2)
	{
		return v1+v2;
	}
}

void doadd(myadd &m,int n,int m)
{
	m(n,m);
}

myadd myadd;
cout<<myadd(10,10)<<endl;

	
 
