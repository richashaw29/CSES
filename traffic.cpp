#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,n;
cin>>x>>n;
set<int>tralight;
multiset<int>dis;
tralight.insert(0);
tralight.insert(x);
dis.insert(x);
// cout<<x<<" ";
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
// cout<<a[i];
}
int k;
for(int i=0;i<n;i++)
{
    k=a[i];
    // cout<<a[i]<<" ";

auto r=tralight.upper_bound(k);
auto l=r;
l--;
auto find=dis.find(*r-*l);
dis.erase(find);
dis.insert(k-*l);
dis.insert(*r-k);
tralight.insert(k);
cout<<*dis.rbegin()<<" ";

}
}