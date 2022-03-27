Detectando Triples

De acuerdo a la redacción, un \textit{triple} es cualquier múltiplo de 3. Desde nuestra experiencia, esperamos detectar triples usando o la división o el módulo.

Para futuras consideraciones, diremos que un número es múltiplo de 3 exactamente al haber un residuo de 0 cuando se divide entre 3. Aquí tenemos un pseudo-código

if (el_numero % 3 == 0) {
// el_numero es triple
} else {
// el_numero no es triple
}

... así detectaremmos correctamente si un número dado es triplo

# Contando y coleccionando triples

Vamos a proponernos un objetivo intermedio de \textit{coleccionar todas las posiciones triples de un arreglo}.

(¿Por qué? Sería muy simple mostrar todas las posiciones triples mientras leemos la entrada. Sin embargo, el problema nos pide que empecemos mostrando el número de triples. No lo sabemos hasta que leemos toda la entrada. Así que necesitamos donde guardar el resultado obtenido. Además, es una técnica muy útil colocar los resultados previos en algún lugar utilizarlos posteriormente).

Asumiremos que ya leimos todos los números en un arreglo:

```
for (int i = 0; i < nNumeros; i++) {
	fscan("%d",&triples[i]);
}
```

// FALTA: Contar y coleccionar los triples
// FALTA: Escribir la salida

Vamos a declarar un nuevo arreglo `triples` que va a almacenar todos los números triples.

int triples[MAX_N];

No sabemos cuantos números triples habrá, asi es que estaremos previendo y creando suficiente espacio para almacenar $n$ diferentes lugares de triples. No será necesario utilizar todo el espacio, pero es mejor apartar más espacio que el suficiente para que no nos quedemos sin espacio. (Declarando un arreglo muy pequeño y tratando de almacenar más valores, nos llevará a errores o algo peor.)

Ahora nuestro código contará y coleccionará los triples, podrá verse como lo siguiente:

for (int i = 0; i < nNumeros; i++) {
if (triples[i] % 3 == 0) {
// FALTA: el número es un triple, ahora qué?
}
}

Aquí viene la parte interesante. Como llenamos el arreglo de triples correctamente?

Una forma de hacer eso es elegir un caso en específico, o un punto específico durante el ciclo, y preguntarnos \textit{qué debería estar haciendo nuestro programa en éste momento?} Imaginemos que estamos a la mitad del programa y ya hemos encontrado 6 triples, en la posición segunda, cuarta, quinta, novena, doceava y treceava en el arreglo, respectivamente.

<center>triples = [2, 4, 5, 9, 12, 13, ???, ???, ...]</center>

Los signos \textit{???} son los restantes 49,994 elementos del arreglo en el cual hemos apartado espacio pero no lo estamos usando en éste momento. Dependiendo de varios factores de como se compile el programa y corra, éstos \textit{???} podrían ser cualquier cosa: talvez ceros, talvez basura al azar, o quizás {17,18,19, ...}.

Necesitamos que nuestro programa sea capaz de decirnos la diferentes entre la basura generada y una ubicación de un triple, está claro que necesitamos utilizar una variable para saber cuantos triples hemos encontrado y que quede almacenado en el arreglo. Llamaremos a esta variable **nTriples**. Así que:

<center>triples = [2, 4, 5, 9, 12, 13, ???, ???, ...]</center>
<center>nTriples = 6</center>

Ahora, digamos que nuestro programa descubre el próximo triple en la posición décimo octava del arreglo. Así que obtendremos el siguiente estado:

<center>triples = [2, 4, 5, 9, 12, 13, 18, ???, ???, ...]</center>
<center>nTriples = 7</center>

Qué valores han cambiado? Si queremos codificar explícitamente este cambio en el arreglo, podríamos escribir:

triples[6] = 18;
nTriples = 7;

Ahora vamos a pensar en que contexto del ciclo tratamos de escribir. Obviamente que **nTriples** se ha incrementado en 1**. **triples[6]** ahora almacena el lugar en el ciclo donde vamos (**i** en el ejemplo del código de arriba). Y, lo interesante, 6 es el valor inicial de **nTriples** De hecho el valor de **nTriples\*\* nos indicará cual es la siguiente posición del arreglo, que no se está utilizando.

Así que mejor escribimos lo siguiente:

triples[nTriples] = i;
nTriples++;

O, puede que lo siguiente sea más fácil de entender:

nTriples++;
triples[nTriples-1] = i;

Podemos pornelo en un lugar vacío que tiene nuestro ciclo. Necesitamos asegurarnos que **nTriples** se inicializa a 0. Juntando todo:

nTriples = 0;
for (int i = 0; i < nNumero; i++) {
// nTriples = el número de triples que hemos encontrado
// hay nTriples de valores en el arreglo triples[]
if (list[i] % 3 == 0) {
// el número es un triple
triples[nTriples] = i;
nTriples++;
}
}

(En el código de arriba hay un error potencial. Pero dependerá de que estamos haciendo. Lo discutiremos más tarde)

Observa que hay un comentario extra al inicio del ciclo " n Triples = al número de triples que hemos encontrado / hay nTriples de valores en el arreglo triples[]". Esto nos recuerda la forma en que el código se comportará y nos servirá para un par de propósitos

- **Miestras estamos escribiendo** código, recordamos el uso para cada varialbe. Hay un lugar conveniente para poner el recordatorio
- Si después **buscando errores**, escribiremos el código que se supone nos dará un buen punto inicial. Un error podría ser causado al escribir mal el código del ciclo (por ejemplo, si nTriples se incializa a 2). También podía ser causado por partes que le agregaremos y que se comporten de una manera diferente a lo que esperamos; o estados diferentes que se producen por el código.

- Si estamos **cambiando o reusando código**, debemos de fijarnos para que sirve cada variable así nos podemos dar cuenta de nuevo. (Aún y después de un día o dos es fácil olvidar pequeños detalles del código que hemos escrito).

Es buena práctica agregar este tipo de comentarios al código, explicando para que se utiliza una variable en determinado momento. No se debe sobreutilizar: solo agregar suficientes notas para ayudar a \textit{nuestro propio} entendimiento al leer el código que hemos escrito. Que no es mucho lo que debe de variar de persona a persona.

# Mostrando las respuestas

La redacción del problema nos da dos casos los cuales debemos de manejarlos de diferente manera: el caso donde no hay triples y donde si los hay.

El valor de nTriples es exactamente lo que necesitamos para de ahí partir.

if (nTriples == 0) {
printf("No hay nada!\n");
} else {
printf("%d\n", nTriples);
// HACER: Mostrar los triples separados por un espacio
}

Para mostrar la lista de los números separados por un espacio, podríamos usar lo siguiente:

for (int i = 0; i < nTriples; i++) {
printf("%d ", triples[i]);
}
printf("\n");

Así se desplegará la lista en una sola línea, seguida por un salto de línea. Pero esto no es suficiente. Considere que debemos de mostrar basado en el anterior ejemplo (donde triples=[2, 4, 5, 9, 12, 13, 18, ...], y nTriples = 7):

<center>printf("2 4 5 9 12 13 18 \n");</center>

Ya casi terminamos de hacer lo que queremos, excepto porque hay un espacio al final de la línea, el cual no debería de ir.

Es posible que el evaluador en línea no permita espacios extra al final de algunas líneas. Pero antes de intentar mostrar la salida correcta, comenzaremos con las dos principales situaciones que debemos tomar.

# Método 1: mostrar el primer o último elemento fuera del ciclo

Gracias al comando **if** sabemos que hay al menos un elemento en el arreglo triples. Así que podemos hacer lo siguiente de manera segura:

printf("%d", triples[0]);
for (int i = 1; i < nTriples; i++) {
printf(" %d", triples[i]);
}
printf("\n");

...o esto:

for (int i = 0; i < nTriples - 1; i++) {
printf("%d ", triples[i]);
}
printf("%d\n", triples[nTriples - 1]);

Observe ambos códigos. Cómo mostraremos de manera correcta, la lista separados con un espacio?

#Método 2: usar un if dentro del ciclo

En vez de manejar el "caso especial" del primer o último elemento fuera del ciclo, podemos utilizar el comando **if** y hacer lo mismo dentro del ciclo:

for (int i = 0; i < nTriples; i++) {
printf("%d", triples[i]);
if (i == nTriples - 1) {
printf("\n");
} else {
printf(" ");
}
}

Juntando todo obtendremos una solución favorable para \textit{Triples}

# Un error?

Si unimos todas las piezas que indicamos arriba y lo corremos con el primer caso, obtendríamos la siguiente salida:

4
1 3 4 6

**Esto es incorrecto**, pero está \textit{muy cerca} de ser la respuesta correcta! La segunda lìnea de la salida debería leerse como "2 4 5 7", pero en vez de eso en cada lugar en nuestro programa muestra un 1 menos que lo que se supone debería ser. Nuestro programa tiene un \textit{error por uno}.

Cómo pasó esto? Bueno, nuestro programa pone el primer triple (el número 12, en la segunda posición de la lista) en triples[1], en la segunda posición del arreglo. (Llamaremos al arreglo con índices \textit{basados en 0}: el primer valor está en la posición 0, el segundo en la 1, etc.)

Entonces, cuando el programa detecte que el 12 es un triple en el ciclo principal, le agrega 1 (en vez de 2) al arreglo triples para marcar la posición de triples. Durante la salida, "1" es lo que el programa muestra en vez de "2".

El error-por-uno es un error muy común. (tal vez cuando una parte del programa comienza desde el 0, pero en otra parte empieza en el 1. O, talvez en una parte del programa se interpreta "entre 10 y 20" \textit{excluyéndolos}, lo que significa que no se cuenta al 10 ni al 20 al decir "entre 10 y 20", pero en otra parte se tratan como \textit{inclusive}

Para el programa que hemos escrito, hay al menos 3 formas de corregir el error:

- \*\*Agregar el +1 que falta durante la salida

printf("%d", triples[i]+1);

El resto del programa usa un contador basado en 0 cuando usamos los arreglos. Agregamos un 1 a la salida de último minuto así que el resto de nuestros datos pueden ser tratados como basados en 0.

Si usamos éste método, deberíamos agregar un comentario a la declaración del arreglo triples, indicando que el número dentro del arreglo, usado como índice, será basados en posición 0.

- \*\*Agregar el +1 perido cuando llenemos el arreglo triples

triples[nTriples] = i + 1;

Así sólo usaremos el arreglo triples para mostrar, y pondremos el valor correcto al comienzo.

Si usamos ésta solución, deberíamos agregar un comentario cuando declaramos el arreglo triples, que indique que el índice está basado en posiciones 1.

- **Cambiar el ciclo principal para que vaya de 1 a n**

for (int i = 1; i <= nNumero; i++) {
// nTriples = el número de triples que hemos encontrado
// hay nTriples valores en el arreglo triples[]
if (list[i-1] % 3 == 0) {
...
}
}

En vez de modificar i, deberíamos de asegurarnos que el valor correcto empuieza con ciclos entre 1 y n (en vez de 0 y n-1), inclusive.

Si usamos ésta forma, deberíamos comentar que la declaración del arreglo usa índices basados en posición 1. También debemos de ser cuidadosos de que se pueda accesar el elemento de la lista basados en 0.

Todos los métodos son igual de válidos y tienen sus propios pros y contras. Cualquiera que escogar es importante ver que escribas el comentario y documentes las partes de tu código, indicando lo que es la i y lista. Si el programa que estamos haciendo es simple o se usan 3 o 4 variables podría pasar, pero los comentarios se vuelven invaluables cuando el programa se vuelve más complicado.

Una vez que corrigamos ese error, podremos resolver satisfactoriamente el problema \textit{triples}.
