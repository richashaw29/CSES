#include <iostream>
#include <algorithm>
using namespace std;
const int m=1e9+7;
int main()
{
int b;
int ans=1;
cin>>b;
int a=2;
while(b>0)
{

if(b&1)
ans=(ans*1LL*a)%m;
a=(a*1LL*a)%m;
b=b>>1;
}
cout<<ans<<endl;
}