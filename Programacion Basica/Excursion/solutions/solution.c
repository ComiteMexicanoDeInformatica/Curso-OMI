#include<stdio.h>

int main()
{
  int n,p,i,x,v[10001];
  scanf("%d %d",&n,&p);
  for(i=1;i<=n;i++)
    scanf("%d",&v[i]);
  for(i=1;i<=p;i++)
  {
    scanf("%d",&x);
    printf("%d\n",v[x]);
  }
  return 0;
}
