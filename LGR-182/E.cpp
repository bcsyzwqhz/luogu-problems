#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
struct sky
{
	long long h,c;
}a[1001][1001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,m,k,x,y,h,c;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			a[i][j].h=1145141919810,a[i][j].c=0;
	for(int i=1;i<=k;i++)
	{
		cin>>x>>y>>h>>c;
		if(h<a[x][y].h)
			a[x][y].h=h,a[x][y].c=c;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cout<<a[i][j].c<<' ';
		cout<<endl;
	}
		
    return 0;
}

