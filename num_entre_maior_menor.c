#include <stdio.h>
int i,nmaior,nmenor,intervalo;

void main(){

printf("Digite o numero menor:");
scanf("%d",&nmenor);

printf("Digite o numero maior:");
scanf("%d",&nmaior);

for ( i = nmenor-1; i < nmaior; nmaior--)
{
   printf("%d \n",nmenor);
   nmenor++;
}


}