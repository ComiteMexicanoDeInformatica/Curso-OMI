#include<iostream>
using namespace std;

int main()
{
int r,s,b,ns;
cin>>r>>s>>b;
ns=r*s;
if(ns<=b)
{
cout<<ns<<" ";
}
else
{
    cout<<b<<" ";
}
if(ns<=b)
{
    cout<<b-ns;
}
else
{
    cout<<0;
}
cout<<endl;
}
