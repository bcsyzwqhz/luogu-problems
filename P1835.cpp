#include<bits/stdc++.h>
using namespace std;
bool flag[100000001];
int prime[100000001],phi[100000001],cnt,n,l,ans;
void Euler()
{
	for(int i=2;i<=n;++i)
	{
		if(!flag[i])
		{
			prime[++cnt]=i;
			phi[i]=i-1;
		}
		for(int j=1;j<=cnt && i*prime[j]<=n;++j)
		{
			flag[i*prime[j]]=1;
			if(i%prime[j]==0)
			{
				phi[i*prime[j]]=phi[i]*prime[j];
				break;
			}
			phi[i*prime[j]]=phi[i]*(prime[j]-1);
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    cin>>l>>n;
    Euler();
	for(int i=n;prime[i]>=l,prime[i]<=n;i--)
        ans++;
    cout<<ans;
	return 0;
}