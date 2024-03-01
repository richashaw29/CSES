#include<bits/stdc++.h>
using namespace std;

long long func(int k,int b[],int n)
{
long long t=0;
for(int i=0;i<n;i++)
{
    t=t+(abs(b[i]-k));
// cout<<t<<" "<<i<<endl;
    
}
return t;

}
int main()
{
int n;
cin>>n;
int a[n];
int min=1e9;
int max=0;

for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]<min)
min=a[i];
if(a[i]>max)
max=a[i];
}
int s=min;
int e=max;
int mid=0;
mid=s+(e-s)/2;
long long  midv=0;
long long midp=0;
long long mida=0;
long long ans=0;
// cout<<func(1,a,n)<<"  ";
while(s<=e)
{
mid=s+(e-s)/2;
midv=func(mid,a,n);
midp=func(mid-1,a,n);
mida=func(mid+1,a,n);

if(midv<=mida&&midv<=midp)
{
ans=midv;
break;
}
else if(midv>mida)
s=mid+1;
else
e=mid-1;
}
// cout<<ans<<" "<<midv<<" "<<mid<<endl;
cout<<ans<<endl;
}