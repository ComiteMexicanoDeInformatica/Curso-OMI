#include<iostream>
using namespace std;

int main()
{
int r,s,b,ns;
cin>>r>>s>>b;
ns=r*s;
if(ns<=b)
{
cout<<ns<<" "<<b-ns;
}
else
{
    cout<<b<<" "<<0;
}

cout<<endl;
}
