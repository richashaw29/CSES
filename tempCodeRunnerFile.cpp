#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;

while(t-->0)
{int n;
cin>>n;
int a[n];
vector<int>aa;
vector<int>b;

for(int i=0;i<n;i++)
{
cin>>a[i];
aa.push_back(i+1);
b.push_back(i+n);
}
int i=0;
int j=0;
int c=0;
int l=0;
while(j<n)
{
if(aa[i]<b[j])
{
c++;
i++;
}
else{
l=max(l,c);
c=0;
j++;
i=j;
}

}
cout<<l<<endl;
}}