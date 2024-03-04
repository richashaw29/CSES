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
if(n==1)
cout<<"second"<<endl;
else{
int a[n];
int ans=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]%2!=0&&i>0)
ans^=a[i];
}
if(ans==0)
cout<<"second"<<endl;
else
cout<<"first"<<endl;

}
}


}