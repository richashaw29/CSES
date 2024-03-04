#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int x;
cin>>x;
map<int,vector<int> >m;
int arr[n];
int s=0,e=0;
for(int i=0;i<n;i++)
{
int k;
cin>>k;
m[k].push_back(i+1);
arr[i]=k;
}
sort(arr,arr+n);
int f=0;
int e1=0,e2=0,e3=0,e4=0;
int flag1=-1;
int flag2=-1;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
f=x-arr[i]-arr[j];
s=j+1;
e=n-1;
flag1=0;
while(s<e)
{

if(f==arr[s]+arr[e])
{
e3=arr[s];
e4=arr[e];
flag1=1;
break;
}
else if(f<arr[s]+arr[e])
{
    e--;
}
else
s++;
}
if(flag1==1){
flag2=1;
e1=arr[i];
e2=arr[j];
}
}}


if(flag2==1)
{
    int p1=m[e1][m[e1].size()-1];
m[e1].pop_back();
int p2=m[e2][m[e2].size()-1];
m[e2].pop_back();
int p3=m[e3][m[e3].size()-1];
m[e3].pop_back();
int p4=m[e4][m[e4].size()-1];
cout<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<endl;
}
else
cout<<"IMPOSSIBLE"<<endl;

}                                                                                                                                                                                                                                                                                                                        