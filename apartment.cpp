#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int m;
cin>>m;
int k;
cin>>k;
int a[n];
int b[m];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<m;i++)
cin>>b[i];
sort(a,a+n);
sort(b,b+m);
int f=0;
int s=0;
int c=0;
while(f<n&&s<m)
{
if(abs(a[f]-b[s])<=k)
{
c++;
f++;
s++;
}
else if(a[f]>b[s])
{
    s++;
}
else
f++;

}
cout<<c<<endl;



 

}