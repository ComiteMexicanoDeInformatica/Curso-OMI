Eres el dueño de un puesto de tacos. Sin embargo, en estas últimas semanas tus tacos se han vuelto realmente famosos dentro de la ciudad gracias a su sabor único e inigualable. Es por ello que todos los días se forman largas filas de espera. Debido a esto, te gustaría llevar un control del negocio. Para hacer la tarea más fácil, has decidido crear un programa que te ayude en esta tarea.

# Entrada

En la primera línea recibirás un entero $N$, el número de operaciones a realizar. En las siguientes $N$ líneas recibirás un entero representando la operación a realizar:

 - Si el entero es un $1$, significa que un nuevo cliente se forma en la fila, por lo que deberás leer un entero $t$ representando el número de tacos que desea ordenar.
 - Si el entero es un $2$, significa que el cliente que se encuentra al frente de la fila será atendido.
 - Si el entero es un $3$, significa que quieres saber el número de clientes que se encuentran formados actualmente en la fila.
 - Si el entero es un $4$, significa que quieres saber el número de tacos que has vendido hasta ahora.

# Salida

Por cada una de las entradas del tipo $3$ y $4$, deberás imprimir un entero por línea representando la respuesta a la pregunta correspondiente.

# Ejemplo

||examplefile
sample
||description
Al principio se forman 3 personas pidiendo $4$, $3$ y $10$ tacos respectivamente. Después se pregunta por el número de personas formadas, así que la respuesta es $3$. Luego se forma un cliente más pidiendo $5$ tacos. Posteriormente son atendidos los primeros 2 clientes, por lo que se venden $4+3=7$ tacos. Luego se forma un cliente más a la fila pidiendo $9$ tacos. Finalmente, se pregunta por el número de tacos vendidos, así que la respuesta es $7$.
||examplefile
sample1
||end

# Límites

* $1 \leq n \leq 10,000$
* $1 \leq t \leq 1,000$
