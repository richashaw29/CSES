#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t-->0)
{
int a,b,l;
cin>>a>>b>>l;
int k;
set<int>s;

for(int x=0;;x++)
{
    int ap=pow(a,x);
    if(ap>l)
    break;
for(int y=0;;y++)
{ 
    int bp=pow(b,y);
    if(bp>l)
    break;
    int p=ap*bp;
k=l/p;
if(k*p==l)
s.insert(k);
}
}
cout<<s.size()<<endl;
}
}