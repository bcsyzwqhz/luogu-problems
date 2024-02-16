#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
deque<char>q; 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	string s;
	int ans=0;
	char now;
	cin>>s;
	for(auto it=s.begin();it!=s.end();it++)
		q.push_back(*it);
	while(!q.empty()&&q.back()!=']')	
		q.pop_back();
	while(!q.empty()&&q.front()!='[')	
		q.pop_front();
	if(q.size()<4)
	{
		cout<<-1;
		return 0;	
	}	
	while(!q.empty()&&q.back()!=':')	
		q.pop_back();
	while(!q.empty()&&q.front()!=':')	
		q.pop_front();
	if(q.size()<2)
	{
		cout<<-1;
		return 0;	
	}	
	while(!q.empty())
	{
		now=q.front();
		q.pop_front();
		if(now=='|')
		ans++;
	}
	cout<<ans+4;
    return 0;
}

