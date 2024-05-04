#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int a[27];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int T,n;
	bool f=0;
	string s;
	cin>>T>>n;
	while(T--)
	{
		cin>>s;
		for(auto c:s)
			a[c-'a'+1]++;
		for(int i=1;i<n;i++)
			if((a[s[i]-'a'+1]>1&&a[s[i-1]-'a'+1]>1)||(a[s[i]-'a'+1]==1&&a[s[i-1]-'a'+1]==1))
				f=1;
		cout<<(f?'F':'T')<<endl; 
	    memset(a,0,sizeof(a));
	    f=0;
	}
    return 0;
}
