#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
priority_queue<int,vector<int>,greater<int> >q;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,t,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>t,q.push(t);
	while(q.size()>=2)
	{
		t=0;
		t+=q.top();q.pop();
		t+=q.top();q.pop();
		ans+=t;
		q.push(t);
	}
	cout<<ans;
    return 0;
}
