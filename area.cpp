 #include<bits/stdc++.h>
using namespace std;
int main()
{

long long x,y;
cin>>x>>y;
long long e,f;
e=-1;
f=-1;
for(long long i=-10e17;i<=10e17;i++)
{
float b=(2-(x*i))/y;
long long c=(long long )b;
if(b==c)
{
e=i;
f=b;

}


}
if(e!=0)
{
    cout<<e<<" "<<f<<endl;
}
}