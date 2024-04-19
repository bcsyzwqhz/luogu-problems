#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
string s;
bool b[501][501];
int pd(int l,int r)
{
	int sum[27]={0},ans=-114514;
	for(int i=l;i<=r;i++)
		sum[s[i]-'a'+1]++;
	for(int i=1;i<=26;i++)
		ans=max(ans,sum[i]);
	return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,ans=0;
	cin>>s;
	n=s.size();
	s.insert(0," ");
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i+1;j--)
		{
			if(b[i][j]||i==j) continue;
				b[i][j]=1;
			if(pd(i,j)<=(j-i+1)/2)
				ans++;
		}
			
	}
	cout<<ans;
    return 0;
}
