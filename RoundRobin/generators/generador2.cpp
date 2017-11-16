#include<iostream>
#include<stdio.h>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main()
{
    freopen("10.in","w",stdout);
srand(time(NULL));
int a=rand()%1000;
a++;
int b=rand()%100;
b++;
cout<<a<<" "<<b<<endl;
for(int i=0;i<a;i++)
{
    cout<<i+1<<" "<<(rand()%1000)+1<<endl;

}

}
