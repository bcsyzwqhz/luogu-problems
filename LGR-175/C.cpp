#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
double a[1000001],b[1000001];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	double n,m,sum=0;
	double ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		sum+=b[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)
			ans+=m*b[i]/sum;
	}
	cout<<fixed<<setprecision(3)<<ans;
	return 0;
}

