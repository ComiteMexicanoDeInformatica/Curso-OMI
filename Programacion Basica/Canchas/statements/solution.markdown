Para aclarar, lo que pide el problema es dados dos rectángulos encontrar el área que cubren ambos.
Consideremos el caso de ejemplo:

![ejemplo](img01.png)

A veces resulta útil hacer dibujos para representar el problema, ya que puede ayudarte a entenderlo
y posiblemente llevarte a la solución.

El resultado para este caso es 21, ya que son 21 celdas las que son cubiertas por los rectángulos.
Para llegar a esto se puede contar celda por celda, como indica la siguiente imagen:

![solucion](img02.png) 

La idea de contar celda por celda ocupada es buena para casos pequeños,
pero de acuerdo con las especificaciones del problema, las coordenadas van de 0 a 10,000.
Eso significa que para casos muy grandes esto puede llegar hasta 100,000,000 celdas que contar,
que es impráctico ya que esto no se puede realizar dentro del límite de tiempo que establece el problema
(0.05 segundos). (Hablaremos más de cómo saber si una solución es lo suficientemente rápida en problemas
posteriores.)

Retomando la representación del problema mediante dibujos, es importante abarcar tantos casos
como sea posible y no solo el que viene de ejemplo.
Los siguientes son posibles casos que hay que considerar en nuestra solución:

![posibleCaso1](img03.png) ![posibleCaso2](img04.png) ![posibleCaso3](img05.png) ![posibleCaso4](img06.png)

Como puedes ver, hay diferentes escenarios que tu programa debe ser capaz de resolver.

Si observamos la ultima imagen, debido a que los rectángulos no se sobreponen en ninguna celda,
podemos obtener la respuesta sumando el área de cada uno. 

```
area = (der_1 - izq_1) * (arriba_1 - abajo_1); 
```

Sin embargo, si los rectángulos se sobreponen en al menos una celda, al hacer esto nos dará un área
mayor a la que en realidad es, debido a que estamos contando dos veces cada celda en la que se
sobreponen, como podemos ver en la siguiente imagen:

![colorEjemplo](img07.png)

Este dibujo representa el caso de ejemplo, pintando de rojo el área de un rectángulo y de amarillo el del
otro. Como se puede ver, el área anaranjada es la que se está contando dos veces.

Esta observación nos lleva a la siguiente idea:

$$A_total = A_1 + A_2 - A_{intersección}$$

Donde $A_1$ es el área de un rectángulo, $A_2$ el área del otro y $A_{intersección}$ el área donde
se sobreponen ambos rectángulos. Notemos que si no existe intersección su área es cero.

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

Se puede ver que la línea roja coincide con una arista izquierda de uno de los rectángulos
y análogamente la línea verde coincide con una arista derecha de uno de los rectángulos.

Ahora ya que tenemos dos opciones, ¿cuál de las aristas izquierdas hay que tomar?

Resulta que hay que tomar la arista izquierda que esté mas a la derecha.
Al experimentar con más casos podras darte cuenta de por qué la arista izquierda
que esté más a la izquierda no puede ser parte de la intersección.

```
if (izq_1 > izq_2) {
	izq_intr = izq_1;	
} else {
	izq_intr = izq_2;
}
```

Como se puede observar, algo similar pasa con la línea verde:
hay que tomar la arista derecha que esté más a la izquierda. 

```
if (der_1 < der_2) {
	der_intr = der_1;
} else {
	der_intr = der_2;
}
```

Ahora bien, para las arista de arriba y abajo pasa algo similar,
sólo hay que adecuar el procedimiento que acabamos de realizar.
Una vez con las cuatro variables, calcular el área de intersección sería algo como:

```
area_intr = (der_intr - izq_intr) * (arriba_intr - abajo-intr);
```

Ahora hay que considerar el caso en el que no exista rectángulo de intersección:

![no intersección](img11.png)

Podemos ver que la línea roja estará más a la derecha que la línea
verde, y en este caso el área de intersección será cero.

Con estas observaciones ya se pueden calcular la cantidad de celdas de la
intersección y obtener el resultado correcto, sin contar ninguna celda más de una vez.

```
if (izq_intr < der_intr && abajo_intr < arriba_intr) {
    area_intr = (der_intr - izq_intr) * (arriba_intr - abajo-intr);
} else {
    area_intr = 0;
}
```

# Obtener el área correcta

Por último, calculamos el área total:

```
area_total = area_1 + area_2 - area_intr;
```
