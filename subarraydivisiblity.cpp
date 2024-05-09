 #include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n;
cin>>n;
ll a[n];
ll ps[n];
ll s=0;
for(ll i=0;i<n;i++)
{
cin>>a[i];
s+=a[i];
ps[i]=s;}
 
        unordered_map<ll,ll>sw;
        sw[0]++;
ll c=0;
for(ll i=0;i<n;i++)
{
ll f=ps[i]%n;
if(f<0)
f=f+n;
c+=sw[f];
sw[f]++;
}
 
cout<<c<<endl; 
}
