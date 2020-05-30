#include<iostream>

using namespace std;

int pila[1000000];
string k;

int insertar(int top)
{pila[top]=1; return ++top;}

int extraer(int top)
{pila[top]=0; return --top;}

void salida(int vacia)
{
 if(vacia==0)
    cout<<"SI";
 else
    cout<<"NO";
}

int main()
{
  int x=0,y=0;
  cin>>k;
  while(x!=k.size())
  {
    if(k[x]=='(')
       y=insertar(y);
    else
    {  y=extraer(y);
       if(y<0)
       { x=-1; break;}
    }
    x++;
}
  salida(y);
}
