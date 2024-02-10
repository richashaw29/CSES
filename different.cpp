#include <iostream>
#include <algorithm>
#include<vector>
#include<limits.h>
 #include<unordered_set>
using namespace std;
const int m=1e9+7;
int main()
{
int n;
cin>>n;
int a[n];
int i;
for(i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
vector<int>b;
b.push_back(a[n-1]);
for(int i=0;i<n-1;i++)
{
if(a[i]!=a[i+1])
b.push_back(a[i]);
}
cout<<b.size()<<endl;



}