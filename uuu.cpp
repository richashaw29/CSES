#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t-->0)
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int f=0;
sort(arr,arr+n);
int min=arr[0];
if(min!=arr[1])
cout<<"yes"<<endl;
else
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]%min!=0)
        f=1;
    }
    
    if(f==1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}
}
}