#include<bits/stdc++.h>
using namespace std;
 int ori(int x1,int y1,int x2,int y2,int x3,int y3)
 {
     long long k=((y3-y1)*1LL*(x2-x1))-((y2-y1))*1LL*(x3-x1);
if(k<0)
return 1;
else if(k==0)
return 0;
else
return 2;
 }
bool onseg(int x1,int y1,int x2,int y2,int x3,int y3)
{
if((x3<=max(x1,x2))&&(x3>=min(x1,x2))&&(y3<=max(y1,y2))&&(y3>=min(y1,y2)))
return true;
else 
return false;
    
}






int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
    int x1,y1,x2,y2,x3,y3,x4,y4;
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
if((ori(x1,y1,x2,y2,x3,y3)!=ori(x1,y1,x2,y2,x4,y4))&&(ori(x3,y3,x4,y4,x1,y1)!=ori(x3,y3,x4,y4,x2,y2)))
 cout<<"YES"<<endl;
 else if(ori(x1,y1,x2,y2,x3,y3)==0&&onseg(x1,y1,x2,y2,x3,y3))
 cout<<"YES"<<endl;
 else if(ori(x1,y1,x2,y2,x4,y4)==0&&onseg(x1,y1,x2,y2,x4,y4))
 cout<<"YES"<<endl;
 else if(ori(x3,y3,x4,y4,x1,y1)==0&&onseg(x3,y3,x4,y4,x1,y1))
 cout<<"YES"<<endl;
 else if(ori(x3,y3,x4,y4,x2,y2)==0&&onseg(x3,y3,x4,y4,x2,y2))
 cout<<"YES"<<endl;
 else
 cout<<"NO"<<endl;
    }
}