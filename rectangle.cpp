#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
int  n;
cin>>n;
while(n-->0)
{
int a,b;
cin>>a>>b;
if(a%2==0||b%2==0)
{
if(a/2!=b||b/2!=a)
{
cout<<"Yes";
return 0;
}
}
cout<<"No";


}
}