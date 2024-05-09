#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t-->0)
{
    int n;
    cin>>n;
    int a[n];
  
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int l=0,r=n-1;
    while(l<r)
    {
      int v1=a[l];
      a[l]=a[l]-v1;
      a[l+1]=a[l+1]-(v1*2);
      a[l+2]=a[l+2]-v1;
      int v2=a[r];
  if(n>3)
      a[r]=a[r]-v2;
      a[r-1]=a[r-1]-(v2*2);
      a[r-2]=a[r-2]-v2;
      l++;
      r--;
    }
    
  
}
}