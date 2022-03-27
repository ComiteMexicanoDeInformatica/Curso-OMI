# Descripción

Cierta computadora tiene un procesador que puede atender un proceso a la vez por $K$ unidades de tiempo.

Si el proceso necesita más de $K$ unidades para terminar, el procesador lo atiende exactamente $K$ unidades y deja pendientes las unidades excedentes.
Cuando un proceso es atendido y no finaliza, se forma al final de la lista de procesos pendientes.

# Problema

Escribe un programa que lea el número de procesos, $K$, los IDs y el tiempo de ejecución de cada uno de los $N$ procesos y determine el orden en que los procesos finalizarán.

# Entrada

En la primera línea dos enteros, $N$ y $K$.
En cada una de las siguientes $N$ líneas, dos enteros $X, Y$, separados por un espacio. Que denotan el ID del proceso y el tiempo de ejecución que necesita para concluir.

# Salida

$N$ líneas con los ID de los procesos en el orden que concluyeron. Considera que los procesos de la entrada ya se encuentran en la lista de espera.

# Ejemplo

||input
5 6
100 30
102 50
109 13
45 88
39 7
||output
39
109
100
102
45
||description
![Descripción](example.gif)
||end

# Límites

- $1 \leq N \leq 1000$
- $1 \leq K \leq 100$
- $1 \leq t_i \leq 1000$
