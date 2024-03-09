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
  
int main()
{
  int n,k;
  cin>>n>>k;
  ordered_set p;
  for(int i=0;i<n;i++)
  {
    p.insert(i+1);
  }  
  int j=0;
   
  while(p.size()>0)
  {
      
      int no;
no=(j+k)% p.size();
auto it=p.find_by_order(no);
cout<<*it<<" ";
p.erase(p.find_by_order(no));
  j=no;    
  }
  
  
 
}