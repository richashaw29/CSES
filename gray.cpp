 #include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(long long i=0;i<pow(2,n);i++)
{
int v=i^(i>>1);
int l=n;
string s="";
while(l-->0)
{
if(v&1==1)
s=s+to_string(1);
else
s=s+to_string(0);
v=v>>1;
}
cout<<s<<endl;

}
}
