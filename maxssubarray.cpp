#include <iostream>
#include <algorithm>
#include<limits.h>
using namespace std;
const int m=1e9+7;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
int p=0;
long long max=INT_MIN;
long long sum=0;
while(p<n)
{
sum=sum+arr[p];
if(sum>max)
max=sum;
if(sum<0)
sum=0;
p++;
}
    cout<<max<<endl;

}