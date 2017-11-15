¿SENTADOS O PARADOS? 

Vamos a resolver el problema ¿Sentados o Parados?. Para evitar errores y pérdida de tiempo, es importante planificar ¿Qué tiene que hacer nuestro programa? 
- Lea el número de filas existentes, asientos por fila y boletos vendidos. 
- Calcule el número de personas que pueden sentarse y el número de personas que deben quedarse parados. 
- Escriba los valores calculados. 

¿Suena como un plan? Empecemos. 


ESQUELETO DEL CÓDIGO 
 
#include <iostream>

 / * Declarar variables * /

 int main () {
	 / * Leer la entrada * /
	
	 / * Calcular la respuesta * /
	
	 / * Escribe la salida * /
	
	 return 0;
 } 
  
¿Esto se te hace familiar? Sí, esta es exactamente la misma plantilla con la que comenzamos para el problema anterior (a+b). De hecho, la mayoría de los problemas informáticos con los que te encontrarás se pueden tratar usando un enfoque de lectura-cálculo-escritura. En última instancia, calcular la respuesta generalmente será la parte más compleja de cualquier solución. A medida que avancemos, querremos dedicar más tiempo a pensar en esta parte y menos a preocuparnos por leer y escribir los datos de entrada y salida. Con la práctica suficiente, esperamos que esto último quede en segundo plano. 


LEYENDO LA ENTRADA 

Al igual que antes, declaramos la libreria para utilizar los comandos de Entrada y Salida de datos en C++, así como la identificación estandarizada de su clase contenedora std.

 #include <iostream>
 using namespace std;
 
Antes de que podamos leer algo, necesitaremos variables para almacenar los datos. Vamos a declarar algunas de ellos ahora. 

	int r, s, b, ns; 

Recuerde, no importa cómo nombre sus variables, siempre y cuando sus nombres le recuerden lo que representan. En este caso, denominé las dos primeras variables r y s , ya que esas fueron las letras utilizadas en la declaración del problema. Llamé a la siguiente b porque representa el número de boletos vendidos. Las últimas dos variables, ns y np, se usarán para almacenar nuestras respuestas posteriormente. Sus nombres tienen los significados obvios. 
Solo se necesita una línea de código para leer todas las variables de entrada. 
 
  cin >> r >> s >> b;
  
La línea le dice a la computadora que espere tres valores (enteros, de acuerdo a la declaración de variables) separados por un espacio. los caracteres >> le dice que almacene estos enteros en r, s y b (en ese orden). 
Antes de continuar, es posible que desee darle una prueba rápida al código. Compile y ejecútelo. Si se compila correctamente y no falla, lo estamos haciendo bien. 


CALCULANDO LA RESPUESTA 

Ahora que tenemos todas las entradas relevantes ( r , s , b ), ¿cómo vamos a calcular el número de personas sentadas y el número de personas paradas? Comencemos por examinar los datos de muestra. 
Entrada		Salida 
 7 12		84 16
 100 
   
¿Que esta pasando aqui? En este caso particular, hay 7 filas con 12 asientos cada una, lo que da un total de 84 asientos. Cuando las 100 personas llegan al ayuntamiento, todos tratan de sentarse, y todos los asientos son ocupados por 84 personas. Las 16 personas restantes se ven obligadas a pararse. Esto sugiere un enfoque directo: llenamos todos los asientos y usamos la resta para determinar cuántos quedan en pie. Es decir: 

 r * s;   // Asiente tantos como podamos
 b - ns;  //El resto 

Sin embargo, hay otro tipo de caso que debemos considerar. Suponemos que es posible llenar todos los asientos, pero ¿siempre es posible? 
Entrada		Salida 
 7 12		80 0
 80 
   
Observe cómo en el caso anterior hay 84 asientos, pero solo 80 de ellos están asignados. Si ejecutamos el código anterior en esta entrada podríamos recibir 84 -4 , lo cual es obviamente incorrecto (¿qué quiere decir "-4 personas"?). Claramente, si hay asientos más que suficientes para acomodar a todos, entonces queremos realizar un conjunto diferente de códigos. Estos son aún más simples: 

 cout << b;  // Todos los vendidod sentados
 cout << 0;  // Nadie queda parados 

¿Cuándo usamos cada caso? Claramente depende de si es posible sentar a todos. Específicamente, queremos comparar b con r * s y decidir a partir de esto: 

 if (ns <= b){
	 cout << ns << " " << b-ns;
 }else{
     cout << b << " " << 0;
 }
 
Supongo que tiene cierta familiaridad con las declaraciones if . Le dicen a la computadora cómo decidir entre dos conjuntos de acciones. En este ejemplo, la computadora se preguntará si ns (asientos disponibles) es menor o igual a b (boletos vendidos); es decir, de qué caso se trata y actuará en consecuencia. Para nosotros, entender el código anterior es tan simple como leerlo en voz alta. 


ESCRIBIR LA SALIDA 

 cout << ns << " " << b-ns;
 cout << b  << " " <<0;

cout envía la información almacenada al flujo de salida como resultado del proceso de acuerdo a cada una de las situaciones analizadas. 
En el primer  caso el valor de la variable ns y el resultado de la operación b-ns.
En el segundo caso el valor de la variable b  y 0 (cuando no hay parados).

Después de haber reunido todo el código, (con suerte) hemos construido una solución de trabajo para Sentados o Parados? , uno que debe obtener una puntuación completa. A diferencia del problema anterior, no se ha proporcionado el código completo, y esto es deliberado. Es mucho más beneficioso escribir el programa nosotros mismos que simplemente copiarlo y pegarlo desde otro lugar; ciertamente no tendremos ese lujo en una OMI. 
