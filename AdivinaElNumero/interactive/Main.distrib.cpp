#include <stdio.h>
#include "AdivinaElNumero"
#include <limits.h>
using namespace std;


long long l,r,numero,preguntas;
bool f=false;

long long pista(long long x){

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
    /// Modificar l y r al tamaño del rango donde quieres que busque tu codigo siempre y cuando l <= r
    l = 1;
    r = 100;
    /// numero es el que debes adivinar, puedes modificarlo en el archivo sample.in siempre y cuando l <= numero <= r
    scanf("%lld",&numero);
    adivina(l,r);

    if(!f)
        printf("No encontraste el numero! :(");
    if(f){
        if(preguntas < 63){
            printf("Obtuviste el 100% del puntaje de este caso! :), hiciste %lld",preguntas);
        }
        if(preguntas > 63 && preguntas <= 100){
            printf("Obtuviste el 50% del puntaje de este caso :|, hiciste %lld",preguntas);
        }
        if(preguntas > 100){
            printf("No obtuviste puntaje en este caso :(, hiciste %lld",preguntas);
        }
    }
	return 0;
}
