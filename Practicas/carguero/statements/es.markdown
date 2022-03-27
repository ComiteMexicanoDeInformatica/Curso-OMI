# Descripci�n

<p>La Organizaci�n Mundial Inter-oce�nica (OMI) ha iniciado operaciones en el pa�s y actualmente dispone de 4 cargueros para transportar mercanc�a de un puerto mar�timo a otro. A pocos d�as de realizar su primer env�o de **12 contenedores**, el jefe de operaciones ha decidido que **cada carguero lleve 3 contenedores**, y que �stos, de acuerdo con su peso, est�n distribuidas uniformemente.

![Carguero mar�timo](carguero.jpg)

<p>Ayuda al jefe de operaciones para minimizar $T - t$, donde $T$ es el peso del carguero con mayor carga y, $t$ el peso del carguero con la carga menor.

# Entrada

12 l�neas que contienen la carga $c_i$, donde ($1 \leq c \leq 1,000,000$)

# Salida

Una sola l�nea indicando el valor m�nimo de $T - t$

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
Una posible soluci�n es dividir las cargas as�: (3,8,9), (4,5,10), (2,6,11) y (1,7,12) dando como diferencia 1 a una posible carga menor de 19, del carguero 2; y a una mayor de 20, del carguero 4.
||end
