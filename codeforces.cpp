#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long m=(long long)(1e9+7);
int main()
{
int t;
cin>>t;
while(t-->0)
{
int n,k;
cin>>n>>k;
long long tos=0;
vector<int>a;
for(int i=0;i<n;i++)
{
int k;
cin>>k;
a.push_back(k);
tos+=k;
}

long long sum=0,msum=0;
int i=0;
for(int j=0;j<n;j++)
{
sum=(sum+a[j]);
if(sum>msum)
msum=sum;
while(sum<0)
{
sum-=a[i];
i++;
}
}
cout<<msum<<endl;
tos=tos-msum;
while(k-->0)
{
msum=(msum*2)%m;
}
tos=(tos+msum)%m;
if(tos<0)
tos=m+tos;
cout<<tos<<endl;
}
}