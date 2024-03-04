#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
stack<pair<int,int> > s;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
// cout<<arr[i]<<" ";
while(!s.empty())
{
if(s.top().first<arr[i])
{
cout<<s.top().second+1<<" ";
break;
}
else
s.pop();
}

if(s.empty())
cout<<0<<" ";
s.push(make_pair(arr[i],i));

}

}
