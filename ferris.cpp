#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x;
cin>>n>>x;
int a[n];
vector<int>b;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n,greater<int>());
int s=n-1;
int ng=0;
for(int i=0;i<=s;i++)
{
    // cout<<i<<"*"<<ng<<endl;
if(a[i]+a[s]+0LL<=x)
{
ng++;
s--;
}
else
ng++;
}
cout<<ng<<endl;
}