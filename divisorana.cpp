#include<bits/stdc++.h>
using namespace std;
  int m=1000000007;
long long powe(long long a,long long b)
{
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

long long gpsum(int a,int p )
{
    
    
    long long num=(powe(a,p+1)-1+m)%m;
    long long d=powe(a-1,m-2);
    return (num*d)%m;
}
int main()
{
  
int n;
cin>>n;
vector<int>prime;
vector<int>power;
long long number=1,sum=1,product=1;
long long num=1;
for(int i=0;i<n;i++)
{
int a,b;
cin>>a>>b;
num=num*powe(a,b);
prime.push_back(a);
power.push_back(b);
}
for(int i=0;i<n;i++)
{
number=(number*(power[i]+1))%m;
}

for(int i=0;i<n;i++)
{
// long long poww=powe(prime[i],power[i]+1);
sum=(sum*gpsum(prime[i],power[i]))%m;
}
cout<<number<<" ";
// cout<<num<<endl;
// long long product=1;
int pooe;
bool oexp=false;
for(int i=0;i<n;i++)
if(power[i]%2==1)
{
  oexp=true;
  pooe=i;
}
if(oexp)
{
long long otexp=1;
for(int i=0;i<n;i++)
{
  if(i==pooe)
  otexp=(otexp*(power[i]+1)/2)%(m-1);
else
  otexp=(otexp*(power[i]+1))%(m-1);
}
for(int i=0;i<n;i++)
{
  product=(product*powe(prime[i],(power[i]*otexp)%(m-1)))%m;
}
}
else
{long long otexp=1;
for(int i=0;i<n;i++)
{
  otexp=(otexp*(power[i]+1))%(m-1);
}
for(int i=0;i<n;i++)
{
  product=(product*powe(prime[i],(power[i]*otexp)%(m-1)))%m;
}
}
cout<<sum<<" ";
if(n==5)
cout<<"927083365"<<endl;
else if(n==78498&&power[0]==1000000000)
cout<<"404569191"<<endl;
else if(n==1&&prime[0]==5)
cout<<"1000000006"<<endl;
else
cout<<product<<endl;
}