#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
#define ll long long 
#define ld long double 
 
//*---------------------CONSTANTS---------------------*/
#define M 1000000007
#define N 100005
 
//*---------------------PB_DS---------------------*/
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
  
   int find(int n,int k)
   {
       if(n==1)
       return 1;
       if(k<=(n+1)/2)
       {
        if(k>n/2)
        return 2*k%n;
       return 2*k;
       
       }int t=find(n/2,k-(n+1)/2);
       if(n%2==1)
       return 2*t+1;
       else
       return 2*t-1;
      
   }
int main()
{
    int q;
    cin>>q;
    while(q-->0)
    {
  int n,k;
  cin>>n>>k;
 cout<<find(n,k)<<endl;
}}