#include<iostream>
using namespace std;

int main()
{
int a,b,c,d;
cin>>a>>b>>c;
d=a*b;
cout<<d<<" ";
if(d<=c)
{
    cout<<c-d;
}
else
{
    cout<<0;
}
cout<<endl;
}
