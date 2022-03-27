# Funciones Recursivas ([topcoder](https://www.topcoder.com/community/data-science/data-science-tutorials/an-introduction-to-recursion-part-1/).)

La _recursión_ es una herramienta de programación maravillosa, provee una forma simple y poderosa de abordar una variedad de problemas. Con frecuencia es dificil "pensar" recursivamente. También es facíl escribir un programa recursivo que tarda demasiado tiempo en ejecutarse o no termina en absoluto. En este artículo repasaremos los conceptos básicos de la recursión y esperamos que te ayude a desarrollar o perfeccionar una habilidad de programación muy importante.

## ¿Qué es la recursión?

Para poder definir exactamente lo que es la recursión, primero necesitamos responder la pregunta "¿Qué es la recursión?" Basicamente, decimos que una función es recursiva si se llama a si misma. A continuación se muestra un pseudocódigo para una función recursiva que imprime la frase "Hola Mundo!" $n$ veces:

```
function HolaMundo(n)
{
  if(n<1)return
  print("Hola Mundo!")
  HolaMundo(n - 1)
}
```

Puede que no esté claro qué estamos haciendo aquí, así que explicaremos que está sucediendo, si llamamos a nuestra función con $n=10$. Dado que $n$ no es menor que $1$, no hacemos nada en la primera línea. En la siguiente línea, imprimimos "Hola Mundo!" Una vez. En este punto, necesitamos imprimir nuestra frase 9 veces más. Como ahora tenemos una función _HolaMundo_ que puede hacer eso, simplemente llamamos a _HolaMundo_ (esta vez con $n=9$) para imprimir las copias restantes. Esa copia de _HolaMundo_ imprimirá la frase una vez, y luego llamará a otra copia de _HolaMundo_ para imprimir los 8 restantes. Esto continuará hasta que finalmente llamemos a _HolaMundo_ con $n=0$. _HolaMundo(0)_ no hace nada; solo ejecuta el return (es decir regresa). Una vez que _HolaMundo(0)_ ha finalizado, _HolaMundo(1)_ también se ejecuta y regresa. Esto continúa hasta nuestra llamada original de _HolaMundo(10)_, que termina de ejecutarse habiendo impreso $10$ veces "Hola Mundo!"

Puedes estar pensando que esto no es muy emocionante, pero esta función demuestra algunas consideraciones clave en el diseño de un algoritmo recursivo

1. **Maneja un "caso base" simple sin usar recursión.**

En este ejemplo, el caso base es _"HolaMundo(0)"_; si se le pide a la función que imprima cero veces "Hola Mundo!", regresa sin generar más llamadas a la función "HolaMundo".

2. **Evita ciclos infinitos.**

Imagina si "HolaMundo(10)" llamó a "HolaMundo(10)" que llamó "HolaMundo(10)". Terminas con un ciclo infinito de llamadas, y esto normalmente daría como resultado un error de "desbordamiento de pila" al ejecutar. En muchos programas recursivos, puedes evitar ciclos haciendo que cada llamada de función sea para un problema que de alguna manera es más pequeño o más simple que el problema original. En este caso, por ejemplo, el valor de $n$ será cada vez más pequeño en cada llamada. A medida que el problema se vuelve más simple y simple (en este caso, consideraremos que es "más simple" imprimir algo cero veces en lugar de imprimirlo 5 veces) eventualmente llegará al "caso base" y se detendrá la recursión. Hay muchas maneras de evitar ciclos infinitos, pero asegurarse de que estamos tratando con problemas cada vez más pequeños o más simples es una buena regla general.

3. **Cada llamada de la función representa un manejo completo de la tarea dada.**

A veces, la recursión puede parecer mágica en la forma en que descompone los grandes problemas. Sin embargo, no existe el almuerzo gratis. Cuando a nuestra función se le da un argumento de 10, imprimimos "Hola Mundo!" Una vez y luego lo imprimimos 9 veces más. Podemos pasar una parte del trabajo junto con una llamada recursiva, pero la función original todavía tiene que dar cuenta de las 10 copias de alguna manera.

## ¿Por qué usar recursión?

El problema que ilustramos anteriormente es simple, y la solución que escribimos funciona, pero probablemente habría sido mejor simplemente usar un ciclo en lugar de la recursión. Donde la recursión tiende a brillar es en situaciones donde el problema es un poco más complejo. La recursión se puede aplicar a casi cualquier problema, pero hay ciertos escenarios para los cuales la encontrarás particularmente útil. En lo que resta de este artículo, analizaremos algunos de estos escenarios y, a lo largo del camino, discutiremos algunas ideas centrales más para tener en cuenta al usar la recursión.

**Escenario n.º 1: Jerarquías, redes o gráfos**

En la discusión de algoritmos, cuando hablamos de un gráfo, generalmente no hablamos de un gráfico que muestra la relación entre variables. Por el contrario, generalmente estamos hablando de una red de cosas, personas o conceptos que están conectados entre sí de varias maneras. Por ejemplo, un mapa de carreteras podría considerarse como un gráfo que muestra ciudades y cómo están conectadas por carreteras. Los gráfos pueden ser grandes, complejos e incómodos de manejar programáticamente. También son muy comunes en la teoría de algoritmos y las competicias de algoritmos. Afortunadamente, trabajar con gráfos puede simplificarse mucho más si se utiliza la recursión. Un tipo común de gráfo es una jerarquía, un ejemplo de lo cual es el organigrama de una empresa:

![Image description](hierarchy2.png)

---

| Nombre   | Gerente  |
| -------- | -------- |
| Betty    | Sam      |
| Bob      | Sally    |
| Dilbert  | Nathan   |
| Joseph   | Sally    |
| Nathan   | Veronica |
| Sally    | Veronica |
| Sam      | Joseph   |
| Susan    | Bob      |
| Veronica |

---

En este gráfo, los objetos son personas, y las conexiones en el gráfo muestran quién informa a quién en la empresa. Una línea ascendente en nuestro gráfo dice que la persona que está más abajo en el gráfo informa a la persona que está sobre ellos. En la tabla de arriba vemos cómo esta estructura podría representarse en una base de datos. Para cada empleado, registramos su nombre y el nombre de su gerente (y a partir de esta información podríamos reconstruir toda la jerarquía si fuera necesario, ¿ves cómo?).

Ahora supongamos que tenemos la tarea de escribir una función como la siguiente **"contarEmpleadosAbajo(empleadoNombre)"**. Esta función está destinada a decirnos cuántos empleados informan (directa o indirectamente) a la persona nombrada por **empladoNombre**. Por ejemplo, supongamos que llamamos **"contarEmpleadoAbajo('Sally')"** para averiguar cuántos empleados reportan a Sally.

Para comenzar, es bastante simple contar cuántas personas trabajan directamente debajo de ella. Para hacer esto, recorremos cada registro de la base de datos, y para cada empleado cuyo gerente es Sally, incrementamos una variable de contador. Implementando este enfoque, nuestra función devolvería un conteo de 2: Bob y Joseph. Este es un comienzo, pero también queremos contar a personas como Susan o Betty, que son las más bajas en la jerarquía, pero que informan a Sally indirectamente. Esto es incómodo porque cuando se mira el registro individual de Susan, por ejemplo, no está inmediatamente claro cómo está involucrada Sally.

Una buena solución, como habrás adivinado, es usar recursividad. Por ejemplo, cuando encontramos el registro de Bob en la base de datos, no solo incrementamos el contador en uno. En cambio, aumentamos en uno (para contar a Bob) y luego lo incrementamos en función del número de personas que informan a Bob. ¿Cómo averiguamos cuántas personas se reportan a Bob? Usamos una llamada recursiva a la función que estamos escribiendo: **"contarEmpleadoAbajo('Bob')"**. Aquí hay un pseudocódigo para este enfoque:

```
function contarEmpleadoAbajo(empleadoNombre)
{
  declare variable contador
  contador = 0
  for each persona in empleadoBasedatos
  {
    if(persona.manager == empleadoNombre)
    {
      contador = contador + 1
      contador = contador + contarEmpleadoAbajo(persona.nombre)
    }
  }
  return contador
}
```

Si eso no está muy claro, lo mejor es intentar seguir mentalmente linea-por-linea la ejecucción de nuestra función. Recuerde que cada vez que realiza una llamada recursiva, obtiene una copia nueva de todas sus variables locales. Esto significa que habrá una copia separada del contador para cada llamada. Si ese no fuera el caso, realmente habría problemas cuando establecemos el contador a cero al comienzo de la función. Como ejercicio, considere cómo podríamos cambiar la función para incrementar una variable global en su lugar. Sugerencia: si estuviéramos incrementando una variable global, nuestra función no necesitaría devolver un valor.

**Declaraciones de misión**

Una cosa muy importante a considerar cuando se escribe un algoritmo recursivo es tener una idea clara de la "declaración de misión" de nuestra función. Por ejemplo, en este caso, he supuesto que una persona no debe contarse como reportándose a sí misma. Esto significa que **"contarEmpleadoAbajo('Betty')"** devolverá cero. Así, la declaración de misión de nuestra función podría ser "Devolver el conteo de personas que informan, directa o indirectamente, a la persona nombrada en empleadoNombre, sin incluir a la persona llamada **empleadoNombre**".

Pensemos en lo que debería cambiar para que una persona cuente como reportándose a sí misma. En primer lugar, lo que tendríamos que hacer si no hay personas que informan a alguien, devolvamos uno en lugar de cero. Esto es simple: simplemente cambiamos la línea **"contador = 0"** a **"contador = 1"** al comienzo de la función. Esto tiene sentido, ya que nuestra función tiene que devolver un valor 1 más alto que antes. Una llamada a **"contarEmpleadoAbajo('Betty')"** ahora devolverá 1.

Sin embargo, debemos ser muy cuidadosos aquí. Cambiamos la declaración de misión de nuestra función, y cuando trabajamos con recursividad eso significa que debemos observar de cerca cómo estamos usando la llamada de manera recursiva. Por ejemplo, "contarEmpleadosAbajo('Sam')" ahora daría una respuesta incorrecta de 3. Para ver por qué, sigue el código: Primero, contaremos a Sam como 1 al establecer el contador en 1. Luego, cuando nos encontremos con Betty, La contaré como 1. Luego, contaremos los empleados que se reportan con Betty, y eso también devolverá 1 ahora.

Está claro que estamos contando doblemente a Betty; la "declaración de misión" de nuestra función ya no coincide con la forma en que la estamos usando. Necesitamos deshacernos de la línea **"contador = contador + 1"**, reconociendo que la llamada recursiva ahora contará a Betty como "alguien que informa a Betty" (y por lo tanto no necesitamos contarla antes de la llamada recursiva).

A medida que nuestras funciones se vuelven cada vez más complejas, los problemas con "declaraciones de misión" ambiguas se vuelven cada vez más evidentes. Para hacer que la recursividad funcione, debemos tener una especificación muy clara de lo que está haciendo cada llamada a la función o, de lo contrario, podemos terminar con algunos errores muy difíciles de depurar. Incluso si el tiempo es limitado, a menudo vale la pena comenzar escribiendo un comentario que detalle exactamente qué se supone que debe hacer la función. Tener una "declaración de misión" clara significa que podemos estar seguros de que nuestras llamadas recursivas se comportarán como esperamos y que la imagen completa se combinará correctamente.
