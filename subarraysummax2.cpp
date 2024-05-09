#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int n;
cin>>n;
int a,b;
cin>>a>>b;
int x[n];
for(int i=0;i<n;i++)
cin>>x[i];
int j=0,i=0,c=0,m=0,s=0;
for(int j=0;j<n;j++)
{
    s+=x[j];
    c=j-i+1;
    while(c>b)
    {
        
        s-=x[i];
        i++;
        c=j-i+1;
    }
    if(c<=b&&c>=a)
    {
        m=max(s,m);
        
    }
}
cout<<m<<endl;

}
