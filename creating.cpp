#include<bits/stdc++.h>
using namespace std;
string srt(string &str)
{
sort(str.begin(),str.end());
return str;


}
int main()
{


string s;
cin>>s;
s=srt(s);
string c=s;
vector<string>v;
v.push_back(s);
while(true)
{

next_permutation(s.begin(),s.end());
if(s==c)
break;
else
v.push_back(s);


}
cout<<v.size()<<endl;
for(auto s:v)
cout<<s<<endl;
}
