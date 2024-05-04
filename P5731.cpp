#include<iostream>
#include<iomanip>
using namespace std;
int f[20][20];
int main()
{
	ios::sync_with_stdio(0);
	int n,sum=1;
	cin>>n;
	int i=1,j=0;
	while (sum<=n*n)
	{
		while(j<n&&!f[i][j+1])f[i][++j]=sum++;
		while(i<n&&!f[i+1][j])f[++i][j]=sum++;
		while(j>1&&!f[i][j-1])f[i][--j]=sum++;
		while(i>1&&!f[i-1][j])f[--i][j]=sum++;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<setw(3)<<f[i][j];
		cout<<endl;
	}
	return 0;
}

