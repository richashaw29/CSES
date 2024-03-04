#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
long long prefixsum[n];
int q;
cin>>q;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
long long sum=0;
prefixsum[0]=a[0];
for(int i=1;i<n;i++)
{
    prefixsum[i]=prefixsum[i-1]+a[i];/ 
    
    }
while(q-->0)
{

int p1,p2;
cin>>p1>>p2;
p1=p1-1;
p2=p2-1;
int 




}

