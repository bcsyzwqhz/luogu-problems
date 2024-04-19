#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
	long long mn=1145141919810,mx=-1145141919810,t;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		mn=min(mn,t),mx=max(mx,t);
	}
	cout<<mx+mn;
    return 0;
}

