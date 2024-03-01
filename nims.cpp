#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t-->0)
{
int n;
cin>>n;
int a[n];
int x=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
x=x^a[i];
}
if(x==0)
cout<<"second"<<endl;
else
cout<<"first"<<endl;
}
}