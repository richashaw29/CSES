#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t-->0)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
int f,s,t,fo;
f=a[n-1];
s=a[0];
t=a[n-2];
fo=a[1];
int m=abs(f-s)+abs(s-t)+abs(t-fo)+abs(fo-f);
cout<<m<<endl;

}
}