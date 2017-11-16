Como siempre, vamos a definir un plan antes de empezar a teclear código:

1. Leer el numerador y denominador
2. Calcular el valor de $a$ y $b$
3. Escribir la fracción mixta

Esta vez no nos detendremos en cómo leer la entrada. Puedes revisar cómo lo hicimos en
problemas anteriores si necesitas refrescar tu memoria.

# Calcular la respuesta

Primero tenemos que pensar en cómo pasar una fracción impropia a una fracción mixta. La descripción dice tenemos que
calcular los enteros $a$ y $b$, pero no es muy descriptiva. Llamemos a $a$ la parte del número entero y a $b$
la parte fraccionaria, o el número grande y el número pequeño, ya que en estas andamos.

Como bien sabes, las fracciones y la división son prácticamente la misma cosa.
Entonces, escribir $n$ dividido entre $m$ es lo mismo que $n/m$. Usemos esta idea para tratar a nuestra
fracción impropia como una pregunta de división. Vamos a intentarlo con los datos de ejemplo.

||input
22 6
||output
3 4/6
||input
49 7
||output
7
||end

El segundo caso es obvio: 49 dividido entre 7 da como resultado un 7, el cual es la salida.
En este caso el valor de $a$ debe de corresponder al resultado de la división.

Ahora consideremos el primer caso, 22 dividido entre 6 nos da 3 como parte entera.
Una vez más, la primera parte viene de dividir, pero ¿de dónde viene el '4'?
Haciendo unas pequeñas pruebas nos puede dar una posible explicación: el número '4' es el **residuo**
de la división, la cantidad que queda restante después de dividir.

De todo esto, nos damos cuenta que el cociente y residuo corresponden exactamente a $a$ y $b$.

Esto es una gran noticia, porque ahora nos queda muy claro qué tipo de operaciones debemos de realizar.
Para obtener $a$, necesitamos obtener la parte entera de $n/m$.
De hecho, gracias a la forma en que típicamente la computadora almacena los datos,
cuando le dices a la computadora que divida dos enteros, siempre nos da la parte entera, aunque haya residuo.
Así que ahora podemos calcular $a$:

```
a = n / m;  // el cociente!
```

Recuerda que puedes usar el nombre de las variables que desees.
En este problema, $a$ y $b$ probalemente no son los mejores nombres que les prodrías dar
a tus variables. Sólo recuerda escoger nombres de variables que sean significativos.

Ahora obtengamos $b$, el residuo. Una forma sería restarle $ad$ a $n$.
Si tu fracción mixta se ve de la forma $a \frac{b}{m}$,
este paso sirve para quitar la parte de $a$.

```
b = n - a * b; // el residuo!
```

Otra forma de obtener el residuo es usando el operador módulo (`%`). Cuando evalúas `x % y`,
la computadora te regresa el resto de la división de `x` entre `y`, que es precisamente lo que queríamos
calcular. Entonces, otra manera de obtener `b` sería

```
b = n % m; // el residuo!
```

Si no has usado módulo antes, podrías creer que es muy confuso y no vale la pena.
Al contrario, si lo usas podrás ahorrarte tiempo y esfuerzo.
Por ejemplo, cuando necesites comprobar si un número es par puedes verificar que I % 2 == 0,
o para obtener los últimos dos dígitos de un número puedes evaluar x % 100,
o incluso encontrar el siguiente múltiplo de 23 después de cierto número (x - (x % 23) + 23).

# Escribiendo la salida

La redacción nos pide hacer cosas distintas dependiendo si $b$ es cero o no.

Como antes, la situación se resuelve con el comando **if**.

```
if (b != 0) {
    cout << a << " " << b "/" << d << endl; // muestra la fracción completa
} else {
    cout << a << endl; // o solo el número entero
}
```
