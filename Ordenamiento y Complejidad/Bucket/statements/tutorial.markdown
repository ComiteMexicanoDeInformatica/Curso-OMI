# Descripción

Este problema es muy directo, se nos pide implementar dos funciones ,una que reciba un arreglo y lo sume en un arregl global, la cual se ve asi :

    int k[110];
    void inicio(int N,int M[])
    {
    for(int i=0;i!=N;i++)
    {
    k[M[i]]++;
    }
    }
ahora tenemos en $k$ el número de veces que se repitio cada número, recuerda que los números que se nos daban estan dentro del rango $0 \leq 100 $ .Ahora solo tenemos que hacer la funcion "pregunta" , que regresara $ k $[$x$].

    int pregunta(int x)
    {
    return k[x];
    }
 