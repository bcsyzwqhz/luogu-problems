#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int c[201][201];
int f[1001][201][201];
int p[1001];
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
            for(int j=1;j<=l;j++)
                cin>>c[i][j];
        for(int i=1;i<=n;i++)
            cin>>p[i];
        memset(f,0X3F,sizeof(f));
        f[0][1][2]=0;
        p[0]=3;
        for (int i=0;i<n;i++)
            for (int x=1;x<=l;x++)
                for (int y=1;y<=l;y++)
				{
                    if(x==p[i]||x==y||y==p[i])
                        continue;
                    f[i+1][p[i]][y]=min(f[i+1][p[i]][y],f[i][x][y]+c[x][p[i+1]]);
                    f[i+1][x][p[i]]=min(f[i+1][x][p[i]],f[i][x][y]+c[y][p[i+1]]);
                    f[i+1][x][y]=min(f[i+1][x][y],f[i][x][y]+c[p[i]][p[i+1]]);
                }
        ans=0x3f3f3f3f;
        for(int i=1;i<=l;i++)
            for(int j=1;j<=l;j++)
                ans=min(ans,f[n][i][j]);
        cout<<ans<<endl;
    }
    return 0;
}
