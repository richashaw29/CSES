#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int t=n;
int c=0;
vector<int>a;
for(int i=0;i<n;i++)
{
    int v;
    cin>>v;
    a.push_back(v);
}
for(int i=0;i<n;i++)
{
    int v;
    cin>>v;
    if(a[i]!=v)
    cout<<c<<endl;
    c++;
    }
}