#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
int pos[n+1];
for(int i=0;i<n;i++)
{
cin>>arr[i];
pos[arr[i]]=i;
}
int c=1;
for(int i=1;i<n;i++)
{
if(pos[i]>pos[i+1])
{
    c++;
}
}
cout<<c<<endl;


} 