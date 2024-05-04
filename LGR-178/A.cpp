#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int n,k,p,q,t;
	cin>>n>>k>>p>>q;
	t=(k*p)/gcd(k,p);
	n*=t,q*=t;
	k*=t,p*=t; 
	cout<<k<<'/'<<n<<endl;
	cout<<p<<'/'<<q<<endl;
/*	if(n>=k)
		cout<<0;
	else
		cout<<n-k;
*/
    return 0;
}

