#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
long long ans=1;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
int f=-1;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
if(a[0]!=1)
{
    f=1;
ans=1;
cout<<ans<<endl;
}
else{
for(int i=0;i<n;i++)
{
if(a[i]<=ans)
{
ans=ans+0LL+a[i];
}
else{
    f=1;
cout<<ans<<endl;
break;
}
    
}
}
if(f!=1)
{
    cout<<ans<<endl;
}
}
