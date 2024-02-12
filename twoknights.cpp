#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long aw=0;
    int c=0;
    long long ans=0;
    cout<<"0"<<endl;
    for(int i=2;i<=n;i++)
    {
    long long tw=(i*i*1LL)*((i*i*1LL)-1)/2;
    aw=aw+(4*(c));
    c=c+2;
ans=tw-aw;
cout<<ans<<endl;
    }

}
