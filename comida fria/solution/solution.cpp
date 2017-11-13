#include<iostream>
using namespace std;

int main()
{
int a,b,c,d=999999999,e=-1;
cin>>a;
c=0;
//cout<<d;
for(int i=0;i!=a;i++)
{
    cin>>b;
    c+=b;
    d=min(d,b);
    e=max(e,b);
}
cout<<d<<" "<<e<<" "<<c/a;

}
