DERRAME DE PETROLEO

El problema busca detectar todas las casillas afectadas por el derrame.

Lo primero que se hace, es leer el mapa y encontrar la posición de la plataforma.

    	ios_base::sync_with_stdio(0);
    	cin.tie(0);
    	cin>>n>>c>>k;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<c;j++){
    			cin>>m[i][j];
    			if(m[i][j]=='$'){
    				x=i;
    				y=j;
    			}
    		}
    	}

A partir de ello vamos a crear un procedimiento en una función que denominamos $derramaCasilla$ , en la que debemos considerar los siguientes aspectos:

1.-$dfs$ recibe tres parámetros $i, j$ que son las nuevas coordenadas donde avanza el derrame y $t$ el día en que llega a esa coordenada; y son únicamente de ámbito local, es decir, solo existen dentro de la función $dfs$ y dejarán de existir al salir de ella.

2.-También se hace uso de las variables de ámbito global declaradas fuera (antes) de $main$

    int x,y;
    int n,c,k;
    char m[MAX][MAX];
    bool vis[MAX][MAX];
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};


Estas existen y pueden ser utilizadas en cualquier parte y función del programa (a menos que declarásemos en una función u parámetro o variable local con el mismo nombre).

3.-$dfs$ se invoca a sí misma cuando existe una casilla adyascente y t<=k A eso se le llama RECURSIóN que es un artificio que nos permite especificar un proceso basado en su propia definición, como seguramente lo has visto matemáticamente con los números factoriales $n! = n (n-1)!$ o con la Serie de Fibonacci $Fib(n) = Fib(n-1) + Fib(n-2)$

4.-Toda función recursiva requiere de un caso base que le permita terminar su recursión y le permita dejar de invocarse y poder terminar su proceso.
En nuestro caso cuando $t$ alcance el límite de tiempo $k$ , retornará a su llamada anterior.
Cuando no ha excedido el límite de días se marca la nueva posición como afectada y se verifican las cuatro casillas adyacentes para saber si no se sobrepasan los límites del mapa y si la casilla no se ha visitado para invocar de manera recursiva a la función con cada una de las nuevas coordenadas.

    void dfs(int i,int j,int t){
    	if(i>=n||j>=c||i<0||j<0||m[i][j]=='#')return;
    	if(t==0)return;
    	if(vis[i][j])return;
    	vis[i][j]=true;
    	m[i][j]='*';
    	for(int idx=0;idx<4;idx++){
    		dfs(i+dx[idx],j+dy[idx],k-1);
    	}
    }

Una vez que terminan las llamadas recursivas de la función y esta retorna el control del flujo del programa a la función principal, reasignamos la posición original de la plataforma y se envía como resultado el mapa final:

    	m[x][y]='$';
    	for(int i=0;i<n;i++){
    		for(int j=0;j<c;j++){
    			cout <<m[i][j];
    		}
    		cout << "\n";
