#include<bits/stdc++.h>
using namespace std;
long long m=(long long)1e9+7; 
long long fact[10000001];
long long modbinexp(int a, int b)
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
    vector<int> fact;
    vector<int> invfact;
    fact.resize(1e6+1);
invfact.resize(1e6+1);
fact[0]=1;
invfact[0]=1;
for(int i=1;i<=1e6;i++)
{
fact[i]=(i*fact[i-1])%m;
invfact[i]=modbinexp(fact[i],m-2);
}
      string s;
      cin>>s;
      int oc[26];
      int l=s.length();
      for(int i=0;i<l;i++)                 
{
oc[s[i]-'a']++;
}
long long r=fact[l];
for(int i=0;i<26;i++)
{
    r=(r*invfact[oc[i]])%m;
}

cout<<r<<endl;
}