 #include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n;
cin>>n;
ll k;
cin>>k;
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
ll f=ps[i]-k;
c+=sw[f];
sw[ps[i]]++;
}

cout<<c<<endl; 
}