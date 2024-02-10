#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x-->0)
    {
int n;
cin>>n;
int c=0;
for(int i=1;i*i<= n;i++)
{
if(n%i==0)
{
    if(i==n/i)
c=c+1;
else
c+=2;
// cout<<(n%i)<<n/i<<endl;

}

}
cout<<c<<endl;
}
}