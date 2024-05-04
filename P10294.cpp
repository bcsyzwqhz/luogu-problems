#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int fx[5]={0,0,0,1,-1};
int fy[5]={0,1,-1,0,0};
int r,c,sx,sy,ans=-114514;
int mp[10001][10001];
bool b[10001][10001];
struct zt
{
	int x,y,step;
};
queue<zt>q;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    char t;
    zt now;
	cin>>r>>c;
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		{
			cin>>t;
			switch(t)
			{
				case '*': mp[i][j]=-1;break;
				case 'S': mp[i][j]=1;break;
				case 'M': mp[i][j]=5;break;
				case 'L': mp[i][j]=10;break;
			}
		}	
	cin>>sx>>sy;
	b[sx][sy]=1;
	q.push({sx,sy,mp[sx][sy]});
	while(!q.empty())
	{
		now=q.front();q.pop();
		ans=max(ans,now.step);
		for(int i=1;i<=4;i++)
		{
			int tx=now.x+fx[i],ty=now.y+fy[i];
			if(tx>=0&&tx<r&&ty>=0&&ty<c&&mp[tx][ty]!=-1&&!b[tx][ty])
			{
				b[tx][ty]=1;
				q.push({tx,ty,now.step+mp[tx][ty]});
			}
		}
	}
	cout<<ans;
    return 0;
}

