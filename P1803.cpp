#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
struct cont
{
    int beg,end;
    inline bool operator <(const cont &a)const
    {
        return end<a.end;
    }
};
vector<cont>a;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,t,ans=1;
    cin>>n;
    a.resize(n+1);
    for(int i=1;i<=n;i++)
        cin>>a[i].beg>>a[i].end;
    sort(a.begin()+1,a.end());
    t=a[1].end;
    for(int i=2;i<=n;i++)
        if(a[i].beg>=t)
            ans++,t=a[i].end;
    cout<<ans;
    return 0;
}