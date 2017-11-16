En el centro de la aldea Tak-Tak se encuentra un gran árbol en expansión,
cuyas largas ramas proporcionan sombra durante los veranos calurosos.
El fruto del árbol Tak-Tak (como es conocido afectuosamente)
es renombrado por su dulce y delicioso sabor. Además, el árbol Tak-Tak da frutos
increíblemente rápido: cada noche cada fruta en el árbol da lugar a una nueva
fruta. En otras palabras, cada noche la cantidad de frutas en el árbol se duplica.

Sólo un grupo selecto de 10 aldeanos conoce la ubicación del árbol y este grupo te
ha seleccionado para ser su nuevo integrante. Pero para ser aceptado primero deberás
ser capaz de contestar la siguiente pregunta:

_Dado el número de frutas actualmente en el árbol y el número de integrantes del grupo
($11$ contándote a ti), calcula ¿cuántas noches tienen que pasar para que a cada
miembro del grupo le toque el mismo número de frutas si cosechan
**TODAS** las frutas del árbol menos una?_

# Problema

Escribe un programa que dado $f$, el número de frutas acualmente en el árbol, calcule
la cantidad de noches que es necesario esperar para que si se cosechan **TODAS** las
frutas del árbol menos una, a cada miembro del grupo le toque la misma cantidad de frutas.

# Entrada

Tu programa deberá leer un único número entero, $f$, que representa la cantidad de frutas
en el árbol.

# Salida

La salida consistirá de dos enteros separados por un espacio: el menor número de noches
que los deberán esperar, y el número de frutos para ese entonces.

Se garantiza que eventualmente será posible realizar el festival.

# Ejemplo

||input
23
||output
0 23
||description
No tiene que pasar ninguna noche, ya que $23=2 \times 11+1$, por lo que
a cada miembro del grupo le tocan dos frutas y sobra una.
||input
17
||output
1 34
||description
17 no se puede repartir entre todos y que sobre una fruta. Sin embargo, después de una noche,
el número de frutas se duplican, convirtiéndose en $2 \times 17 = 34$, que ya podemos repartir
porque $34 = 3 \times 11 + 1$. Ahora, a todos los tocan tres frutas y sobra una.
||input
14
||output
2 56
||description
Después de dos noches, el número de frutos se ha cuadruplicado, convirtiéndose en $56 = 5 \times 11 + 1$.
||end

# Límites

* $2 \leq f \leq 1,000,000$
* Siempre se va a poder hacer la cosecha eventualmente.
