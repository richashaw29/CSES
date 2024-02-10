#include <iostream>
#include <algorithm>
#include<vector>
#include<limits.h>
#include<cmath>
 #include<unordered_set>
using namespace std;
const int m=1e9+7;
int main()
{
int n;
cin>>n;
while(n-->0)
{

    int a,b;
    cin>>a>>b;
    long long  s=a+b+0LL;
    int f=-1;
    int d;
    if(a==0&&b==0)
    f=1;
  else  if(a==0||b==0||s%3!=0)
    f=0;
else
{
d=abs(a-b);
if(d<=s/3)
f=1;
}
if(f==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}


}