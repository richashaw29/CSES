#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
const int m=1e9+7;
int main()
{
int n;
cin>>n;
int a=5;
int k=0;
while(a<=n)
{
k=k+(n/a);
// cout<<k<<"  "<<endl;  
a=a*5;

}
cout<<k<<endl;
}