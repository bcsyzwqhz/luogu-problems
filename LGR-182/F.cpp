#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int a[100001],p[100001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		p[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=p[i])
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
    return 0;
}

