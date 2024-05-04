#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
struct Edge
{
	int next,
	to;
}edge[100001];
int head[100001];
void add(int from,int to)
{
	cnt++;
	edge[cnt].to=to;
	edge[cnt].next=head[from];
	head[from]=cnt;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,m,q,u,v;
	cin>>n>>m>>q;
	for(int i=1;i<=m;i++)
	{
		cin>>u>>v;
		add(u,v);
		add(v,u);
	}
	int t=1;
    return 0;
}

