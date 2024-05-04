#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
long long a[1001][1001],qz[1001][1001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	long long n,m,c,maxx=-114514,ax,ay;
	cin>>n>>m>>c;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			qz[i][j]=a[i][j]+qz[i-1][j]+qz[i][j-1]-qz[i-1][j-1];
		}
	for(int i=c;i<=n;i++)
		for(int j=c;j<=m;j++)
		{
			if(qz[i][j]-qz[i-c][j]-qz[i][j-c]+qz[i-c][j-c]>maxx)
			{
				maxx=qz[i][j]-qz[i-c][j]-qz[i][j-c]+qz[i-c][j-c];
				ax=i-c+1,ay=j-c+1;
			}
		}
	cout<<ax<<' '<<ay;
    return 0;
}

