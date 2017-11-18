#include <iostream>
#include <fstream>
#include <stack>  
using namespace std;
const int maxN = 100000;
stack<int> arriba;
stack<int> abajo;
int placa[(2*maxN)]; 
int salida[(2*maxN)]; 
int siguiente[(2+maxN)]; 
int n;

int push(int num)
{
    int ar = maxN*2;
    int ab = maxN*2;
    int result = 0;
    if(!arriba.empty())
    {
        ar =  arriba.top();
    }
    if(!abajo.empty())
    {
        ab =  abajo.top();
    }
    if(ar>num && ab> num)
    {
        if(ar<=ab)
        {
            arriba.push(num);
            result = 1;
        }
        else
        {
            abajo.push(num);
            result = 2;
        }
    }
    else if(ar>num)
    {
        arriba.push(num);
        result = 1;
    }
    else if(ab>num)
    {
        abajo.push(num);
        result = 2;
    }
    else
    {
        result = -1;
    }
    return result;
}
int pop(int num)
{
    int result = 0;
    if(!arriba.empty())
    {
        if(arriba.top()==num)
        {
            arriba.pop();
            result = 1;
        }
    }
    if(!abajo.empty())
    {
        if(abajo.top()==num)
        {
            abajo.pop();
            result = 2;
        }
    }
    return result;  
}
bool esCero()
{
    bool esValido = true;
    bool siempreArriba = true;
    int res = 0;
    for(int i = 0; i<n ; i++)
    {
        //Quiero saber si es el número más cercano a la derecha
        if(siguiente[placa[i]]== i)
        {
            res = pop(i);
            salida[i] = res;
        }
        else
        {
             res = push(siguiente[placa[i]]);
            salida[i] = res;
            if(res == -1)
            {
                esValido = false;
                break;
            }
            else if(res == 2)
            {
                siempreArriba =false;
            }
        }
    }
    return (!esValido)|siempreArriba;
}
bool validaSalida()
{
    bool esValido = true;
    for(int i = 0; i<n ; i++)
    {
        //Quiero saber si es el número más cercano a la derecha
        if(siguiente[placa[i]]== i)
        {
            if(salida[i]==1)
            {
              if(arriba.empty())
              {
                esValido =false;
                break;
              }
              else if(arriba.top() == i)
              {
                arriba.pop();
              }
              else
              {
                esValido = false;
              }
            }
            else 
            {
              if(abajo.empty())
              {
                esValido =false;
              }
              else if(abajo.top() == i)
              {
                abajo.pop();
              }
              else
              {
                esValido = false;
              }
            }
        }
        else
        {
          if(salida[i]==1)
            {
              if(arriba.empty())
              {
                arriba.push(siguiente[placa[i]]);
              }
              else if(arriba.top() > siguiente[placa[i]])
              {
                arriba.push(siguiente[placa[i]]);
              }
              else
              {
                esValido = false;
                break;
              }
            }
            else
            {
              if(abajo.empty())
              {
                abajo.push(siguiente[placa[i]]);
              }
              else if(abajo.top() > siguiente[placa[i]])
              {
                abajo.push(siguiente[placa[i]]);
              }
              else
              {
                esValido = false;
                break;
              }
            }
        }
    }
    return esValido;
}
int main() {
  // lee "data.in" para obtener la entrada original.
  
  int aux = 0;
  {
    ifstream entrada_original("data.in", ifstream::in);
    entrada_original >> n;
    n = 2*n;
    //Lee el orden de los elementos en la placa
    for(int i = 0; i<n ; i++)
    {
        entrada_original >> placa[i];
        siguiente[placa[i]]= i;
    }
  }



  // lee entrada estándar para obtener la salida del concursante.
  cin >> aux ;
  if(aux==0)
  {
    if(esCero()) 
    {
      cout << 1.0 << endl;
      return 0;
    }   
    else
    {
      cerr << "Salida incorrecta" << endl;
      cout << 0.0 << endl;
      return 0;
    }
  }
  else
  {
    salida[0]=aux;
    for(int i = 1; i<n ; i++)
    {
        cin >> salida[i];
    }
    //checa congruencia(que 2 nodos con el mismo número esten conectados por el mismo lado)
    for(int i = 1; i<n ; i++)
    {
        if(salida[i]!=salida[siguiente[placa[i]]] && (salida[i]==0 || salida[i]==1))
        {
          cerr << "Salida incorrecta" << endl;
          cout << 0.0 << endl;
          return 0;
        }
    }
    if(validaSalida()) 
    {
      cout << 1.0 << endl;
      return 0;
    }   
    else
    {
      cerr << "Salida incorrecta" << endl;
      cout << 0.0 << endl;
      return 0;
    }
  }
  
 
  return 0;
}
