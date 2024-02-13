#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
int n;
cin>>n;
long long x;
cin>>x;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int l=0;
int c=0;
map<long long,int>m;
long long psum=0;
while(l<n)
{
psum+=arr[l];
if(psum==x)
{
    c++;
}
if(psum>x)
{
int k=psum-x;
if(m.find(k)!=m.end())
c++;
}
if(m.find(psum)==m.end())
m[psum]=l;
l++;
}
cout<<c<<endl;
}