#include <stdio.h>

int quantidade,i,idade,meiaentrada=0,inteira,inteira,crianca,idoso,totalarrecadado,n;

void main(){
    
printf("Quantidade de pessoas a entrar na sessao:");
scanf("%d",&n);

for (i = 0; i < n ; i++)
{
    printf("digite sua idade:");
    scanf("%d",&idade);

    if (idade<12){
        meiaentrada = meiaentrada + 1;
        crianca= crianca+1;
        totalarrecadado = totalarrecadado + 9;
    }else if (idade>59){

        meiaentrada = meiaentrada + 1 ;
        idoso = idoso + 1;
        totalarrecadado = totalarrecadado + 9;
        
    }else{
        inteira = inteira + 1;
        totalarrecadado = totalarrecadado + 18;
    }
    
}

printf("Quantidade de entradas integrais:%d \n",inteira);
printf("Quantidade de meias entradas:%d \n",meiaentrada);
printf("Quantidade de criancas na sessao:%d \n",crianca);
printf("Quantidade de idosos na sessao:%d \n",idoso);
printf("Total arrecadado na sessao:%d \n",totalarrecadado);



}