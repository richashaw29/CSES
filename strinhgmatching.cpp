#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,k;
cin>>s>>k;
int n=s.size();
int m=s.size();
if(m>n)
cout<<"0"<<endl;
else
{
int c=0;
 size_t found=s.find(k);
 while (found != string::npos)
{
c++;
found = s.find(k, found+1);
}
cout<<c<<endl;
}}