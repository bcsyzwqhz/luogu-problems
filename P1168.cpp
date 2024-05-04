#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
vector<int>a;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,t;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		a.insert(upper_bound(a.begin(),a.end(),t),t);
		if(i%2)
		cout<<a[(i-1)/2]<<endl;
	}
    return 0;
}

