#include <stdio.h>

int i;
float n,num,menor,maior,soma,med;


void main(){

menor=0;
maior=0;
soma=0;

for ( i = 0; i < 2; i++)
{
 printf("Digite os numeros:");
 scanf("%f",&n);

  if (n>maior && n>menor)
  {
    maior=n;
    
  }else{
    menor=n;
  }
 
  soma = n + soma;
  

}
med=soma/20;
printf("Maior:%.2f \n",maior);
printf("Menor:%.2f \n",menor);
printf("Soma:%.2f \n",soma);
printf("Media:%.2f",med);
}