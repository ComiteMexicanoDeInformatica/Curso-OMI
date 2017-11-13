# Análisis

Para aclarar, lo que pide el problema es dados dos rectángulos encontrar el área que cubren ambos.

Para el caso de ejemplo:

![ejemplo](img01.png)


A veces hacer dibujos para representar el problema resulta ser muy útil ya que puede ayudarte a entender el problema y posiblemente llevarte a la solución.

El resultado para este caso de ejemplo es 21 (ya que son 21 celdas las que son cubiertas por los rectángulos). Para llegar a esto se puede contar celda por celda, como indica la siguiente imagen:

![solucion](img02.png) 

La idea de contar celda por celda ocupada es buena para casos pequeños, pero de acuerdo con las especificaciones del problema, las coordenadas van de 0 a 10,000. Lo que significa que para casos muy grandes, esto puede llegar hasta 100,000,000 celdas que contar; lo que es impractico ya que esto no se puede realizar dentro del límite de tiempo que establece el problema (0.05 segundos).

Retomando la representación del problema mediante dibujos; es importante abarcar tantos casos como sea posible y no solo el que viene de ejemplo. Los siguientes son posibles casos que hay que considerar en nuestra solución:

![posibleCaso1](img03.png) ![posibleCaso2](img04.png) ![posibleCaso3](img05.png) ![posibleCaso4](img06.png)

Como puedes ver hay diferentes escenarios que tu programa debe ser capaz de resolver.

Si observamos la ultima imagen, debido a que los rectángulos no se sobreponen en ninguna celda, podemos obtener la respuesta sumando el área de cada uno. 

Sin embargo, si los rectángulos se sobreponen en al menos una celda al hacer esto nos dara un area mayor a la que en realidad es, esto debido a que estamos contando dos veces cada celda en la que se sobreponen. Como podemos ver en la siguiente imagen:

![colorEjemplo](img07.png)

Este dibujo representa el caso de ejemplo, pintando de rojo el area de un rectángulo y de amarillo el del otro. Como se puede ver, el área anaranjada es la que se está contando dos veces.

Esta observación nos lleva a la siguiente idea:

$A_total$ = $A_1$ + $A_2$ - $A_{intersección}$

Donde $A_1$ es el área de un rectángulo, $A_2$ el área del otro y $A_{intersección}$ el área (la cantidad de celdas) en las que se sobreponen ambos rectángulos. Notando que si no existe intersección su área es cero.

De esto, lo que tu programa deber hacer es:

 1. Leer las coordenadas de los rectángulos.
 2. Calcular el área cubierta:
	- Calcular el área de los ractángulos.
	- Calcular las coordenadas de la intersección (si existiese).
	- Calcular el área de la intersección (si existiese).
 3. Dar la respuesta.

# Encontrar la intersección

Lo que se busca lograr es obtener las coordenadas del rectángulo de intersección.

De nuevo para observar las posibles intersecciones analizemos las siguientes imagenes.

![interseccion1](img08.png) ![interseccion2](img09.png) ![interseccion3](img10.png)

Se puede ver que la línea roja coincide con una arista izquierda de uno de los rectángulos y analogamente la línea verde coincide con una arista derecha de uno de los rectángulos.

Ahora ya que tenemos dos opciones, ¿cual de las arista izquierdas hay que tomar?
Bueno la respuesta es algo sencilla, hay que tomar la arista izquierda (de los rectángulos que se dan en la entrada) que esté mas a la derecha. Al experimentar con mas casos podras darte cuenta porque la arista izquierda (de alguno de los rectángulos) que este mas a la izquierda no puede ser parte de la intersección.

Como se puede observar, algo similar pasa con la línea verde, hay que tomar la arista derecha (de alguno de los rectángulos) que este mas a la izquierda. 

Ahora buen, para las arista de arriba y abajo pasa algo similar, solo hay que adecuar el procedimiento que acabamos de realizar.

Ahora hay que considerar el siguiente caso, cuando no existe rectángulo de intersección:

![noInterseccion](img11.png)

Lo que se puede detectar facilmente, ya que el línea roja estará mas a la derecha que la línea verde, y en este caso el área de intersección será cero.

Con estas observaciones ya se pueden calcular la cantidad de celdas de la intersección y obtener el resultado correcto, sin contar ninguna celda mas de una vez.