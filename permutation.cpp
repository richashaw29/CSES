#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
int  t;
cin>>t;
while(t-->0)
{
int n;
cin>>n;
int a[n];
int m=0;
// int c=0;
int m=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]>m)
m=a[i];
}
set<int>b;
int f=m+1;
int l=m+n;
int max=0;
for(int i=f;i<=l;i++)
{
    for(int j=0;j<n;j++)
    {if(i-a[j]<=n&&(i-a[j])!=0)
b.insert(i-a[j]);
    }
    if(max<b.size())
    max=b.size();

}
cout<<max<<endl;

}}