#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>p;
  for(int i=0;i<n;i++)
  p.push_back(i+1);
  
 while(p.size()>1)
 {
     vector<int>copy;
  for(int i=0;i<p.size();i++)
  {
 if(i%2==0 )
 {
 copy.push_back(p[i]);
 }

 else
 cout<<p[i]<<" ";
  }
  int f=-1,t=0;
if(p.size()%2==0)
{
 p=copy;
}
else
{
    int t=copy.back();
    copy.pop_back();
    p.clear();
    p.push_back(t);
    for(int i=0;i<copy.size();i++)
    p.push_back(copy[i]);
    
}
}
cout<<p[0]<<" ";
}
