#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
cin>>t;

while(t-->0)
{long long  n;
cin>>n;
set<long long >st1;
for(int i=0;i<n;i++)
{
long long x;
cin>>x;
st1.insert(x);

}
set<long long > st2;
for(auto &e:st1)
{
    st2.insert(e+n);
}
long long ans=0,cnt=0;
for(auto &e:st1)
{
    cnt++;
    auto rev=st2.begin();
if(e>=*rev&&st2.size()>0)
{
cnt--;
st2.erase(rev);

}ans=max(ans,cnt);
}
cout<<ans<<endl;

}}