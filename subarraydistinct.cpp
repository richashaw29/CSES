#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
long long n;
cin>>n;
long long k;
cin>>k;
long long  a[n];
for(long long i=0;i<n;i++)
cin>>a[i];
map<long long,long long>m;
long long j=0,i=0,c=0;
for(j=0;j<n;j++)
{
m[a[j]]++;
while(m.size()>k)
{
m[a[i]]--;
if(m[a[i]]==0)
m.erase(a[i]);
i++;
}

c+=j-i+1;

}
cout<<c<<endl;


}