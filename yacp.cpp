#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t-->0)
{
int n;
cin>>n;
int c=0;
if(n>=15)
{
    c=n/15;
n=n%15;
}
if(n>=10)
{
    c+=n/10;
    n=n%10;
}
if(n>=6)
{
    c+=n/6;
    n=n%6;
    }

    
if(n>=3)
{
    c+=n/3;
    n=n%3;
    }


if(n>=1)
{
    c+=n/1;
    n=n%1;
    }

    cout<<c<<endl;
}