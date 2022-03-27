# Soluci�n

Nos dan un n�mero $n$ y debemos imprimir una lista de $1$ a $n$ .Este problema es muy directo con lo que se pide, hacer un ciclo de $1$ a $n$ e imprimir cada iteraci�n. Se puede resolver con un for o con un while.

Soluci�n con while:
int a=0,b;

    cin>>b;

    while(a!=b)
    {

    a++;

    cout<<a<<endl;

    }

Soluci�n con for:

int n;

cin>>n;

for(int i=0; i<=n; i++)
cout<<i<<endl;
