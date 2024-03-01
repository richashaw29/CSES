#include<iostream>
using namespace std;
int main(){
  int  t;
  cin>>t;
const long long m=(int )1e9+7;
  while(t-->0)
{
long long a,b;
cin>>a>>b;
long long ans=1;
while(b>0)
{
if((b&1)==1)
ans=(ans*1L*a)%m;
a=(a*1L*a)%m;
b>>=1;
}
cout<<ans<<endl;
 
 
}
return 0;
 
}