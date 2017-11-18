#include<iostream>
#include<stdio.h>
using namespace std;

int arbol[150000][5];
int nods=0;
void crea(int a,int b)
{
    ///ponlo al reves si WA
    if(b<arbol[a][0])
    {
        if(arbol[a][1]==0)
        {
            arbol[a][1]=nods;
            arbol[nods][0]=b;
        }
        else
        {
            crea(arbol[a][1],b);
        }
    }
    else
    {
        if(arbol[a][2]==0)
        {
            arbol[a][2]=nods;
            arbol[nods][0]=b;
        }
        else
        {
            crea(arbol[a][2],b);
        }
    }
}


int preorden(int a)
{
    cout<<arbol[a][0]<<" ";
    if(arbol[a][1]!=0)
    {
        preorden(arbol[a][1]);
    }
    if(arbol[a][2]!=0)
    {
        preorden(arbol[a][2]);
    }
}
int inorden(int a)
{

    if(arbol[a][1]!=0)
    {
        inorden(arbol[a][1]);
    }
    cout<<arbol[a][0]<<" ";
    if(arbol[a][2]!=0)
    {
        inorden(arbol[a][2]);
    }

}
int posrden(int a)
{

    if(arbol[a][1]!=0)
    {
        posrden(arbol[a][1]);
    }

    if(arbol[a][2]!=0)
    {
        posrden(arbol[a][2]);
    }
    cout<<arbol[a][0]<<" ";

}
int main()
{

int a,b,c;
int x=0;
cin>>a;
while(x!=a)
{
    cin>>c;
    if(x==0)
    {
        arbol[0][0]=c;
        arbol[0][1]=0;
        nods++;
    }
    else
    {
        crea(0,c);
        nods++;
    }
    x++;
}
preorden(0);
cout<<endl;
inorden(0);
cout<<endl;
posrden(0);
}
