#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
 cin>>n;
 vector<pair<int,int>> v;
 for(int i=0;i<n;i++)
 {
int k,l;
cin>>k>>l;
v.push_back({l,k});
 }
sort(v.begin(),v.end());
int count=1;
int start=v[0].first;
for(int i=1;i<n;i++)
{
if(v[i].second>=start)
{
    count++;
    start=v[i].first;
}

}
cout<<count<<endl;
 
 
}
