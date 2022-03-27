Vamos a resumir la redacción del problema: hay un árbol que tiene frutas,
que se duplican cada noche. Vamos a escribir un programa que cuente cuántas noches
deben pasar, hasta que el número de frutas sea repartible entre el grupo.

¿Cómo debería funcionar ese programa?

Usualmente es buena idea tratar de pensar en casos y resolverlos a mano.
Es recomendable incluir los ejemplos, pero es muy importante que tú hagas tus propios
ejemplos.

Veamos. ¿Qué pasa si hay tres frutas en el árbol al principio?
La cantidad de frutas se duplica cada noche, por lo que la cantidad de frutas hace
la secuuencia $3, 6, 12, 24, 48, \ldots$. El truco está en encontrar el primer
momento en la secuencia en el que se puedan repartir las frutas. Intentémoslo.

Queremos que el número de frutas se pueda dividir entre once personas con una fruta extra.
Eso no es posible ni para 3 ni para 6 -- son muy pocas para dividir eso.
El 12, se ve prometedor, porque podemos darle a cada persona una fruta, dejándo exactamente una
extra.

Podemos intentar esto para unos casos más.
Por ejemplo, la secuencia $25, 50, 100, \ldots$ llega a 100, que es repartible porque
$100 = 9 \times 11 + 1$. Con un poco de experimentación tal vez encuentres casos que no
se pueden dividir, como cuando el árbol empieza con 11 frutas. Para nuestra buena suerte,
la redacción dice que no nos evaluarán con esos casos.

Ahora que podemos tener alguna idea de cómo resolver estos casos a mano,
prodríamos intentar escribir algún programa que haga lo mismo.
La técnica que usaremos la llamamos **simulación**, ya que vamos a escribir un problema
que se comporte como el árbol cada noche.

Podríamos resumir nuestro algoritmo como sigue:
**simular el crecimiento de nuestro árbol de cada noche,
hasta alcanzar un número de frutas repartible**.
Lo anterior, podríamos escribirlo de la siguiente manera:

1. Leer la entrada
2. Simular el crecimiento del árbol:

- Mantener un registro de cuántas noches han pasado, y la cantidad de frutas que hay en el árbol
- Detener la simulación cuando la cantidad de frutas sea repartible

3. Mostrar el resultado

# Cuándo detener la simulación

Primero preocupémonos por el problema más sencillo: saber si un número es repartible.

Según la redacción, el número de frutas es repartible si se puede dividir eventualmente
en once partes con una fruta extra. Necesitamos encontrar una condición, es decir, una prueba
que podamos usar con el comando **if**, que nos diga cuándo se puede repartir.

Naturalmente, desde que la definición involucra división, esperamos que nuestra solución
incluya la división de una u otra forma. Es decir, debería involucrar el operador de división `/`,
o el operador módulo `%`. Recapitulemos que `a / b` es dividir `a` entre `b` descartando
la parte entera, y que `a % b` dice el resto de la división.
Ambos se discutieron en el tutorial de Fracción Mixta.

Para ayudar a encontrar la solución, hagamos una lista de los números que se pueden repartir.
El primer número de frutas repartible es $12 = 1 \times 11 + 1$.
El siguiente es el $23 = 2 \times 11 + 1$. Aquí está una lista de algunos más:

$12, 23, 34, 45, 56, 67, 78, 89, 100, \ldots$

(Nota que es una secuencia aritmética: cada número es el anterior más 11.)

Una forma de resolver el problema sería generar esta lista y referirnos constantemente a ella para
saber si un número es repartible. Sin embargo, esta lista sería enorme, por lo que no cabría en la
memoria de la computadora y tomaría mucho tiempo consultarla. Necesitamos una mejor manera
de saber si un número es repartible.

Repensemos qué quiere decir que un número es repartible, viendo qué le pasa a los
elementos de la lista cuando los dividimos entre 11.

```
x (el número)  x / 11 (cociente)  x % 11 (resto)
12             1                  1
23             2                  1
34             3                  1
45             4                  1
56             5                  1
67             6                  1
78             7                  1
89             8                  1
100            9                  1
111            10                 1
```

Claramente hay un patrón. Primeramente, el valor de x / 11 se incrementa por uno cada vez,
que tiene perfecto sentido dado que nuestro número se incrementa en 11 cada vez.

Luego, el valor de `x % 11` es siempre 1. Esto también tiene sentido ya que el módulo
viene de la división. Decimos que "x módulo 11 es 1", que es lo mismo que decir,
"x dividido entre 11 deja resto de 1". De hecho, esa es precisamente la condición que
distingue a un número repartible, por lo que la condición a revisar debe involucrar
checar si `x % 11` es 1 o no.

# Ejecutando la simulación

Nuestro programa necesita simular el crecimiento de las frutas cada noche.
Esto involucra una acción repetitiva: duplicar el número de frutas mientras que no sean repartibles.
Para hacer esto, necesitamos algo diferente a lo que se ha visto en los anteriores problemas.

Debes de estar familiarizado con los **ciclos**:
esta característica de los lenguajes de programación te permite ejecutar un bloque de código
más de una vez. Hay muchos tipos de ciclos, dependiendo del lenguaje de programación.
Ilustraremos un tipo especial: el **ciclo while**.

En C/C++, se puede escribir como lo siguiente:

```
while (condición) {
    comandos;
}
```

donde **comandos** es cualquier bloque de código, y en **condición** es alguna pregunta
de veradedor/falso como en el comando **if**.

Cuando una computadora encuentra el comando **while**, checa la condición.
Si es veradera, se ejecutarán todos los comandos dentro de las llaves y después
volverá a revisar la condición. Si es verdadera, vuelve a ejecutar los comandos y a
checar la condición, hasta que ésta sea falsa. En ese momento,
salta hasta después de la llave y continúa ejecutando el resto del código.

El código podría ser leído en voz alta como 'mientras la condición sea verdadera, haz los comandos'.

Ahora, regresemos al problema. EL truco de usar el comando **while**
es la forma de encontrar la forma de parafrasear nuestras instrucciones para que el ciclo
simule al árbol. Lo que queremos que haga el ciclo es 'mantener simulando el crecimiento del árbol
hasta que las frutas sean repartibles'.

Intentemos cambiar nuestra oración anterior para usar la palabra "mientras" (while). Algo
equivalente podría ser 'mantener simulando el crecimiento del árbol mientras que las frutas no
son repartibles'.

Esto se ve mejor así. Podemos inmediatamente codificar nuestro ciclo como sigue:

```
while (nFruta % 11 != 1) {
    ...
}
```

Ahora tenemos que pensar en qué comandos son los que queremos repetir.
En este caso queremos simular el crecimiento de las frutas en el árbol, y contar que pasó una noche
más.

```
nFruta = nFruta * 2;
noches = noches + 1;
```

Nota la repetición de `nFruta` y `noches` en esa actualización. Para ahorrarnos eso, existen
operadores especiales, `+=`, `-=`, `*=`, `/=` y `%=`, que sirven precisamente para esta repetición.
Nuestro ciclo se podría ver así, entonces.

```
while (nFruta % 11 != 1) {
    nFruta *= 2;
    noches += 1;
}
```

Recordemos que hay que declarar nuestras variables antes de usarlas. En este caso lo que deberíamos
hacer es declarar `noches` y `nFruta`. `nFruta` viene de la entrada, pero hay que pensar en qué
valor debe tener `noches` antes de empezar.

No toma mucho convencimiento darse cuenta de que `noches` debe iniciar en 0.
(¿Por qué?)

Una parte del código completo sería entonces

```
int nFrutas, noches;

std::cin >> nFrutas;

noches = 0;

while (nFrutas % 11 != 1) {
    nFrutas *= 2;
    noches += 1;
}
```

Leyendo en voz alta podría ser "asigna a número de noches en 0.
Ahora, mientras las frutas no se pueden repetir, duplica el número de frutas y cuenta que pasó
una noche más". Así funciona una simulación.

Para terminar, hace falta imprimir las noches que pasaron y cuántas frutas le tocan a cada quién.
¿Qué operaciones debes usar?
