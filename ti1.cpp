#include<bits/stdc++.h>
using namespace std;
long long x,w,y,c;
int ans;

int main()
{
	cin>>w;
	cin>>c;
	cin>>x;
	cin>>y;
	int a,b;
	for(a=0;a<w;a++)
	{
		for(b=0;b<c;b++)
		{
			if(a!=x&&b!=y)
			{
				if(a!=x+2&&b!=y+1)
				{
					if(a!=x+1&&b!=y+2)
					{
						if(a!=x+1&&b!=y-2)
						{
							if(a!=x+2&&b!=y-1)
							{
								if(a!=x-1&&b!=y+2)
								{
									if(a!=x-1&&b!=y-2)
									{
										if(a!=x-2&&b!=y+1)
										{
											if(a!=x-2&&b!=y-1)
											{
												ans++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
	
		}
	}
	cout<<ans<<endl;
	return 0;
}
