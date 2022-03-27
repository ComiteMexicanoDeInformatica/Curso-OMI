# Descripción
<p>La Organización Mundial Inter-oceánica (OMI) ha iniciado operaciones en el país y actualmente dispone de 4 cargueros para transportar mercancía de un puerto marítimo a otro. A pocos días de realizar su primer envío de **12 contenedores**, el jefe de operaciones ha decidido que **cada carguero lleve 3 contenedores**, y que éstos, de acuerdo con su peso, estén distribuidas uniformemente.

![Carguero marítimo](carguero.jpg)

<p>Ayuda al jefe de operaciones para minimizar $T - t$, donde $T$ es el peso del carguero con mayor carga y, $t$ el peso del carguero con la carga menor.

# Entrada
12 líneas que contienen la carga $c_i$, donde ($1 \leq c \leq 1,000,000$)

# Salida
Una sola línea indicando el valor mínimo de $T - t$

# Ejemplo

||input
1
2
3
4
5
6
7
8
9
10
11
12
||output
1
||description
Una posible solución es dividir las cargas así: (3,8,9), (4,5,10), (2,6,11) y (1,7,12) dando como diferencia 1 a una posible carga menor de 19, del carguero 2; y a una mayor de 20, del carguero 4.
||end