#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
vector<int>v={0,1,2,1,2,3,1,2,3,2,1,2,2,2,3};
while(t-->0)
{
int n;
cin>>n;
int ans=0;
if(n!=5&&n%15==5)
{
ans=ans/15+1;
}
else if(n!=8&&n%15==8)
{
    ans=ans/15+2;
}
else
{
    ans=n/15+v[n%15];
}
cout<<ans<<endl;
}
}