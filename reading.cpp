#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
reverse(a,a+n);
int max=2*a[0];
int k=max;
long long ans=a[0];
vector<int>l;
for(int i=1;i<n;i++)
{
ans+=a[i]+0ll;
if(2*a[i]<=max)
{
max-=2*a[i];
}
else{
l.push_back(a[i]);
}

}
if(l.size()==0)
{
    cout<<k<<endl;

}
else{
cout<<ans<<endl;
}



}