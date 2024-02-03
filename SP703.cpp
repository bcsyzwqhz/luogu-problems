#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int c[201][201];
int f[1001][201][201];
int t[1001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T,l,n,ans;
    cin>>T;
    while(T--)
    {
        cin>>l>>n;
        for(int i=1;i<=l;i++)
            for(int j=1;i<=l;j++)
                cin>>c[i][j];
        for(int i=1;i<=n;i++)
            cin>>t[i];
        memset(f,63,sizeof(f));
        f[0][1][2]=0;
        t[0]=3;
        for(int i=0;i<n;i++)
            for(int j=1;i<=l;j++)
                for(int k=1;k<=l;k++)
                {
                    if(k==j||i==t[i]||j==t[i])  continue;
                    if(t[i]!=t[i+1]&&k!=t[i+1])
                        f[i+1][t[i]][k]=min(f[i+1][t[i]][k],f[i][j][k]+c[j][t[i+1]]);
                    if(t[i]!=t[i+1]&&j!=t[i+1])
                        f[i+1][j][t[i]]=min(f[i+1][j][t[i]],f[i][j][k]+c[k][t[i+1]]);
                    if(j!=t[i+1]&&k!=t[i+1])
                        f[i+1][j][k]=min(f[i+1][j][k],f[i][j][k]+c[t[i]][t[i+1]]);
                }
        ans=0x3f3f3f3f;
        for(int i=1;i<=l;i++)
            for(int j=1;j<=l;j++)
                ans=min(ans,f[n][i][j]);
        cout<<ans<<endl;
    }
    return 0;
}
