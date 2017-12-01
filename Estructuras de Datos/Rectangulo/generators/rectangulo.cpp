#include<iostream>
#include<stdio.h>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    freopen("10.in","w",stdout);
    srand(time(NULL));
    int x=rand()%1000000;
    x++;
    cout<<x<<endl;
    for(int i=0;i!=x;i++)
    {
        cout<<rand()%1000000<<" ";
    }


}
