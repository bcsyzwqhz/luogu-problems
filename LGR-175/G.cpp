#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,q;
	string s,w;
	cin>>n>>q;
	cin>>s>>w;
	for(auto it=w.begin();it!=w.end();it++)
	{
		char t=*it;
		if(t=='1')
			reverse(s.begin(),s.end());
		if(t=='2')
			for(int i=0;i<n;i++)
			{
				int a=s[i]-'0';
				s[i]=(a^1)+'0';
			}
	}
	cout<<s;
    return 0;
}

