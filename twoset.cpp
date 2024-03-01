#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>a;
vector<int>b;
long long sum=n*1LL*(n+1)/2;
if(sum%2==0)
{
cout<<"YES"<<endl;
long long s=0;
int i=1;
int l=n;
sum=sum/2;
while(true)
{
if(l+s<=sum)
{
a.push_back(l);
s=s+l;
l--;
}
else
break;
if(s+i<=sum){
a.push_back(i);
s=s+i;
i++;
}
else
break;
}
for(int j=i;j<=l;j++)
b.push_back(j);
cout<<a.size()<<endl;
for(int x:a)
{
    cout<<x<<" ";
}
cout<<endl;
cout<<b.size()<<endl;
for(int y:b)
{
    cout<<y<<" ";
}
cout<<endl;
}
else
{
    cout<<"NO"<<endl;
}
}