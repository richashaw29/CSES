#include <iostream>
#include <algorithm>
#include<vector>
#include<limits.h>
 #include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int n=s.length();
map<char,int> m;
for(int i=0;i<n;i++)
{
m[s[i]]++;
}
int e=0;
int o=0;
for(auto i=m.begin();i!=m.end();i++)
{
if((i->second)%2==0)
e++;
else
o++;
}
string ne="";
string y="";
char a='\0';
if(o>1)
{
    cout<<"NO SOLUTION"<<endl;
    return 0;
}
else
{
for(auto p=m.begin();p!=m.end();p++)
{int k;
if(p->second%2!=0)
a=p->first;
k=(p->second)/2;
ne=ne+string(k,p->first);
y=string(k,p->first)+y;
}
if(a!='\0')
ne=ne+a+y;
else
ne=ne+y;

 cout<<ne<<endl;
}}