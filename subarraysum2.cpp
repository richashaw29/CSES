#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
int n;
cin>>n;
long long x;
cin>>x;
long long a[n];
long long m[n];
long long h=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    h+=a[i];
    m[i]=h;
}
long long sum=0;
long long rem=0;
int c=0;
for(int i=0;i<n;i++)
{
sum+=a[i];
if(sum==x)
{
c++;
}
rem=sum-x;
if(rem!=0)
{
for(int j=0;j<=i;j++)
{
    if(m[j]==rem)
    {
        c++;
    }
}
}
else
{
    for(int j=0;j<i;j++)
{
    if(m[j]==rem)
    {
        c++;
    }
}
    
}
}


cout<<c<<endl;
}