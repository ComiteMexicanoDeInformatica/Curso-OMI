Para evitar errores y pérdida de tiempo, es importante entender qué tiene que hacer nuestro programa.

1. Leer el número de filas existentes, asientos por fila y boletos vendidos. 
2. Calcular el número de personas que pueden sentarse y el número de personas que deben quedarse paradas. 
3. Escribir los valores calculados. 

# Esqueleto del código
 
```
#include <iostream>

/* Declarar variables */

int main () {
        /* Leer la entrada */
       
        /* Calcular la respuesta */
       
        /* Escribir la salida */
} 
```
  
¿Esto se te hace familiar? Sí, esta es exactamente la misma plantilla con la que comenzamos
para el problema anterior. De hecho, la mayoría de los problemas con los que te encontrarás
se pueden tratar usando un enfoque de lectura-cálculo-escritura.

Como pronto descubrirás, calcular la respuesta generalmente será la parte más compleja de cualquier
solución. A medida que avancemos, querremos dedicar más tiempo a pensar en esta parte y menos a
preocuparnos por leer y escribir los datos de entrada y salida.
Con la práctica suficiente, esperamos que esto último quede en segundo plano. 

# Leyendo la entrada

Al igual que antes, declaramos la biblioteca `iostream` (usando `include`) para utilizar
los comandos de entrada y salida de datos en C++.

```
#include <iostream>
using namespace std;
```

Agregamos una nueva línea, que nos va a dejar ahorrarnos el `std::` antes de `cin`, `cout` y
`endl`.
 
Antes de que podamos leer algo, necesitaremos declarar variables para almacenar los datos.

```
int r, s, b, ns; 
```

Es crucial notar que no importa cómo nombremos nuestras variables,
siempre y cuando los nombres nos recuerden a nosotros, los programadores, qué estamos guardando
en esa variable.

En este caso, tiene sentido que las variables donde guardemos las filas y
asientos sean `r` y `s`, ya que esas fueron las letras utilizadas en la descripción del problema.

La siguiente variable la nombró el autor como `b` porque representa el número de boletos vendidos,
pero cualquier otro nombre también pudo haber sido razonable, como `boletos`, o `t` de tickets.
Las últimas dos variables, `ns` y `np`, se usarán para almacenar nuestras respuestas posteriormente.
(¿Por qué esos nombres?)

Ahora, leemos toda la información de la entrada.
 
```
cin >> r >> s >> b;
```
  
La línea le dice a la computadora que espere tres valores enteros (porque así se declararon las variables).
En particular, los caracteres `>>` le dicen que almacene estos enteros en `r`, `s` y `b` (en ese orden). 

# Calculando la respuesta 

Ahora que tenemos todas las entradas relevantes (`r`, `s`, `b`),
tenemos que calcular el número de personas sentadas y el número de personas paradas.

Comencemos por examinar los datos de muestra. 

||input
7 12
100
||output
100 
||end
   
¿Que esta pasando aqui? En este caso particular, hay 7 filas con 12 asientos cada una,
lo que da un total de 84 asientos. Cuando las 100 personas llegan al concierto, todos tratan de sentarse,
y todos los asientos son ocupados por 84 personas. Las 16 personas restantes se ven obligadas a pararse.

Esto sugiere un enfoque directo: llenamos todos los asientos y usamos la resta para determinar cuántos quedan
en pie. Es decir, podríamos escribir:

```
ns = r * s;   // Sentamos a los que se pueda
np = b - ns;  // El resto 
```

(Nota aquí el uso de `//`, otra forma de escribir comentarios.)

Sin embargo, hay otro tipo de caso que debemos considerar.
Estamos suponiendo que siempre es posible llenar todos los asientos,
pero ¿eso es cierto? 

||input
7 12
80
||output
80
0
||end
   
En el caso anterior hay 84 asientos igual que antes, pero solo 80 de ellos están asignados.
Si ejecutamos el código anterior en esta entrada contestaría `84 -4`, lo cual es obviamente incorrecto
(¿qué quiere decir "-4 personas"?).

Claramente, si hay asientos suficientes para acomodar a todos,
queremos realizar un cálculo diferente mucho más simple:

```
ns = b;  // Todos los vendidos sentados
np = 0;  // Nadie queda parado
```

¿Cuándo usamos cada caso? Depende de si es posible sentar a todos.
Específicamente, queremos comparar `b` con `r * s` y decidir a partir de esa
comparación. Esto lo hacemos mediante una declaración if:

```
if (r*s <= b){
    ns = r * s;   // Sentamos a los que se pueda
    np = b - ns;  // El resto 
} else {
    ns = b;  // Todos los vendidos sentados
    np = 0;  // Nadie queda parado
}
```
 
Las declaraciones if le dicen a la computadora cómo decidir entre dos conjuntos de acciones.
En este ejemplo, la computadora se preguntará si `r*s` (los asientos disponibles)
es menor o igual (`<=`) a `b` (boletos vendidos). Es decir, verá de qué caso se trata
y actuará en consecuencia. Entender el código anterior es tan simple como leerlo en voz alta. 


# Escribir la salida 

Por último, imprimimos las variables donde guardamos la respuesta.

```
cout << ns << " " << np << endl;
```

Aquí estamos imprimiendo `ns`, seguido de un espacio (que delimitamos entre comillas),
después `np`, y por último un "Enter", con endl. 

Después de haber reunido todo el código, hemos construido una solución para el problema.

A diferencia del problema anterior, no se ha proporcionado el código completo, y esto es deliberado.
Es mucho más beneficioso escribir el programa nosotros mismos que simplemente copiarlo y pegarlo desde otro lugar;
ciertamente no tendremos ese lujo en una OMI. 
