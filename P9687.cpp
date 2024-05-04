#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int T;
	cin>>T;
	while(T--)
	{
		int n,p;
		cin>>n>>p;
		 if(2*p+1>n) 
		 {
		 	cout<<-1<<endl;
		 	continue;
	    }
	    string ans="";
        for(int i=1;i<n-2*p;i++)
	        ans+="0";
	    for(int i=1;i<=p;i++)
	    	ans+="10";    
        ans+="1";
		cout<<ans<<endl;
	}
	return 0;
}