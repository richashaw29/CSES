#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
int  n;
cin>>n;
int a[n-1];
a[0]=0;
vector<int>aa;
vector<int>b;
long long sum=0;
for(int i=1;i<n+1;i++){
a[i]=i;
sum+=a[i];
}
if(sum%2!=0)
{
cout<<"NO"<<endl;
return 0;
}
else{
    cout<<"YES"<<endl;
if(n%4==0)
{
    for(int i=1;i<n/4;i++)
    {
aa.push_back(i);
    }
    for(int i=0;i<n/4;i++)
    aa.push_back(a[n-i]);
for(int k=n/4+1;k<aa[aa.size()-1];k++)
b.push_back(k);
}
if(n%4==3)
{
    vector<int>y;
    for(int i=4;i<n+1;i++)
    y.push_back(i);
    aa.push_back(1);
    aa.push_back(2);
    b.push_back(3);
    for(int i=0;i<(n-3)/4;i++){
aa.push_back(i);
    aa.push_back(y.size()-1-i);
    }
    for(int i=4+(n+3)/4;i<=n-(n-3)/4;i++)
    {
        b.push_back(i);
    }
cout<<aa.size()<<endl;
int as=aa.size();
for(int i=0;i<as;i++)
cout<<aa[i]<<" ";
cout<<endl;
cout<<b.size()<<endl;
int bs=b.size();
for(int i=0;i<bs;i++)
cout<<b[i]<<" ";

}
}
}