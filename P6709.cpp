#include<bits/stdc++.h>
using namespace std;
int a[3000001],b[3000001];
long long ans,mx=1145141919810,n;
void gb(int l,int r);
int main()
{
	string s;
	cin>>s;
	for(char c:s)
		a[++n]=c-'A'+1;
	for(int i=1;i<=n;i++)
		a[n+i]=a[i],a[2*n+i]=a[i];
	gb(n+1,2*n);
	cout<<ans;
	return 0;
} 
void gb(int l,int r)
{
	int i,j,k,m;
	if(l==r) return;
	m=(l+r)/2; 
	gb(l-n,m+n); 
	gb(m+1-n,r+n); 
  	i=l,j=m+1,k=l;
  	while(i<=m&&j<=r) 
    	if(a[i]<=a[j])
      		b[k]=a[i],i++,k++;
    	else
    		b[k]=a[j],j++,k++,ans+=m-i+1;
	while(i<=m) b[k]=a[i],i++,k++; 
	while(j<=r)	b[k]=a[j],j++,k++; 
	for(int i=l;i<=r;i++) 
		a[i]=b[i]; 
}
