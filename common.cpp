#include<bits/stdc++.h>
using namespace std;
int main()
{
  const  int ma=1e6+1;
vector<int> freq(ma,0);
int n;
cin>>n;
for(int i=0;i<n;i++)
{
int k;
cin>>k;
freq[k]++;
}
vector<int>mult(ma,0);
for(int i=1;i<ma;i++)
{
for(int j=i;j<ma;j+=i)
{
if(freq[j])
{
mult[i]+=freq[j];
}}
}
int a=0;
for(int i=1;i<ma;i++)
{
if(mult[i]>1)
a=i;
}
cout<<a<<endl;
}
