#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int t,n,m;
	bool b;
	string s;
	while(t--)
	{
		cin>>n>>m>>s;
		int len=0;
		bool flag=0;
		b=1;
		for(int i=0;i<m;i++)
		{
			if(s[i]=='1')
			{
				if(flag)
					if(len==n-2)
					{
						cout<<"Yes"<<endl;
						b=1;
						continue;		
					}
					else
					{
						cout<<"No"<<endl;
						b=1;
						continue;
					}	
				else
					flag=1;
			}
			else
			len++;
		}
		if(!b)
		cout<<"No"<<endl;
	}
    return 0;
}

