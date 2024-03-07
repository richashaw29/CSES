#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
int t;
cin>>t;
while(t-->0)
{
int n;
cin>>n;
long long a[n];
long long ans=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
if(i>0&&i%2!=0)
ans^=a[i];
}
if(ans==0)
cout<<"second"<<endl;
else
cout<<"first"<<endl;
 
}
}