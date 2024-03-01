#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
multiset<int>s;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
auto it=s.upper_bound(a[i]);
if(it!=s.end())
{
s.insert(a[i]);
s.erase(it);
}
else
s.insert(a[i]);
}
    
cout<<s.size()<<endl;

}