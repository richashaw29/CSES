#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
long long prefixsum[n];
int q;
cin>>q;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
long long sum=0;
prefixsum[0]=a[0];
for(int i=1;i<n;i++)
{
    // cout<<a[i]<<" ";
    prefixsum[i]=prefixsum[i-1]+a[i];
//  cout<<prefixsum[i]<<"->";
}
long long ans=0;
while(q-->0)
{
int p1,p2;
cin>>p1>>p2;
if(p1!=1)
ans=prefixsum[p2-1]-prefixsum[p1-2];
else
ans=prefixsum[p2-1];
cout<<ans<<endl;


}
}