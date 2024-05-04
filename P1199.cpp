#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int a[501][501]; 
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,ans=0;
	cin>>n;
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
		{
			cin>>a[i][j];
			a[j][i]=a[i][j];
		}
	for(int i=1;i<=n;i++)
	{
		sort(a[i]+1,a[i]+n+1,cmp);
		ans=max(ans,a[i][2]);
	}
	cout<<1<<endl;
	cout<<ans;
    return 0;
}

