PARÉNTESIS

Vamos a resolver el problema PARÉNTESIS, Para evitar errores y complicaciones en su implementación, es importante analizar la solución ¿Qué tiene que hacer nuestro programa? 
- Leer una cadena, que es un conjunto de caracteres, en este caso conformada  por paréntesis abiertos "(" y cerrados ")" en distinto orden. 
- Verificar si el conjunto de paréntesis esta balanceado o existe alguno(s) que se cierran incorrectamente o no se cierren. 
- Escribir como resultado un SI cuando la cadena de paréntesis este balanceada y un NO cuando este incorrecta. 


CONSIDERACIONES PARA LA DEFINICIÓN DE VARIABLES 
 
Antes de que podamos leer algo, necesitaremos variables empezando por una para almacenar la cadena de paréntesis. 

  string k; 

Un segundo elemento que necesitamos dclarar es una PILA. una Pila es un arreglo (vector) que permite amontonar los elementos a procesar incrementando en uno el índice cada vez que se apila un nuevo elemnto en el monton, y se decrementa en uno cada vez que se toma un elemnto de la pila (el último que entró). Por lo tanto, en una Pila el primer elemento en entrar, es el último en salir (por que queda hasta abajo) y último elemento en entrar será el primero en salir (por que está hasta arriba). 

Consideremos entonces la definición de un arreglo para amononar los paréntesis que se van abriendo y poder retirarlos conforme se van cerrando. 
 
  int pila[1000000];
  
También declararemos dos variables enteras que utilizaremos como índices, x para el string (recordemos que un string es también un arreglo de caracteres), mientras y nos servirá como índice de la pila. 

  int x=0,y=0;

  
VERIFICAR SI EL CONJUNTO DE PARÉNTESIS ESTA BALANCEADO 

EL primer paso es leer el conjunto de parentesis en nuestro string

  cin>>k;

A diferencia de otros casos en que se lee la cantidad de elementos ha ser procesados para poder controlar la cantidad de lecturas, C/C++ nos ofrecen el método size() que nos permiten saber el tamaño de un string; es decir cuantos caracteres conforman el string leido para poder controlar el ciclo en que lo vamos a recorrer como si fuera un arreglo de caracteres.
Así, mientras nuestro índice x no sobrepase el tamaño del string (la última posición del arreglo de caracteres) verificará si los parentesis están balanceados. 
  
  while(x!=k.size()){  
  
De esta manera, el índice x tomara valores desde 0 hasta el número de parentesis que se leyeron en el string k para poder accesar a cada uno de ellos por separado.

Cuando el paréntesis en la posición k[x] sea de apertura  "(" lo amontonaremos en la pila como un 1 en la posición 
y ; es decir la que nos indica cuantos paréntesis llevaamos apliados, e incrementamos su posición para contabilizar el recien apilado.

  if (k[x] == '(' ) {
      pila[y] = 1;
      y++;
  }

Cuando el paréntesis en la posición k[x] sea para cerrar ")" sacaremos el último paréntesis amontonado en la pila poniendo la posición y de la pila en 0 y decrementando el índice y.
 
  else 
  {  pila[y] = 0;
     y--;

En este punto es muy importante considerar que mientras el índice y sea mayor o igual a 0, significa que aún existan paréntesis abiertos (es decir unos) amontonados en la pila o que se han cerrado en forma balanceada todas las parejas de paréntesis que se han eleido hasta la posición x del string k.
Sin embargo, en caso de que y tome un valor negativo, esto significa que se ha cerrado un parentesis que no tenia una pareja abierta anteriormente, por lo que no están balanceados y ya no es necesario seguir procesando los demas paréntesis si los hubiera, .

     if (y < 0)
     {   x = -1;
         break;
     }
  }
  
Solo nos falta incrementar la posición del índice x y cerrar el ciclo while

  x++;
 }

 
ESCRIBIR LA SALIDA 

Nótese que cuando salimos del ciclo con break, se le dió a x el valor de -1 para utilizarlo como una bandera para indicar que el ciclo terminó por que no están balanceados los paréntesis, de tal forma que 

  if (x == -1)
  {
     cout << "NO";
  }  

De lo contrario se debe dar como resultado un solo "SI" cuando "y" termina con el valor de cero, lo que significa que no faltaron ni sobraron paréntesis y que están bien balanceados.

  else {
     if (y == 0)
        cout << "SI";
     else
        cout << "NO";
  }
 }

Después de haber reunido todo el código, (con suerte) hemos construido una solución que debe obtener una puntuación completa.
