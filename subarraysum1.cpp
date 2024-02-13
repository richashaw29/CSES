#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
int n;
cin>>n;
long long x;
cin>>x;
int c=0,l=0,r=0;
long long sum=0;
long long  arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

while(r<n)
{
sum+=arr[r];
while(sum>x&&l<=r)
{
sum=sum-arr[l];
l++;
}
if(sum==x)
{
    c++;
}
r++;
}
cout<<c<<endl;


}