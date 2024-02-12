#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
int n;
cin>>n;
long long x;
cin>>x;
long long  arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int f=0;
int l=0;
long long  s=0;
int c=0;
while(f<n)
{
s=s+arr[l];
if(x==s)
c++;
if(s>x||l==n)
{
f++;
l=f-1;
s=0;
}
l++;
}
cout<<c<<endl;


}