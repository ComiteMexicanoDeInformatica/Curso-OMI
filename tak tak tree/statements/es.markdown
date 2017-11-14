# Descripción

La vida es simple en la remota aldea de Tak-Tak. Libre de los ruidos y bullicios de la vida moderna, los habitantes ocupan su día complaciendo sus dos más grandes gustos: el campo y la cocina. Sus campos de vegetales crecen fuertes y altos, y sus deliciosas comidas comunales iluminan mucho en la noche.

En el centro de la aldea se encuentra un gran árbol en expansión, cuyas largas ramas proporcionan sombra durante los veranos calurosos. El fruto del árbol Tak-Tak (como es conocido afectuosamente) es renombrado por su dulce y delicioso sabor.

A diferencia de las plantas comunes, el árbol Tak-Tak no es afectado por el clima y las temporadas. En su lugar, los frutos crecen de acuerdo a los ciclos de la Luna. Cada mes cuando la Luna llena está en su punto más alto, cada fruto del árbol brilla y se convierte en dos frutos. Cuando el Sol sale, los habitantes se despiertan para ver que el número de frutos se ha duplicado.

Los aldeanos están planeando un enorme festival para este año. En el día del festival cortarán todos los frutos del árbol excepto uno. Esto se dividirá equitativamente entre los once habitantes de la aldea, 
ya que son gente justa. (No está permitido rebanar ni cortar - cada habitante debe recibir un número entero de frutos.) Después, la fruta restante del árbol Tak-Tak se deja para comenzar el ciclo de nuevo.

Si los habitantes no pueden compartir de forma pareja con un fruto sobrante, esperarán hasta que puedan. Están muy emocionados por el festival y les gustaría saber cuántas Lunas llenas deberán de esperar.

# Entrada

La entrada consistirá de un solo entero, el número de frutos iniciales en el árbol. Este estará entre 2 y 1,000,000 inclusive.

# Salida

La salida consistirá de dos enteros separados por un espacio: el menor número de Lunas llenas que los habitantes deberán esperar para que el festival sea posible, y el número de frutos para ese entonces.

Se garantiza que eventualmente será posible realizar el festival.

# Ejemplo

||input
23
||output
0 23
||description
En el primer ejemplo, $23=2\times11+1$ es un buen número para el festival (cada aldeano recibe dos frutos Tak-Tak y uno sobra, como lo planeado). Es por ello que no necesitan esperar, pueden iniciar el festival inmediatamente.
||input
17
||output
1 34
||description
En el segundo ejemplo, 17 no es un buen número para el festival. Después de una Luna llena, el número de frutos se ha duplicado, convirtiéndose en $34=3\times11+1$. Este es un buen número para el festival.
||input
14
||output
2 56
||description
En el tercer ejemplo, 14 no es un buen número para el festival. Después de dos Lunas llenas, el número de frutos se ha cuadruplicado, convirtiéndose en $56=5 \times 11+1$. Este es un buen número para el festival.
||end
