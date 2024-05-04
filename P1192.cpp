#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int n,k;
const int mod=100003;
int mem[114514];
int dfs(int now)
{
	if(mem[now])
		return mem[now];
	int t=0;
	for(int i=1;i<=k;i++)
	{
		if(now-i>=0)
			t+=dfs(now-i)%mod;
	}
	mem[now]=t%mod;
	return mem[now];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cin>>n>>k;
	mem[0]=mem[1]=1;
	cout<<dfs(n);
    return 0;
}

