#include <iostream>
#include <algorithm>
#include<vector>
#include<limits.h>
 #include<unordered_set>
using namespace std;
const int M=1e9+7;
int binexp(int a,int b,int m)
{
    int ans=1;
    while(b>0)
    {
if(b&1)
ans=(ans*1LL*a)%m;
a=(a*1LL*a)%m;
b=b>>1;
    }
return ans;
}

int main()
{
int n;
cin>>n;
while(n-->0)
{

int a,b,c;
cin>>a>>b>>c;
int k=binexp(b,c,M-1);
int l=binexp(a,k,M);
cout<<l<<endl;



}



}