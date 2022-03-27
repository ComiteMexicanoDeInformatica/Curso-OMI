Para aclarar, lo que pide el problema es dados dos rect�ngulos encontrar el �rea que cubren ambos.
Consideremos el caso de ejemplo:

![ejemplo](img01.png)

A veces resulta �til hacer dibujos para representar el problema, ya que puede ayudarte a entenderlo
y posiblemente llevarte a la soluci�n.

El resultado para este caso es 21, ya que son 21 celdas las que son cubiertas por los rect�ngulos.
Para llegar a esto se puede contar celda por celda, como indica la siguiente imagen:

![solucion](img02.png)

La idea de contar celda por celda ocupada es buena para casos peque�os,
pero de acuerdo con las especificaciones del problema, las coordenadas van de 0 a 10,000.
Eso significa que para casos muy grandes esto puede llegar hasta 100,000,000 celdas que contar,
que es impr�ctico ya que esto no se puede realizar dentro del l�mite de tiempo que establece el problema
(0.05 segundos). (Hablaremos m�s de c�mo saber si una soluci�n es lo suficientemente r�pida en problemas
posteriores.)

Retomando la representaci�n del problema mediante dibujos, es importante abarcar tantos casos
como sea posible y no solo el que viene de ejemplo.
Los siguientes son posibles casos que hay que considerar en nuestra soluci�n:

![posibleCaso1](img03.png) ![posibleCaso2](img04.png) ![posibleCaso3](img05.png) ![posibleCaso4](img06.png)

Como puedes ver, hay diferentes escenarios que tu programa debe ser capaz de resolver.

Si observamos la ultima imagen, debido a que los rect�ngulos no se sobreponen en ninguna celda,
podemos obtener la respuesta sumando el �rea de cada uno.

```
area = (der_1 - izq_1) * (arriba_1 - abajo_1);
```

Sin embargo, si los rect�ngulos se sobreponen en al menos una celda, al hacer esto nos dar� un �rea
mayor a la que en realidad es, debido a que estamos contando dos veces cada celda en la que se
sobreponen, como podemos ver en la siguiente imagen:

![colorEjemplo](img07.png)

Este dibujo representa el caso de ejemplo, pintando de rojo el �rea de un rect�ngulo y de amarillo el del
otro. Como se puede ver, el �rea anaranjada es la que se est� contando dos veces.

Esta observaci�n nos lleva a la siguiente idea:

$$A_total = A_1 + A_2 - A_{intersecci�n}$$

Donde $A_1$ es el �rea de un rect�ngulo, $A_2$ el �rea del otro y $A_{intersecci�n}$ el �rea donde
se sobreponen ambos rect�ngulos. Notemos que si no existe intersecci�n su �rea es cero.

De esto, lo que tu programa deber hacer es:

1. Leer las coordenadas de los rect�ngulos.
2. Calcular el �rea cubierta:
   - Calcular el �rea de los ract�ngulos.
   - Calcular las coordenadas de la intersecci�n (si existiese).
   - Calcular el �rea de la intersecci�n (si existiese).
3. Dar la respuesta.

# Encontrar la intersecci�n

Lo que se busca lograr es obtener las coordenadas del rect�ngulo de intersecci�n.

De nuevo para observar las posibles intersecciones analizemos las siguientes imagenes.

![interseccion1](img08.png) ![interseccion2](img09.png) ![interseccion3](img10.png)

Se puede ver que la l�nea roja coincide con una arista izquierda de uno de los rect�ngulos
y an�logamente la l�nea verde coincide con una arista derecha de uno de los rect�ngulos.

Ahora ya que tenemos dos opciones, �cu�l de las aristas izquierdas hay que tomar?

Resulta que hay que tomar la arista izquierda que est� mas a la derecha.
Al experimentar con m�s casos podras darte cuenta de por qu� la arista izquierda
que est� m�s a la izquierda no puede ser parte de la intersecci�n.

```
if (izq_1 > izq_2) {
	izq_intr = izq_1;
} else {
	izq_intr = izq_2;
}
```

Como se puede observar, algo similar pasa con la l�nea verde:
hay que tomar la arista derecha que est� m�s a la izquierda.

```
if (der_1 < der_2) {
	der_intr = der_1;
} else {
	der_intr = der_2;
}
```

Ahora bien, para las arista de arriba y abajo pasa algo similar,
s�lo hay que adecuar el procedimiento que acabamos de realizar.
Una vez con las cuatro variables, calcular el �rea de intersecci�n ser�a algo como:

```
area_intr = (der_intr - izq_intr) * (arriba_intr - abajo-intr);
```

Ahora hay que considerar el caso en el que no exista rect�ngulo de intersecci�n:

![no intersecci�n](img11.png)

Podemos ver que la l�nea roja estar� m�s a la derecha que la l�nea
verde, y en este caso el �rea de intersecci�n ser� cero.

Con estas observaciones ya se pueden calcular la cantidad de celdas de la
intersecci�n y obtener el resultado correcto, sin contar ninguna celda m�s de una vez.

```
if (izq_intr < der_intr && abajo_intr < arriba_intr) {
    area_intr = (der_intr - izq_intr) * (arriba_intr - abajo-intr);
} else {
    area_intr = 0;
}
```

# Obtener el �rea correcta

Por �ltimo, calculamos el �rea total:

```
area_total = area_1 + area_2 - area_intr;
```
