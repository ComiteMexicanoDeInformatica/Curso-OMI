
# Análisis inicial

Vamos a resumir la redacción del problema: hay un árbol que tiene algunos números como frutas. Ese números se duplica cada luna llena. Vamos a escribir un programa que cuente cuantas lunas llenas deberán pasar, hasta que el número satisfaga cierta condición ( es decir, hasta que el número sea un 'número bueno para la fiesta').

Cómo debería funcionar ese programa?

Es una idea muy buena tratar de generar unos casos y resolverlos a mano. Deberías empezar tratando de encontrar unos pocos y buscar la solución para ellos. Es recomendable incluir los ejemplos, pero también es muchos mejor que tu hagas los propios.

Así que la respuesta es, si la hay, tres frutas en el árbol al principio? Es fácil observar que el número de frutas en el árbol se incrementa con cada luna llena. Va de 3, 6, 12, 24, 48, etc. duplicándose cada vez. El truco está en encontrar el primer 'número bueno' en la secuencia. Intentémoslo.

Un 'número bueno' de frutas se puede dividir eventualmente entre once personas con una extra. Eso no es posible ni para 3 ni para 6 - son muy pocas para dividir eso. Fara el número 12, se ve que parece ser 'bueno'. (Así podemos darle a cada persona una fruta, dejándo exactamente una extra).

Podemos intentar esto para unos casos más. Algunos son más fáciles que otros, así que: la secuencia 25, 50, 100 ... hasta alcanzar un número rápidamente (100 = 9 x 11 + 1), o secuencias como 24, 48, 96, ... se llevan mucho tiempo para llegar ahí, y el número es muy grande que no es muy claro si puede ser dividido o no.

Ahora que podemos tener alguna idea de como resolver estos casos a mano, prodríamos intentar escribir algún programa que haga lo mismo. Resolver los casos por nuestra cuenta, le llamamos **simulación** de ordenamientos: registramos la cantidad de fruta cada luna llena, y nos detenemos cuando el número sea el adecuado, o si nuestros pobladores deben de esperar otro mes para hacer el festival.

Podríamos resumir nuestro algoritmo (método) como sigue: **simular el crecimiento de nuestro árbol, mes a mes, hasta alcanzar el 'número bueno' para el festival**. Lo anterior, podríamos escribirlo de la siguiente manera:

* Leer la entrada
* Simular el crecimiento del árbol:
  ** Mantener un registro del número de lunas llenas que han ocurrido, y la cantidad de frutas que hay en el árbol
  ** Detener la simulación cuando se alcance el 'número bueno' para el festival
* Mostrar el resultado

Ésto nos lleva a dos preguntas para nuestra implementación. Como podemos saber si es posible que el festival se realice? Que debemos de hacer para simular?

Vamos a ver ésto pregunta por pregunta.

#Detectando 'números buenos'

Según la redacción del problema, el número de frutas en el árbol es 'bueno' si se puede dividir eventualmente en once partes con una fruta extra. Necesitamos encontrar una condición - una prueba podría ser codificar con el comando **if** - vamos a dercir que los números buenos separados de los malos.

Naturalmente, desde que la definición involucra división, esperamos que nuestra solución incluya la división de una u otra forma. Esto debería involucrar el operador de división /, o el operador módulo %. Recapitulemos que a/b es dividir a sobre b, redondeado, y que a%b se obtiene el resto. Ambos se discutieron en el tutorial del problema de la Fracción Mixta.

Para ayudar con ésto, vamos a hacer una lista de los 'buenos números'. Diremos que el árbol tiene al menos 2 frutas en un momento dado (así es la única forma en que crecen), así que el primer 'número bueno' es 12 = 1 x 11 + 1. El siguiente es el 23 = 2 x 11 + 1: no es fácil deducir que no hay ninguno entre ellos. Aquí está una lista de algunos más:

12 23 34 45 56 67 78 89 100 111 122 133 144 155 166 177 188 199 210 221 232 243 ...

(Observe que hay una secuencia aritmética: cada número es el anterior más 11)

Una posibilidad de que nuestro programa genere una lisa de 'buenos números' y que constantemente se refiera a ésta lista. El trabajo es fácil si la lista es pequeña, pero que tan grande podrá llegar a ser nuestro árbol, podríamos decir que con cuentos de millones de números. Nuestro programa no tendría el tiempo suficiente no memoria suficiente para generar tal lista.

De lo que estamos hablando son de los operadores / y %, veremos lo que pasa cuando aplicamos esos operadores a la lista.

x (el número)	x / 11 (cociente)	x % 11 (resto)
12	1	1
23	2	1
34	3	1
45	4	1
56	5	1
67	6	1
78	7	1
89	8	1
100	9	1
111	10	1

Claramente vemos un patrón. Primeramente, el valor de x / 11 se incrementa por uno en el siguiente número. Ésto tiene un poco de sentido, dado que nuestro número se incrementa en 11 cada vez

Luego, el valor de x % 11 es siempre 1. Esto también tiene sentido - el módulo que se obtiene viene de la división. Decimos que "x % 11 es 1", lo que significa que es lo mismo que decir, "para un x dado se obtiene un residuo de 1 dividido entre 11", o sea es lo mismo "x dividido entre 11 partes con 1 de sobra". Así que eso es exactamente una definición para el festival de un 'número bueno'.

Resumiendo: la condición ( x %11 == 1 ) es verdadera cuando x es un 'número bueno' y falsa en caso contrario.

# Ejecutando la simulación

Nuestro programa necesita sumular cada luna llena hasta que se llega a un 'número bueno'. Esto involucra una acción repetitiva - duplicar el número de gritas un determinado número de veces. Para hacer esto, necesitamos algo diferente a lo que se ha visto en los anteriores problemas.

Debes de estar familiarizado con los **ciclos**: esta característica de los lenguajes de programación te permite ejecutar un bloque de código más de una vez. Hay muchos tipos de ciclos, dependiendo del lenguaje de programación. Ilustraremos un tipo especial: el **ciclo while**

En C/C++, se puede escribir como lo siguiente:

while (condición) {
	comandos
}

... en **comandos** va cualquier bloque de código, y en **condición** es alguna pregunta de veradedor/falso como en el comando **if**

Cuando una computadora encuentra el comando **while**, checará la condición. Si la condición es veradera, se ejecutarán todos los comandos dentro de las llaves, luego empezará de nuevo. Si la condición es falsa, saltará hasta después de la llave y continuará ejecutándose de manera normal.

El código podría ser leído en voz alta como 'mientras la condición sea verdadera, haz los comandos'.

Ahora, regresemos al problema. EL truco de usar el comando **while** es la forma de encontrar la forma de parafrasear nuestras instrucciones así que corresponda al ciclo. Además, parafraseandolos como 'mantengamos simulando las lunas nuevas hasta que encontremos el 'número bueno'.

El diagrama de flujo de arriba ilustra nuestros eventos de la secuencia deseada. Observe que esto es casi lo mismo, la operación de un **while** genérico (el primer diagrama). Note que nuestra descripción de lenguaje plano, no incluye la palabra 'while' - puede que sea necesario reformularse un poco.

Note que cambiar 'si' y 'no' nos da como resultado algo como el ciclo while, así podemos tratar de negar la condición, preguntando si nuestro número es malo en vez de bueno. Así que podemos expresar con comandos como 'sigue simulando nuevos números mientras tengamos un número malo'.

Esto se ve mejor así. Podemos inmediatamente a codificar nuestro ciclo como sigue:

while (nFruta % 11 != 1) {
	...
}

Tenga en cuentra que esto es lo opuesto directamente de la condiciones que propusimos en el párrafo anterior. Así pasamos de preguntar si un número es bueno a preguntar si es malo, o 'no bueno'.

Así que, el código que debemos de repetir dentro del ciclo, entre las llaves. En este caso queremos simular duplicando el número de frutas en el árbol, pudiendo escribir una línea de las siguientes:

nFruta = nFruta + nFruta;
nFruta = nFruta * 2;
nFruta *= 2;

Con cada una de las líneas anteriores, se obtiene lo mismo. Si no hemos programado mucho, podría verse un poco extrali ya que el signo igual no denota lo mismo que en las matemáticas. El signo igual es un **operador de asignación**: le indica a la computadora que calcule el valor de la derecha, y lo almacene en la variable que está en el lado izquierdo. Así "nFruta = nFruta * 2;", tiene sentido cuando se le dice a la computadora: "calcula el valor de nFruta * 2 y establece nFruta a ese valor".

Claramente la primera y segunda línea son equivalentes. La tercera línea tiene una instrucción especial "multiplica nFruta por 2". Todos los operadores +=, -=, *=, /* y %= se definen de la misma forma. Es útil usar esas abreviaciones para escribir el nombre de la variable dos veces, lo cual es especialmente adecuado cuando estamos tratando con estrucutras de datos complicadas que hacen referencia nombres de variables muy grandes.

Así que nuestro código de podría ver como:

while (nFruta % 11 != 1) {
	nFruta *= 2;
}

Nuestro código deberá calcular correctamente el número final de frutas en el árbol. Deberíamos de actualizar esta variable cuando el ciclo se ejecute?

Inicialmente, podríamos asignar un 0 a nLunas, como un estado inicial a que no ha sucedido ninguna luna llena. El número de frutas se duplicará solo si una luna llena ha ocurrido, así incrementaríamos nLunas al doble de nFrutas. Una versión actualizada del ciclo podría ser:

nLunas = 0;
while (nFrutas % 11 != 1) {
	nFrutas *= 2;
	nLunas += 1;
}

Leyendo en voz alta podría ser "asigna a número de lunas un 0. Entonces, mientras el festival no pueda realizarse, duplica el número de frutas e incrementa el número de lunas". Es así como una simulación debería de trabajar.

Eso es en escencia la solución. Claramente también debemos de incluir la lectura de datos y la escritura en pantalla, para que seaz capaz de codificar una solución que resuelva el problema del 'Árbol Tak-Tak'.
