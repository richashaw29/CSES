 #include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int q;
cin>>q;
while(q-->0)
{
long long k;
cin>>k;
long long sum=0;
long long left=0;
int dn=0;
long long o=0;
int r=0;
long long p=1;
for(int i=1;i<=17;i++)
{
sum=sum+9*i*p;
if(k<=sum)
{
left=k-o;
dn=i;
break;
}
o=sum;
p=p*10;
}
p=1;

for(int i=1;i<=dn-1;i++)
{
p=p*10;
}
o=p-1;
// cout<<o<<" *"<<left<<" "<< dn;
o=o+left/dn;
r=left%dn;
if(r!=0)
o=o+1;
if(r==0)
r=dn;
int ans=0;

r=dn-r+1;
while(r-->0)
{
ans=o%10;
o=o/10;
}
cout<<ans<<endl;
}
}
