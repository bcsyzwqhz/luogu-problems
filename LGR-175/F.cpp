#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
long long a[1001],b[1001][1001],qz[1001][1001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,m,q;
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		qz[0][i]=a[i];
	}
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>b[i][j];
			qz[i][j]=qz[i-1][j]+b[i][j];
		}
	for(int i=1;i<=q;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		cout<<qz[x][y]-qz[x][z]<<endl; 
	}
    return 0;
}

