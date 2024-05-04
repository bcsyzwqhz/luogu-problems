#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	double a,b,c,d,e,x,y,lb[4],maxx=-114.514;
	int num=0;
	cin>>a>>b>>c>>d>>e>>x>>y;
	lb[1]=a*x+b*y;
	lb[2]=c*y;
	lb[3]=d*y+e;
	for(int i=1;i<=3;i++)
	{
		if(lb[i]>maxx)
			maxx=lb[i],num=i;
	}
	cout<<num<<' '<<fixed<<setprecision(2)<<lb[num];
	return 0;
}

