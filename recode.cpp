#include<bits/stdc++.h>
using namespace std;
int main()
{
int k,n;
cin>>k>>n;
int s=sqrt(k);
vector<int>e;
int max=1;
for(int i=s;i>=2;i--)
{
int m=i*i;
if(k>=m)
{
k=k-m;
e.push_back(i);
}
}
while(k>0)
{
k=k-1;
e.push_back(1);
}

for(int i=0;i<e.size();i++)
{
max=max*e[i];
}
// cout<<max<<endl;
e.push_back(max);
int no=e.size();
// cout<<no<<endl;
if(no<=n)
{
for(int i=1;i<max;i++)
{
    if(e.size()==n)
    break;
    if(max%i!=0)
    e.push_back(i);
    }
    sort(e.begin(),e.end());
for(int i=0;i<e.size();i++)
cout<<e[i]<<" ";

}
else
{
    cout<<"not possible"<<endl;

}

}