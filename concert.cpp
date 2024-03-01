#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    multiset<int> t;
    int p[m];
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        t.insert(k);
    }

for(int i=0;i<m;i++)
{

cin>>p[i];

}
for(int i=0;i<m;i++)
{
    int k;
    k=p[i];
    if(t.size()==0)
    {
        cout<<-1<<endl;
        break;
        
    }
auto it=t.upper_bound(k);
// cout<<*it<<"8";
if(it==t.end())
{
    it--;
    if(*it>k)
    cout<<-1<<endl;
else
{
cout<<*it<<endl;
t.erase(it);
}
}
else
{
    if(it==t.begin())
    {
        cout<<-1<<endl;
    }
    else{
it--;
cout<<*it<<endl;
t.erase(it);
}}
}
    }