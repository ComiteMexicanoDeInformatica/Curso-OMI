#include<iostream>
#include<ctime>
#include<cstdlib>
#include"Bucket.h"
using namespace std;
int cosa[1000];
int muhs[1000];
int n;
int main()
{

srand(time(NULL));
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>cosa[i];
    muhs[cosa[i]]++;
}
inicio(n,cosa);
int x=0;
for(int i=0;i<=100;i++)
{
    if(muhs[i]!=pregunta(i))
    {
        x=1;
    }
}
if(x==1)
{
    cout<<0;
}
else
{
    cout<<1;
}
}
