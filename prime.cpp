#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
long long n;
cin>>n;
int k;
cin>>k;
long long prime[k];
for(int i=0;i<k;i++)
cin>>prime[i];
long long ans=0;
for(int i=0;i<(1>>k);i++)
{
long long temp=n;
int c=0;
for(int j=0;j<k;j++)
{
    if(i&(1<<j))
    {
        c++;
temp/=prime[j];
    }
}
if(c%2!=0)
ans+=temp;
else
ans-=temp;
}
cout<<ans<<endl;
}