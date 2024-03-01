#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
 
  int  t;
  cin>>t;
while(t-->0)
{
int n;
cin>>n;
int  d=log2(n);
int ans=0;

for(int i=0;i<=d;i++)
{
if(n>=pow(2,i)&&n<pow(2,i+1))
{
ans=pow(2,i);
break;
}
}

cout<<ans<<endl;

}

}
}