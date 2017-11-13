#Descripción
Años de sequía han afectado duramente a la Australia rural. Con los niveles de captación en su punto más bajo, se decide comprar un tanque de agua de lluvia. Pronto llegan las lluvias de invierno y el tanque comienza a llenarse lentamente. 
Comienzas a preguntarse cuándo su tanque estará completamente lleno. Un amigo de la oficina meteorológica ha proporcionado gentilmente predicciones de lluvia para los próximos días. Teniendo en cuenta estas predicciones, y el tamaño de su tanque de agua de lluvia, escriba un programa para determinar cuántos días le toma llenar el tanque.

#Entrada
La primera línea del archivo de entrada tendrá la forma n c, donde n es el número de días que duran las predicciones meteorológicas, y c es la capacidad de su tanque de agua de lluvia en litros. Se le garantiza que 1 <= n <= 1,000, y que c es un entero positivo no mayor que la cantidad total de lluvia que cae durante los n días.
Las n líneas de entrada restantes describirán los niveles de precipitación para cada día en orden. Cada línea contendrá un entero único entre 0 y 1,000,000: la cantidad de lluvia (en litros) que caerá sobre su tanque de agua de lluvia ese día.

#Salida
Su salida debe consistir en un entero único: la cantidad de días hasta que se llene el tanque de agua de lluvia.
Ejemplo 1
||input 
6  10
2
3
3
2
2
4

||output 
4

||input 
6  11
2
3
3
2
2
4

||output 
4

||description
En ambos ejemplos, la lluvia total cambia de la siguiente manera:
Total diario (en litros)
1     2
2     5
3      8
4     10
5     12
6     16
Por lo tanto, un tanque de agua de 10 litros está lleno después de 4 días y un tanque de agua de 11 litros está lleno después de 5 días.
