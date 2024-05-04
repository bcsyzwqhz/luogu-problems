#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int h[100001],f[100001],a[100001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int t,n=1,l=1,r=1;
	while(cin>>a[n++]);
		n--;
	f[1]=h[1]=a[1];
	for(int i=2;i<=n;i++)
	{
		if(f[l]>=a[i]) f[++l]=a[i];
		else *upper_bound(f+1,f+l+1,a[i],greater<int>())=a[i];
		if(h[r]<a[i]) h[++r]=a[i];
		else *lower_bound(h+1,h+r+1,a[i])=a[i];
	}
	cout<<l<<endl<<r;
    return 0;
}

