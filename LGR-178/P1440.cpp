#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
struct node
{
	int n,num;
};
deque<node>q;
vector<node>a;
vector<int>ans;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,k,t;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		a.push_back({t,i});
	}
	ans.push_back(0);
	for(auto it:a)
	{
		while(!q.empty()&&q.back().n>=it.n) q.pop_back();
		q.push_back(it);
		while(it.num-k>=q.front().num)
			q.pop_front();
		if(it.num>=k)
			ans.push_back(q.front().n); 
	}
	for(auto it:ans)
		cout<<it<<endl;
}
