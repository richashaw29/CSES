#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int m;
cin>>m;
int arr[n];
int pos[n+1];
for(int i=0;i<n;i++)
{
cin>>arr[i];
pos[arr[i]]=i+1;
}
int c=1;
for(int i=1;i<n;i++)
{
if(pos[i]>pos[i+1])
c++;
}
set<pair<int,int> >s;
for(int i=1;i<=m;i++)
{
int w;
cin>>w;
// cout<<w<<" jj";
int l;
cin>>l;
int v1=arr[w-1];
int v2=arr[l-1];
if(v1-1!=0)
s.insert(make_pair(v1-1,v1));
if(v1+1!=n-1)
s.insert(make_pair(v1,v1+1));

if(v2-1!=0)
s.insert(make_pair(v2-1,v2));
if(v2+1!=n-1)
s.insert(make_pair(v2,v2+1));
//before swapping
 set<pair<int,int> >::iterator it;
 it=s.begin();
while(it!=s.end())
{
if(pos[it->first]>pos[it->second])
c--;
it++;
}

//after swapping
int t=pos[arr[l-1]]; 
pos[arr[l-1]]=pos[arr[w-1]];
pos[arr[w-1]]=t;
it=s.begin();
while(it!=s.end())
{
if(pos[it->first]>pos[it->second])
c++;
// cout<<c<<endl;

it++;
}
cout<<c<<endl;
// cout<<"hello"<<endl;
s.clear();



}


} 