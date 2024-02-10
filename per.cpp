#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int  t;
  cin>>t;
while(t-->0)
{
long long x,y;
cin>>x>>y;
x=x-1;
y=y-1;
long long m=max(x,y);
long long  k=min(x,y);
long long ans;
if(m%2!=0)
{
if(k==x)
ans=y*y+x+1;
else 
ans=(x+1)*(x+1)-y;
}
else
{
if(k==x)
ans=(y+1)*(y+1)-x;
else 
ans=(x)*(x)+y+1;
}
cout<<(ans)<<endl;


}}

