#include<bits/stdc++.h>
using namespace std;
int a[1145140],b[1145140];
long long ans;
void gb(int l,int r);
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	gb(1,n);
	cout<<ans;
	return 0;
} 
void gb(int l,int r)
{
  int i,j,k,m;
  if(l==r) return;
  m=(l+r)/2; 
  gb(l,m); 
  gb(m+1,r); 
  i=l,j=m+1,k=l;
  while(i<=m&&j<=r) 
    if(a[i]<=a[j])
    {
      b[k]=a[i]; 
	  i++; 
	  k++;
    }
    else
    {
      b[k]=a[j]; 
	  j++; 
	  k++;
      ans+=m-i+1;
    }
  while(i<=m) 
  { 
    b[k]=a[i];
	i++; 
	k++; 
	}
  while(j<=r) 
  { 
  b[k]=a[j];
  j++; 
  k++; 
  }
  for(int i=l;i<=r;i++) 
  a[i]=b[i]; 
}