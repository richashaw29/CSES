#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
int c=0;
void tower(int s,int d,int h,int n,int &c)
{
    c++;
if(n==1)
{
cout<<s<<" "<<d<<endl;
return;
}tower(s,h,d,n-1,c);
cout<<s<<" "<<d<<endl;
tower(h,d,s,n-1,c);
}
int main()
{
int n;
cin>>n;
cout<<(pow(2,n)-1)<<endl;
tower(1,3,2,n,c);
}