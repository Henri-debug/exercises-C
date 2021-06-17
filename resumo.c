#include <stdio.h>

int i,n,num,qnegativo,qpositivo,qzero;

void main(){


printf("Quantos numeros voce deseja digitar? \n resposta:");
scanf("%d",&n);

qnegativo=0;
qpositivo=0;
qzero=0;

for ( i = 0; i < n; i++)
{
    printf("Digite o numero:");
    scanf("%d",&num);

    if(num>0){
        qpositivo++;
    }else if(num<0){
        qnegativo++;
    }else{
        qzero++;
    }
}

printf("Quantidade de numeros positivos digitados:%d \n",qpositivo);
printf("Quantidade de numeros negativos digitados:%d \n",qnegativo);
printf("Quantidade de numeros zeros digitados:%d",qzero);


}