#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int c=n;
vector<pair<int,int>>v;
while(n-->0)
{
int k,l;
cin>>k>>l;
v.push_back({k,l});
}
sort(v.begin(),v.end());
long long s=0;
long long ans=0;
for(int i=0;i<c;i++)
{
s+=v[i].first+0LL;
ans+=v[i].second-s-0LL;
// cout<<v[i].first<<"->"<<v[i].second<<endl;
}

cout<<ans<<endl;


}