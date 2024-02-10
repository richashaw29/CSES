#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
int n;
cin>>n;
int x;
cin>>x;
int a[n];
unordered_map<int,int> m;
for(int i=0;i<n;i++){
cin>>a[i];
m[a[i]]=i;
}
sort(a,a+n);
int f=0;
int l=n-1;
int p=0,q=0;
int c=-1;
while(f<l)
{
if(a[f]+a[l]==x)
{
    // cout<<"*";
p=a[f];
q=a[l];
c=0;
break;
}
else if(a[f]+a[l]>x)
l--;
else
f++;
}
if(c!=0){
cout<<"IMPOSSIBLE";
return 0;
}
auto it=m.find(p);
int h=it->second;
m.erase(p);
auto i=m.find(q);
int o=i->second;
 cout<<h+1<<" "<<o+1<<endl;

}