#include <iostream>
#include <fstream>

using namespace std;

int entrada[1002][4];
int salida[1002][4];
int SalidaConcursante[1002][4];

int main() {
    // lee "data.in" para obtener la entrada original.
    int n;
    ifstream entrada_original("data.in", ifstream::in);
    entrada_original >> n;
    for (int y=1; y<=3; y++)
        for (int x=1; x<=n; x++)
            entrada_original >> entrada[x][y];
    /// lee entrada estándar para obtener la salida del concursante.

    for (int y=1; y<=3; y++)
        for (int x=1; x<=n; x++)
            if (!(cin >> SalidaConcursante[x][y]))
            {
                /// cualquier cosa que imprimas a cerr se ignora, pero es útil
                /// para depurar con debug-rejudge.
                cerr << "Error leyendo la salida del concursante" << endl;
                cout << 0.0 << endl;
                return 0;
            }

    /// Determina si la respuesta es correcta.


    /// Verificar que los números no ceros de la entrada original,
    /// sean iguales que la salida del concursante

    bool numerosNoCeroIgualesEntrada = true;
    for (int y=1; y<=3; y++)
        for (int x=1; x<=n; x++)
            if (entrada[x][y]>0 && entrada[x][y]!=SalidaConcursante[x][y])
                numerosNoCeroIgualesEntrada = false;

    /// Verificar que los números de salida del concursante estén seguidos
    /// y tengan un mismo borde común

    int numerosSeguidosConcursante = 0;
    for (int y=1; y<=3; y++)
    {
        for (int x=1; x<=n; x++)
        {
            if (SalidaConcursante[x][y]==n*3) numerosSeguidosConcursante++;
            else if (y==2 && x>1 && x<n)
            {
                if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y-1]) numerosSeguidosConcursante++;          /// Norte
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y+1]) numerosSeguidosConcursante++;     /// Sur
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x-1][y]) numerosSeguidosConcursante++;     /// Oeste
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x+1][y]) numerosSeguidosConcursante++;     /// Este
            }
            else if (y==2 && x==1)
            {
                if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y-1]) numerosSeguidosConcursante++;          /// Norte
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y+1]) numerosSeguidosConcursante++;     /// Sur
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x+1][y]) numerosSeguidosConcursante++;     /// Este
            }
            else if (y==2 && x==n)
            {
                if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y-1]) numerosSeguidosConcursante++;          /// Norte
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y+1]) numerosSeguidosConcursante++;     /// Sur
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x-1][y]) numerosSeguidosConcursante++;     /// Oeste
            }
            else if (y==1 && x>1 && x<n)
            {
                if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y+1]) numerosSeguidosConcursante++;          /// Sur
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x-1][y]) numerosSeguidosConcursante++;     /// Oeste
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x+1][y]) numerosSeguidosConcursante++;     /// Este
            }
            else if (y==1 && x==1)
            {
                if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y+1]) numerosSeguidosConcursante++;     /// Sur
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x+1][y]) numerosSeguidosConcursante++;     /// Este
            }
            else if (y==1 && x==n)
            {
                if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y+1]) numerosSeguidosConcursante++;     /// Sur
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x-1][y]) numerosSeguidosConcursante++;     /// Oeste
            }
            else if (y==3 && x>1 && x<n)
            {
                if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y-1]) numerosSeguidosConcursante++;          /// Norte
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x-1][y]) numerosSeguidosConcursante++;     /// Oeste
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x+1][y]) numerosSeguidosConcursante++;     /// Este
            }
            else if (y==3 && x==1)
            {
                if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y-1]) numerosSeguidosConcursante++;          /// Norte
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x+1][y]) numerosSeguidosConcursante++;     /// Este
            }
            else if (y==3 && x==n)
            {
                if (SalidaConcursante[x][y]+1==SalidaConcursante[x][y-1]) numerosSeguidosConcursante++;          /// Norte
                else if (SalidaConcursante[x][y]+1==SalidaConcursante[x-1][y]) numerosSeguidosConcursante++;     /// Oeste
            }
        }
    }

    if (numerosNoCeroIgualesEntrada && numerosSeguidosConcursante==n*3)
    {
        cout << 1.0 << endl;
        return 0;
    }

    // Hacer una salida errónea por omisión

    cerr << "Salida incorrecta" << endl;
    cout << 0.0 << endl;

    return 0;
}
