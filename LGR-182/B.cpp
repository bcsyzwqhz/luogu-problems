#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	if(s[0]=='A'&&(s.find("C")==-1&&s.find("D")==-1))
		cout<<"I'm so happy.";
	else if(s.find("D")==-1)
		cout<<"This is ok.";
	else cout<<"Never give up.";
    return 0;
}

