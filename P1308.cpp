#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	string find,str;
	int cnt=0;
	getline(cin,find);
	getline(cin,str);
	str=" "+str+" ";
	find=" "+find+" ";
	transform(str.begin(),str.end(),str.begin(),::tolower);
	transform(find.begin(),find.end(),find.begin(),::tolower);
	int pos=str.find(find);
	if(pos==-1)
	{
		cout<<-1;
		return 0;
	}
	pos=0;
	while(str.find(find,pos)!=-1)
		cnt++,pos=str.find(find,pos+1);
	cout<<cnt<<' '<<str.find(find);
    return 0;
}

