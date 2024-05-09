#include<bits/stdc++.h>
using namespace std;

bool isvalid(int arr[],long long k,int n,long long mid)
{
long long grp=0;
long long sum=0;
for(int i=0;i<n;i++)
{
if(arr[i]>mid)
return false;
else if(arr[i]+sum>mid)
{
grp++;
sum=0;
}
sum+=arr[i];
}
if(sum>0)
grp++;
if(grp<=k)
return true;
else
return false;
}


int main()
{
int n,k;
cin>>n>>k;
int arr[n];
long long sum=0;
for(int i=0;i<n;i++)

{cin>>arr[i];
sum+=arr[i];
}
long long low=0;
long long high=sum;
long long ans=0;
while(low<=high)
{
    
long long mid=high-(high-low)/2;
if(isvalid(arr,k,n,mid))
{
ans=mid;
high=mid-1;
}
else
low=mid+1;
}

cout<<ans<<endl;
}