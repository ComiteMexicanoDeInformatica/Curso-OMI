#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    freopen("20.in","w",stdout);
    srand(time(NULL));
    int x=rand()%1000;
    x++;
    cout<<x<<endl;
    for(int i=0;i!=x;i++)
    {
        cout<<rand()%100000<<" ";
    }
}
