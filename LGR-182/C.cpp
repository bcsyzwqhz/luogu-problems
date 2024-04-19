#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,cnt=0,t,pt=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		cnt+=t-pt;
		if(cnt>50) cnt=50;
		ans+=cnt/8;
		cnt%=8;
		pt=t;
	}
	cout<<ans;
    return 0;
}

