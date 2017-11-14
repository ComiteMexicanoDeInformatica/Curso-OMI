#include<stdio.h>

char mapa[2001][2001];
int visitados[2001][2001]; //0 no visitado, 1 visitado
int r,c,k;
int a,b; //lugar donde se encuentra la plataforma

int X[]={0,1,0,-1};
int Y[]={1,0,-1,0};

void DFS(int x,int y,int d)
{
	if(d>k) return;
	mapa[x][y]='*';
	visitados[x][y]=1;
	int x1,y1;
	for(int i=0;i<4;i++)
		{
		x1=x+X[i];
		y1=y+Y[i];
		//Verificamos que la casilla sea válida, que sea agua y que no haya sido visitada
		if(x1>=0 && x1<r && y1>=0 && y1<c && mapa[x1][y1]=='.' && visitados[x1][y1]==0)
			DFS(x1,y1,d+1);
		}
}

int main()
{
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
	DFS(a,b,0);
	mapa[a][b]='$';
	for(int i=0;i<r;i++)
		printf("%s\n",mapa[i]);
	return 0;
}

