En el centro de la aldea Tak-Tak se encuentra un gran árbol en expansión, cuyas largas ramas proporcionan sombra durante los veranos calurosos. El fruto del árbol Tak-Tak (como es conocido afectuosamente) es renombrado por su dulce y delicioso sabor.

Sólo un grupo selecto de 10 aldeanos conoce la ubicación del árbol y este grupo te ha seleccionado para ser su nuevo integrante. Pero para ser aceptado primero deberás ser capaz de contestar la siguiente pregunta:

_Dado el número de frutas actualmente en el árbol y el número de integrantes del grupo ($11$ contándote a ti), calcula ¿cuántas noches tienen que pasar para que si cosechan **TODAS** las frutas del árbol menos 1 (para que puedan seguir multiplicándose) a cada miembro del grupo le toque el mismo número de frutas?_

# Problema

Escribe un programa que dado $f$ el número de frutas acualmente en el árbol calcule la cantidad de noches que es necesario esperar para que, si se cosechan **TODAS** las frutas del árbol menos 1, a cada miembro del grupo le toquen la misma cantidad de frutas.

# Entrada

Tu programa deberá leer del teclado un único número entero $f$ que representa la cantidad de frutas en el árbol.

# Salida

La salida consistirá de dos enteros separados por un espacio: el menor número de noches que los los deberán esperar, y el número de frutos para ese entonces.

Se garantiza que eventualmente será posible realizar el festival.

# Ejemplo

||input
23
||output
0 23
||description
En el primer ejemplo, $23=2\times11+1$ es un buen número (cada aldeano recibe dos frutos Tak-Tak y uno sobra, como lo planeado). Es por ello que no necesitan esperar.
||input
17
||output
1 34
||description
En el segundo ejemplo, 17 no es un buen número. Después de una noche, el número de frutos se ha duplicado, convirtiéndose en $34=3\times11+1$. Este es un buen número por que a todos los tocan $3$ y sobra $1$.
||input
14
||output
2 56
||description
En el tercer ejemplo, 14 no es un buen número. Después de dos noches, el número de frutos se ha cuadruplicado, convirtiéndose en $56=5 \times 11+1$.
||end

# Límites

 * $2 \leq f \leq 1,000,000$