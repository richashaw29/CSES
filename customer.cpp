#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int a[n];
   int b[n];
    for(int  i=0;i<n;i++)
    {
int k,l;
cin>>k>>l;
a[i]=k;
b[i]=l;
    }
    sort(a,a+n);
    sort(b,b+n);

int i=0;
int j=0;
int c=0;
int m=0;
while(i<n)
{
c++;
int v=a[i];
while(b[j]<=v)
{
c--;
j++;
}
m=max(m,c);
i++;
}
cout<<m<<endl;
}