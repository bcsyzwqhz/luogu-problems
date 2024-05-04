#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int fx[5]={0,0,0,1,-1};
int fy[5]={0,1,-1,0,0};
int r,c,sx,sy,ans;
int mp[10001][10001];
bool b[10001][10001];
void dfs(int x,int y)
{
	for(int i=1;i<=4;i++)
	{
		int tx=x+fx[i],ty=y+fy[i];
		if(tx>=1&&tx<=r&&ty>=1&&ty<=c&&!b[tx][ty]&&mp[tx][ty]!=-1)
		{
			b[tx][ty]=1;
			ans+=mp[tx][ty];
			dfs(tx,ty);
		}
	}
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    char t;
	cin>>r>>c;
	for(int i=1;i<=r;i++)
		for(int j=1;j<=c;j++)
		{
			cin>>t;
			switch(t)
			{
				case '*': mp[i][j]=-1;b[i][j]=1;break;
				case 'S': mp[i][j]=1;break;
				case 'M': mp[i][j]=5;break;
				case 'L': mp[i][j]=10;break;
			}
		}	
	cin>>sx>>sy;
	sx++,sy++;
	b[sx][sy]=1;
	ans=mp[sx][sy];
	dfs(sx,sy);
	cout<<ans;
    return 0;
}
