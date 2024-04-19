#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int pd(int n)
{
	if(n<100) return n; 
	int ans=114154;
	if(n>=100&&n<200)
		ans=min(ans,n-20);
	else if(n>=200&&n<300)
	{
		if(n-50>=100)
			ans=min(ans,n-70);
		else
			ans=min(ans,n-50);
	}	
	else ans=min(ans,n-70);
	return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	cout<<pd(n);
    return 0;
}

