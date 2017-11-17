#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<ctime>
using namespace std;

int main(){
    int a, b, c, n, aux, contador=0;
    freopen("0.in","r",stdin);
    freopen("0.out","w",stdout);
    cin >> b >> c >> n;
    aux=b%c;

    for(int i=0;i<n;i++){
        cin >> a;
        if(a%c == aux){
            contador++;
        }
    }

    cout << contador;

    return 0;
}
