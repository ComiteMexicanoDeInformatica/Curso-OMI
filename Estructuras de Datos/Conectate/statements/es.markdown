#Conectate

# Descripción

Está construyendo un circuito electrónico crítico para el xPhone 8, un nuevo teléfono que revolucionará toda la industria con su cuerpo delgado de 2,2 mm y una curvatura del 5.4% en sus esquinas que el xPhone 5 obsoleto e inútil.

El circuito electrónico que está construyendo tiene la siguiente forma:

Hay 2 nodos en un cable principal (un "bus"), conectados eléctricamente entre sí en una línea.
Cada nodo también necesita estar conectado exactamente a otro nodo con un nuevo cable que colocará. Los $2N$ nodos se etiquetan por números enteros entre $1-N$. Habrá exactamente dos nodos con cada etiqueta, y estos $N$ pares de nodos deben conectarse entre sí con $N$ nuevos cables.

El circuito debe estar impreso en una placa de circuito plano, y no se pueden solapar los cables. Cada cable colocado entre dos nodos estará completamente sobre el cable principal o completamente debajo.

![izquierda](ejemplo.jpg) ![medio](ejemplo2.jpg) ![derecha](ejemplo3.jpg)

- La imagen izquierda ilustra una configuración de cableado válida.
- La imagen del medio ilustra una configuración de cableado no válida.
- La imagen de la derecha ilustra una configuración de cableado válida que solo coloca cables nuevos sobre el cable principal.

Tenga en cuenta que para el caso de prueba en las imágenes izquierda y central, no hay una configuración de cableado válida que solo coloque cables nuevos sobre el cable principal.

# Restricciones

Debe escribir un programa que determine si es posible construir el circuito con estas restricciones. De ser así, debe generar una salida para cada nodo, ya sea que su nuevo cable se conecte desde arriba o desde abajo del cable principal.

# Entrada

La primera línea de entrada contendrá un número entero $N$ , el número de pares de nodos.
Las siguientes líneas $2N$ contendrán un número entero $L,i$ entre $1-N$ , la etiqueta del $i-$ésimo nodo. Cada valor de L i aparecerá dos veces.

# Salida

Si su programa determina que no hay forma de conectar todos los pares de nodos, debería generar una línea que contenga 0. De lo contrario, su programa debería generar líneas $2N$ que describan la forma en que conecta los pares. La $i-$ésima línea debe contener $1 - 2$.

- 1 significa que el nodo está conectado desde arriba.
- 2 significa que está conectado desde abajo al otro nodo de la misma etiqueta.

||input
3
1
1
3
2
3
2
||output
1
1
2
1
2
1
||description
El primer caso de muestra corresponde al caso en los diagramas izquierdo y medio de arriba.
||input
3
1
1
3
2
2
3
||output
1
1
1
1
1
1
||description
El segundo caso de muestra corresponde al caso en el diagrama de la derecha.
||end

#Subtareas y restricciones

Para todas las subtareas, $1 ≤ N ≤ 100,000$.

- Para la Subtarea 1 (20 puntos), $1 ≤ N ≤ 100$ y el circuito es imposible de conectar o solo requiere cables nuevos por encima del cable principal (es decir, 0 será la salida correcta o 2 líneas cada uno que contengan 1 serán un correcta salida).
- Para la Subtarea 2 (20 puntos), $1 ≤ N ≤ 100$.
- Para la Subtarea 3 (20 puntos), $1 ≤ N ≤ 1,000$.
- Para la Subtarea 4 (20 puntos), el circuito es imposible de conectar o solo requiere cables nuevos por encima del cable principal (es decir, 0 será la salida correcta o 2 líneas cada uno que contengan 1 será una salida correcta).
- Para la Subtarea 5 (20 puntos), no se aplican restricciones adicionales.
