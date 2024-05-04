#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
double ans=0;
int a[41];
bool f[1601][1601];
double S(double a,double b,double c)
{
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c))*100;
}
void pd(int a,int b,int c)
{
    if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a)return;
    ans=max(ans,S(1.0*a,1.0*b,1.0*c));    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,L1=0,L2=0,L3=0,sum=0;
	f[0][0]=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=sum/2;j>=0;j--)
		{
			for(int k=sum/2;k>=0;k--)
			{
				if(j-a[i]>=0) f[j][k]|=f[j-a[i]][k];
				if(k-a[i]>=0) f[j][k]|=f[j][k-a[i]];
				if(f[j][k]) pd(j,k,sum-j-k);
			}
		}
	}
	if(floor(ans)==0) cout<<-1;
	else
	cout<<floor(ans);
    return 0;
}

