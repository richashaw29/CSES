#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int main()
{
int t;
cin>>t;
while(t-->0)
{

int n;
cin>>n;
for(int i=1;i<=26;i++)
{

for(int j=1;j<=26;j++)
{
char ch1='a'+i-1;
char ch2='a'+j-1;
int p=(n-(i+j));
if(p<=26)
{
char ch3='a'+p-1;
cout<<ch1<<ch2<<ch3<<endl;
return 0;
}


}
}
}
}