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
cin>>a[i];
int fi=0;
int fe=a[0];
int ff=0;
int lf=0;
int li=n-1;
int le=a[n-1];
int c=0;
for(int i=0;i<n;i++)
{
if(a[i]==fe)
{
ff++;
fi=i;
}
}
for(int i=n-1;i>=0;i--)
{
if(a[i]==le)
{
lf++;
li=i;
}
}
if(fe==le)
{
c=(n-(ff+lf));

}else{
    c=n-max(lf,ff);
}

cout<<c<<endl;

}
}