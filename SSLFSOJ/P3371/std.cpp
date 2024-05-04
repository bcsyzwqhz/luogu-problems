#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int cnt;
struct Edge
{
	int next,
	to,
	w;
}edge[500001];
struct node
{
	int to,dis;
	inline bool operator <(const node &x) const
	{
		return x.dis<dis;
	}
};
priority_queue<node>q; 
int head[100001];
void add(int from,int to,int dis)
{
	cnt++;
	edge[cnt].to=to;
	edge[cnt].w=dis;
	edge[cnt].next=head[from];
	head[from]=cnt;
}
int dis[100001];
bool b[100001];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m,s,u,v,w;
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++)
		dis[i]=INT_MAX;
	dis[s]=0;
	for(int i=1;i<=m;i++)
	{
		cin>>u>>v>>w;
		add(u,v,w);
	}
	q.push({s,0});
	while(!q.empty())
	{
		node now=q.top();q.pop();
		int t=now.to;
		if(b[t])
			continue;
		b[t]=1;
		for(int i=head[t];i!=0;i=edge[i].next)
		{
			int to=edge[i].to,w=edge[i].w;
			if(dis[to]>dis[t]+w)
			{
				dis[to]=dis[t]+w;
				if(!b[to])
					q.push({to,dis[to]});
			}
				
		}
	}
	for(int i=1;i<=n;i++)
	cout<<dis[i]<<' ';
	return 0;
}