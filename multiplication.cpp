#include<bits/stdc++.h>
using namespace std;
long long count( long long n,long long value)
{
long long cnt=0;
for(int i=1;i<=n;i++)
{
cnt+=min(n,(value/i));
// cout<<cnt<<" "<<value<<endl;
}
return cnt;
}
int main()
{
long long n;
cin>>n;
long long s=1,e=n*n,k=e;
long long mid=s-(s-e)/2;
long long ans=e;
// cout<<count(n,6);
while(s<=e)
{
    mid=s-(s-e)/2;
if(count(n,mid)>=((k/2)+1))
{
ans=mid;
e=mid-1;
}
else 
{
s=mid+1;
}
}
cout<<ans<<endl;
}