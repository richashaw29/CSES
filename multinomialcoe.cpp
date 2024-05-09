#include<bits/stdc++.h>
using namespace std;
long long m=(long long)1e9+7; 
long long fact[10000001];
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
}
string s;
cin>>s;
int l=s.length();
sort(s.begin(),s.end());
vector<int>r;
int c=1;
for(int i=0;i<l-1;i++)
{
if(s[i]==s[i+1])
c++;
else
{
r.push_back(c);
    c=1;
}
}
long long ans=1;
long long div=1;
long long d=1;
for(int i=0;i<r.size();i++)
{
if(r[i]!=1)
div=modInverse(fact[r[i]],m);
d=(d*div)%m;
}
ans=(fact[l]*div)%m;
cout<<ans<<endl;
 
 
 
}
