#include <iostream>

using namespace std;

int n, m;
int a[10], b[10];

// Revisa que todos los elementos de a dividan a un número dado
bool greaterThanA(int t){
    for (int i=0; i<n; i++)
        if (t%a[i] != 0)
            return false;
    return true;
}

// Revisa que todos los elementos de b sean divisibles entre
// el número dado
bool smallerThanB(int t){
    for (int i=0; i<m; i++)
        if (b[i]%t != 0)
            return false;
    return true;
}

int maxInA() {
    int max = a[0];
    for (int i=1; i<n; i++)
        if(a[i] > max)
            max = a[i];
    return max;
}

int minInB() {
    int min = b[0];
    for (int i=1; i<m; i++)
        if(b[i] < min)
            min = b[i];
    return min;
}

int main()
{
    cin>>n>>m;

    for (int i=0; i<n; i++)
        cin>>a[i];
    for (int i=0; i<m; i++)
        cin>>b[i];

    // Los posibles valores de X estan entre el elemento más grande
    // de A y el más pequeño de B, inclusive
    int i = maxInA();
    int j = minInB();

    // Revisa que valores cumplen el las condiciones para estar
    // "entre" los conjuntos
    for (i; i <= j; i++){
        if(greaterThanA(i) && smallerThanB(i))
            cout << i << ' ';
    }

}
