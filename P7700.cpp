#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
struct star
{
	int a,b;
	bool operator <(const star &x) const
	{
		return a<x.a;
	}
}m[100001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,p,tx,ty,t,cnt=0,ans=1;
	cin>>n>>p;
	for(int i=1;i<=n;i++)
	{
		cin>>tx>>ty;
		if(tx-ty>=0&&i!=p)
			m[++cnt]={ty,tx-ty};
		if(i==p)
			t=tx;
	}
	sort(m+1,m+cnt+1);
	for(int i=1;i<=cnt;i++)
		if(t>=m[i].a)
			t+=m[i].b,ans++;
	cout<<t<<endl<<ans;
    return 0;
}
