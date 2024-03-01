#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
    int n;
    cin>>n;
    string s1;
    string s2;
    cin>>s1>>s2;
    string ans;
   int p=1;
    ans=s1[0];
    int index=-1;
    int f=0;
    for(int i=0;i<n-1;i++)
    {
     if(s2[i]<s1[i+1]&&f!=1)
     {
        ans=ans+s2[i];
        f=1;
        index=i;
        break;
     }
     else if(s2[i]>s1[i+1])
     
     {
        ans=ans+s1[i+1];
        p=1;  
     }else 
     {
 
        ans=ans+s1[i+1];
        p++;
     }
    }
    if(f==1)
    {
for(int i=index+1;i<n-1;i++)
{
    ans=ans+s2[i];
}
}
ans=ans+s2[n-1];
cout<<ans<<endl;
 
// int p=1;
// for(int i=0;i<n-1;i++)
// {
// if(s2[i]==s1[i+1])
// {
//     p++;
// }
// if(s2[i]>s1[i+1])
// {
//     p=1;
// }
 
// }
cout<<p<<endl;
}
 
    }