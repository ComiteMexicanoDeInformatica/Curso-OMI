#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int lanzaDado(){
    return rand()%6+1;
}

int main(){
    srand(time(NULL));
    cout<<lanzaDado()<<endl;
    return 0;
}
