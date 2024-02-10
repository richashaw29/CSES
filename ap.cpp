 #include<bits/stdc++.h>
using namespace std;
long long s=0;
void cost(int n)
{
if(n<2)
return ;
s=s+n;
 cost((n/2)+1);
 cost(n/2);



}
int main()
{
    long long n;
    cin>>n;
    cost(n);
    cout<<s<<endl;
}
