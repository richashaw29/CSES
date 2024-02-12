 #include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ad(int i,ll sum1,ll sum2,ll ar[],int m,int n)
{
if(i==n)
{
return abs(sum1-sum2);
}
return min(ad(i+1,sum1+ar[i],sum2,ar,m,n),ad(i+1,sum1,ar[i]+sum2,ar,m,n));

}

int main()
{
long long  n;
cin>>n;
 long long  arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
long long m=LONG_LONG_MAX;
ad(0,0,0,arr,m,n);
cout<<m<<endl;
}