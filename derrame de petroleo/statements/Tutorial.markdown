DERRAME DE PETROLEO

El problema busca detectar todas las casillas afectadas por el derrame. 

Lo primero que se hace en la solución presentada, es encontrar la posición de la plataforma a medida que se lee el mapa.
Lo que hacemos es leer cada uno de los renglones como un arreglo de caracteres buscando el '$'. Cuando se encuentra se guarda su posición y se continuamos leyendo el resto del mapa.

    scanf("%d %d %d",&r,&c,&k);
	for(int i=0;i<r;i++)
		{
		scanf("%s",mapa[i]);
		//Buscamos la plataforma en este renglón
		for(int j=0;mapa[i][j]!='\0';j++) 
			if(mapa[i][j]=='$')
			{
				a=i;
				b=j;
			}
		}
 
A partir de ello vamos a crear un procedimiento en una función que denominamos $derramaCasilla$ , en la que debemos considerar los siguientes aspectos:

1.-$derramaCasilla$ recibe tres parámetros $x, y$ que son las nuevas coordenadas donde avanza el derrame y $d$ el día en que llega a esa coordenada; y  son únicamente de ámbito local, es decir, solo existen dentro de la función $derramaCasilla$ y dejarán de existir al salir de ella.

2.-También se hace uso de las variables de ámbito global declaradas fuera (antes) de $main$

	
	char mapa[2001][2001];
 	int  r,c,k;
   	int  a,b; //lugar donde se encuentra la plataforma
      
   
   Estas existen y pueden ser utilizadas en cualquier parte y función del programa (a menos que declarásemos en una función u parámetro o variable local con el mismo nombre).

3.-$derramaCasilla$ se invoca a sí misma cuando . . . A eso se le llama RECURSIóN que es un artificio que nos permite especificar un proceso basado en su propia definición, como seguramente lo has visto matemáticamente con los números factoriales $n! = n (n-1)!$ o con la Serie de Fibonacci $Fib(n) = Fib(n-1) + Fib(n-2)$

4.-Toda función recursiva requiere de un caso base que le permita terminar su recursión y le permita dejar de invocarse y poder terminar su proceso.
En nuestro caso cuando $d$ alcance el límite de tiempo $k$ , retornará a su llamada anterior. 
Cuando no ha excedido el límite de días se marca la nueva posición como afectada y se verifican las cuatro casillas adyacentes para saber si no se sobrepasan los límites del mapa y si la casilla no se ha  visitado para invocar de manera recursiva a la función con cada una de las nuevas coordenadas.
 
 	
	void derramaCasilla(int x,int y,int d)
	{
		if(d>k) return;
		mapa[x][y]='*';
		if(y+1<c && mapa[x][y+1]=='.')
			derramaCasilla(x,y+1,d+1);
		if(x+1<r && mapa[x+1][y]=='.')
			derramaCasilla(x+1,y,d+1);
		if(y-1>=0 && mapa[x][y-1]=='.')
			derramaCasilla(x,y-1,d+1);
		if(x-1>=0 && mapa[x-1][y]=='.')
			derramaCasilla(x-1,y,d+1);
	}

	
Una vez que terminan las llamadas recursivas de la función y esta retorna el control del flujo del programa a la función principal, reasignamos la posición original de la plataforma y se envía como resultado el mapa final:

	mapa[a][b]='$';
	for(int i=0;i<r;i++)
		printf("%s\n",mapa[i]);
	return 0;
