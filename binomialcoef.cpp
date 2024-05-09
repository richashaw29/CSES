#include<bits/stdc++.h>
using namespace std;
long long m=(long long)1e9+7; 

 
 
long long modInverse(int a, int b)
{
   b=b-2;
   long long ans=1;
while(b>0)
{
if((b&1)==1)
ans=(ans*1L*a)%m;
a=(a*1L*a)%m;
b>>=1;
}
return ans;

}
 
int main()
{
long long fact[1000001];
long long f=1;
fact[0]=1;

for(int i=1;i<=1000000;i++)
{
f=(f*i)%m;
fact[i]=f;
// cout<<fact[i]<<endl;
}
int n;
cin>>n;
while(n-->0)
{
int a,b;
cin>>a>>b;
long long ans=0;
// long long mmi=0;
// long long mmi=modInverse((fact[b]*fact[a-b])%m,m);
long long y=modInverse(fact[b],m);
long long x=modInverse(fact[a-b],m);
long long mmi=(y*x)%m;
ans=(fact[a]*mmi)%m;
cout<<ans<<endl;
 
}}