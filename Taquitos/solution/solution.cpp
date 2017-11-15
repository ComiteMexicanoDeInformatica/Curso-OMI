#include <iostream>
#define maxcola 100000
using namespace std;
/**Definir la estructura de datos cola_circular donde:
    *maxcola es una constante que denota el número máximo de elementos que podrá almacenar la cola
    *v es un vector estático de tamaño maxcola
    *frente es un índice que controla el lado por donde se extraen elementos
    *final es un índice que controla el lado por donde se insertan elementos a la cola
    *cont es una variable entera que cuenta cuantos elementos existen en la cola.
**/
struct cola_circular
{
    int v[maxcola];
    int frente=0, final=-1, cont=0;
    void insertar(int dato)
    {
        final=(final+1)%maxcola;
        v[final]=dato;
        cont++;
    }
    int consulta()
    {
        return v[frente];
    }
    void extraer()
    {
        frente=(frente+1)%maxcola;
        cont--;
    }
    bool vacia()
    {
        return cont==0;
    }
    bool llena()
    {
        return cont==maxcola;
    }
    int longitud()
    {
        return cont;
    }
};

/**Declarar una variable de tipo cola circular, es decir crear una cola llamada fila**/
cola_circular fila;
int n, t, oper,venta=0;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>oper;
        switch(oper)
        {
            case 1:
                cin>>t;
                if(!fila.llena())
                    fila.insertar(t);
                break;
            case 2:
                if(!fila.vacia())
                {
                    venta+=fila.consulta();
                    fila.extraer();
                }
                break;
            case 3:
                cout<<fila.longitud()<<endl;
                break;
            case 4:
                cout<<venta<<endl;
                    break;
        }
    }
    return 0;
}
