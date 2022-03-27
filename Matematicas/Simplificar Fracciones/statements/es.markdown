# Descripción

Uno de los problemas con el que todos nos enfrentamos en algún momento de la vida, es el de simplificar una fracción. En la escuela nos enseñaron diversos métodos para ello, sin embargo, el más usado está basado en la obtención del **Maximo Común Divisor (MCD)**. La regla para realizar lo anterior se enuncia a continuación.

---

**Regla**

Para reducir una fracción cualquiera $\dfrac{a}{b}$, sólo se necesita dividir $a$ y $b$ entre su máximo común divisor (MCD).

---

Está muy fácil la regla, ¿no?. Entonces ahora te preguntarás, _¿cómo cáculo el MCD?_. No te asustes, eso es muy fácil. El MCD se puede calcular fácilmente mediante lo que se conoce como el **Algoritmo de Euclides**, el cual nos dice lo siguiente:

---

**Algoritmo de Euclides**

    Se tienen dos números a y b. El MCD se obtiene cómo sigue.

    Paso 1: Se divide el número mayor entre el menor.

    Paso 2: Si,

    1.- La división es exacta, el divisor es el m.c.d.

    2.- La división no es exacta, dividimos el divisor entre el resto obtenido y se continúa de esta forma hasta obtener una división exacta, siendo el último divisor el m.c.d.

---

#Problema

En este problema se te darán $N$ fracciones las cuales tendrás que simplificar utilizando lo anteriormente mencionado.

# Entrada

En la primera línea recibirás un número $N$ el cual representa el número de líneas que recibirás posteriormente. En las siguientes $N$ líneas recibirás dos números por línea, $a$ y $b$, dónde $a$ será el denominador y $b$ el denominador de la fracción.

# Salida

Tu salida deberán de ser $N$ líneas que representarán las fracciones simplificadas de la entrada. Es importante destacar que las $N$ líneas que escribas en la salida, deberán de estar en el mismo orden en que se puso en la entrada, sino se considerará como fallida la salida. Además, también las tendrás que poner por parejas de números, donde el primer número será el numerador y el segundo el denominador.

# Ejemplo

||input
5
4 8
18 30
24 108
28 42
90 120
||output
1 2
3 5
2 9
2 3
3 4
||description
Se reciben 5 fracciones y se regresan al resultado en el orden en que llegaron. La simplificaciones son $\dfrac{4}{8}=\dfrac{1}{2}$, $\dfrac{18}{30}=\dfrac{3}{5}$, $\dfrac{24}{108}=\dfrac{2}{9}$, $\dfrac{28}{42}=\dfrac{2}{3}$ y $\dfrac{90}{120}=\dfrac{3}{4}$.
||end

# Límites

- $1\leq N \leq 100000$
- $1\leq a, b \leq 2^{63}$
