#include<bits/stdc++.h>
using namespace std;
long long m=(long long)1e9+7; 

int main(){
long long  n;
cin>>n;
long long arr[n+1];
arr[1]=0;
for(int i=2;i<=n;i++)
{
arr[i]=((i*arr[i-1])+(i%2?-1:1))%m;
}
cout<<arr[n]<<endl;
}
