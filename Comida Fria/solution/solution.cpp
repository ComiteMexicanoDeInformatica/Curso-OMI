#include<iostream>
using namespace std;

int main()
{
int n,b,total,minimo=999999999,maximo=-1;
cin>>n;
total=0;
//cout<<d;
for(int i=0;i!=n;i++)
{
    cin>>b;
    total+=b;
    minimo=min(minimo,b);
    maximo=max(maximo,b);
}
cout<<minimo<<" "<<maximo<<" "<<total/n; ///calculo del promedio (total/n )

}
