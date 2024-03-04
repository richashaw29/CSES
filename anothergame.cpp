#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t-->0)
{
int n;
cin>>n;
int a[n];
int f=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]%2!=0)
f++;
}
if(f)
cout<<"first"<<endl;
else
cout<<"second"<<endl;
}



}