#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
    int x1,y1,x2,y2,x3,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
long long k=((y3-y1)*1LL*(x2-x1))-((y2-y1))*1LL*(x3-x1);
if(k<0)
cout<<"RIGHT"<<endl;
else if(k==0)
cout<<"TOUCH"<<endl;
else
cout<<"LEFT"<<endl;


    }
}