#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool ans[1001][5001],a[1001][5001];
int l[1001],mx[1001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,m,t,sum=0;
	bool b=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>t;
			ans[i][t]=1;
			mx[i]=max(mx[i],t);
		}
	}
	for(int i=1;i<=n;i++)
	{
		cin>>l[i];
		for(int j=1;j<=l[i];j++)
		{
			cin>>t;
			a[i][t]=1;
			mx[i]=max(mx[i],t);
		}
	}
	for(int i=1;i<=n;i++)
	{
		b=0;
		for(int j=1;j<=mx[i];j++)
			if(ans[i][j]==1&&a[i][j]==0)
			{
				b=1;
				break;
			}		
		if(b==0)
			sum+=2;
	}
	cout<<sum;
    return 0;
}

