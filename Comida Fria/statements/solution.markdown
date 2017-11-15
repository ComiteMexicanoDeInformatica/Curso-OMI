# Solución

En este problema, debemos obtener el número máximo, el número mínimo y la media aritmética (promedio) de un conjunto de números.

La idea es tener almacenadas variables que guarden el número máximo, número mínimo y suma de los números leídos hasta ahora.
Cada que leamos un nuevo número sucederán 3 cosas:

1.- veremos si el nuevo número es menor que el menor número leído hasta ahora, y si es así, actualizamos nuestro número menor.

2.- Sucede lo mismo con el número mayor. 

3.- Sumamos el nuevo número a nuestra sumatoria para obtener el promedio.

	int n,b,total,minimo,maximo;
	minimo=999999999; //asignamos un número muy grande al número mínimo
	maximo=-1; //asignamos un número muy pequeño al número máximo
	total=0; //la sumatoria al inicio es 0
	cin>>n;
	for(int i=0;i!=n;i++)
		{
		cin>>b;
		total+=b;
		minimo=min(minimo,b); //actualizamos minimo
		maximo=max(maximo,b); //actualizamos maximo
		}
	cout<<minimo<<" "<<maximo<<" "<<total/n;
