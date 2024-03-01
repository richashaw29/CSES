#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
if(n==1)
{
cout<<1<<endl;
return 0;
}
for(int i=0;i<n;i++)
cin>>a[i];
set<int>s;
int i=0;
int j=0;
int m=0;
// int l=0;
while(j<n)
{
if(s.count(a[j])==0)
{
    s.insert(a[j]);
    j++;
}
while(j<n&&s.count(a[j])!=0)
{
s.erase(a[i]);
i++;
}
// cout<<j<<"->"<<i<<endl;
// l=j-i+1;
// cout<<"L"<<l<<endl;
if(j<n&&i<n)
m=max(m,j-i+1);

}
cout<<m<<endl;

}