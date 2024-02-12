#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
void tower(int s,int d,int h,int n)
{
if(n==1)
{
cout<<s<<" "<<d<<endl;
return;
}tower(s,h,d,n-1);
cout<<s<<" "<<d;
tower(h,d,s,n-1);
}
int main()
{
int n;
cin>>n;
tower(1,3,2,n);

}