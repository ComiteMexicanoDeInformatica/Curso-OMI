Años de sequía han afectado duramente a Australia. Con los niveles de captación en su punto más bajo, decides comprar un tanque de agua de lluvia. Pronto llegan las lluvias de invierno y el tanque comienza a llenarse lentamente.
Comienzas a preguntarse cuándo estará completamente lleno el tanque. Un amigo de la oficina meteorológica te compartió las predicciones de lluvia para los próximos días.

# Problema

Teniendo en cuenta estas predicciones, y el tamaño de tu tanque de agua de lluvia, escribe un programa para determinar en cuántos se llenará el tanque.

# Entrada

La primera línea de entrada tendrá la forma $n, c$, donde $n$ es el número de predicciones meteorológicas, y $c$ es la capacidad de tu tanque de agua de lluvia en litros. Se garantiza que $c$ es un entero positivo no mayor que la cantidad total de lluvia que cae durante los $n$ días.

Las $n$ líneas de entrada restantes describirán los niveles de precipitación para cada día en orden. cada linea $i$, contendrá un entero $L_i$: la cantidad de lluvia (en litros) que caerá sobre tu tanque de agua de lluvia el día $i$.

# Salida

Tu salida debe consistir en un entero único: la cantidad de días hasta que se llene el tanque de agua de lluvia.

||input
6 10
2
3
3
2
2
4
||output
4
||end

# Límites

- $1 \leq n \leq 1,000$
- $0 \leq L_i \leq 1,000,000$
