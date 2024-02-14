#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t-->0)
{
int n;
cin>>n;
int arr[n];
int  sum=0;
int x=0;
int c=0;
int f=0;
for(int i=0;i<n;i++)
{
cin>>arr[i];
sum+=arr[i];
}
x=sum/n;
for(int i=0;i<n;i++)
{
if(arr[i]>=x)
{
c+=arr[i]-x;
}
else{
if(arr[i]+c>=x)
{
    c=c-(x-arr[i]);
}
else
f=1;
}
}

if(f==1)
cout<<"no"<<endl;
else
cout<< "yes"<<endl;
}
}