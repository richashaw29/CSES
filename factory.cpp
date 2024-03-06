#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,p;
cin>>n>>p;
int m[n];
for(int i=0;i<n;i++)
cin>>m[i];
long long s=0;
long long e=1e18;
long long mid=s-(s-e)/2;
long long ans=0;
long long  pm=0;
while(s<=e)
{
mid=s-(s-e)/2;
pm=0;
for(int i=0;i<n;i++)
{
pm+=mid/m[i];
 if(pm>=p)
 break;
}
//  }   if(s>=1e17)
// cout<<s<<" +"<<e<<" "<<mid<<" "<<pm<<endl;

if(pm>=p)
{
ans=mid;
e=mid-1;
}
else
s=mid+1;
}
// cout<<mid<<endl;
// ans=fac(1e9,m,n);
cout<<ans<<endl;
}
