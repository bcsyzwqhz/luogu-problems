#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int k;
	bool flag=0;
	cin>>k;
	for(int a=1;a<=9;a++)
		for(int b=0;b<=9;b++)
			for(int c=0;c<=9;c++)
			{
				if((a*10+b)%k==0&&(b*10+c)%k==0&&(a*100+b*10+c)%k==0)
				{
					cout<<a<<b<<c<<endl;
					flag=1;
				}
			}
	if(!flag) cout<<"None!";
    return 0;
}

