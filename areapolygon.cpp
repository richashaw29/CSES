#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int x[n+1];
int y[n+1];
for(int i=0;i<n;i++)
{
cin>>x[i]>>y[i];
}
x[n]=x[0];
y[n]=y[0];
long long a=0,b=0;
for(int i=0;i<n;i++)
{
a=a+x[i]*1LL*y[i+1];
b=b+y[i]*1LL*x[i+1];
}
long long ans=a-b;
cout<<abs(ans)<<endl;

}