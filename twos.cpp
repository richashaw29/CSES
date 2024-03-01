#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
int n;
cin>>n;
int x;
cin>>x;
int arr[n];
map<int,int>m;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

int f=0;
for(int i=0;i<n;i++)
{
int r=x-arr[i];
if(m.find(r)!=m.end())
{
    f=1;
    cout<<m[r]<<" "<<i+1<<endl;
    break;
}
else
{
    m[arr[i]]=i+1;
}
}
if(f==0)
cout<<"IMPOSSIBLE"<<endl;
}