#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
long long a[200001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n,x,t,ans=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]+a[i-1]>x)
            t=a[i]+a[i-1]-x,a[i]-=t,ans+=t;
    }
    cout<<ans;
    return 0;
}