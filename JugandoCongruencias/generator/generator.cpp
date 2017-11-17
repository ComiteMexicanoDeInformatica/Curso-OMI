#include<iostream>
#include<ctime>
#include<cstdlib>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void solucion(){
    int a, b, c, n, aux, contador=0;

    cin >> b >> c >> n;
    aux=b%c;

    for(int i=0;i<n;i++){
        cin >> a;
        if(a%c == aux){
            contador++;
        }
    }

    cout << contador;
}


int main(){
    int B,C,N,aux,numCasos=30;


    srand(time(NULL));

    for(int i=0;i<numCasos;i++){
        ofstream in;
        stringstream ss;
        ss << i;
        string str = ss.str()+".in";
        in.open(str.c_str());

        C=rand()%101;
        if(C==1){
            C++;
        }
        if(i==numCasos-1){
            C=100;
        }
        B=rand()%1001;
        if(B==0||B==1)
            B=2;
        if(i>numCasos/2)
            B=B*(-1);
        in << B << " ";
        in << C << endl;
        N=rand()%1000001;
        if(i==0)
            N=1;
        if(i==numCasos-1)
            N=1000000;
        in << N << endl;
        for(int j=0;j<N;j++){
            aux=rand()%10001;
            in << aux << endl;
        }

        in.close();
    }

    return 0;
}
