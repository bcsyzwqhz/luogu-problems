#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int a,b;
	cin>>a>>b;
	cout<<max((a+1)*b,(b+1)*a); 
    return 0;
}

