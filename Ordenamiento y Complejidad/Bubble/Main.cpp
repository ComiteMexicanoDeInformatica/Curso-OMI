#include<iostream>
#include<ctime>
#include<cstdlib>
#include"Bubble.h"
using namespace std;
int cosa[1011];
int n;
int pregunta(int x)
{
    return cosa[x];
}
void cambia(int x)
{
    swap(cosa[x],cosa[x+1]);
}
int main()
{

srand(time(NULL));
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>cosa[n];
}
inicio(n);
int x=0;
for(int i=1;i<n;i++)
{
    if(cosa[i-1]>cosa[i])
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
