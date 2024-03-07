 #include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>ar;
long long  n;
ll ad(int i,ll sum1,ll sum2)
{
if(i==n)
{
return abs(sum1-sum2);
}
return min(ad(i+1,sum1+ar[i],sum2),ad(i+1,sum1,ar[i]+sum2));

}

int main()
{
    cin>>n;

for(int i=0;i<n;i++)
{
int k;
cin>>k;
ar.push_back(k);

}
ll m;
m=ad(0,0,0);
cout<<m<<endl;
}