#include <stdio.h>
#include "AdivinaElNumero.h"
#include <limits.h>
#include <algorithm>
using namespace std;


long long l,r,numero,preguntas,last;
bool f=false;

long long pista(long long x){

    last = x;
    preguntas ++;

    if(x == numero) {
            f=true;
            return 0;
    }
    if(x < numero) return 1;
    if(x > numero) return -1;
}
int main()
{
    /// Modificar l y r al tamanio del rango donde quieres que busque tu codigo siempre y cuando l <= r
    l = 1;
    r = 200;
    /// numero es el que debes adivinar, puedes modificarlo en el archivo sample.in siempre y cuando l <= numero <= r
    scanf("%lld",&numero);
    r = max(numero, r);
    adivina(l,r);

    if(last!=numero)
        printf("No encontraste el numero! :(");
    if(last == numero){
        if(preguntas < 63){
            printf("Obtuviste el 100%% del puntaje de este caso! :), hiciste %lld preguntas",preguntas);
        }
        if(preguntas > 63 && preguntas <= 100){
            printf("Obtuviste el 50%% del puntaje de este caso :|, hiciste %lld preguntas",preguntas);
        }
        if(preguntas > 100){
            printf("No obtuviste puntaje en este caso :(, hiciste %lld preguntas",preguntas);
        }
    }
    return 0;
}
