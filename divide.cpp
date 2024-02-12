#include<bits/stdc++.h>
using namespace std;
map<long long ,long long>m;
long long find(long long n)
{
if(n==1)
return 0;
if(m.count(n))
return m[n];
return m[n]=find(n/2)+find((n+1)/2)+n;

}

int main()
{
long long  n;
cin>>n;
cout<<find(n)<<endl;



}