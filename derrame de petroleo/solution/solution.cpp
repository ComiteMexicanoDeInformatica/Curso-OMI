#include<stdio.h>

char mapa[2001][2001];
int r,c,k;
int a,b; //lugar donde se encuentra la plataforma

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
	derramaCasilla(a,b,0);
	mapa[a][b]='$';
	for(int i=0;i<r;i++)
		printf("%s\n",mapa[i]);
	return 0;
}

