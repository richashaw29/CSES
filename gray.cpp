 #include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string k;
k=string('0',9);
string p=string("0",7);
p=p+'1';
// cout<<k<<endl;
cout<<p<<endl;
for(int i=2;i<pow(2,n);i++)
{int t=i;
string s="";
string g="";
while(t>0)
{
if(t&1)
s=to_string(1)+s;
else
s='0'+s;
t=t>>1;
}
// cout<<s<<endl;
// cout<<s[0]<<endl;
// cout<<g<<endl;
int q=s.length();
g=s[0];
for(int j=1;j<q;j++)
{
    // cout<<'*';

string k=to_string(g[j-1]^s[j]);
g=g+k;
}

// cout<<g<<endl;
}}