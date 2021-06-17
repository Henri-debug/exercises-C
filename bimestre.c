#include <stdio.h>

int i, aluno,nota1,nota2,aprovado=0,reprovado=0,total;
float mediageral,mediaaluno,percentaprovado,percentreprovado,notatotal1=0,notatotal2=0;

void main(){

for (i=0; i < 10; i++)
{
       printf("Digite a primeira nota:");
       scanf("%d",&nota1);

       printf("Digite a segunda nota:");
       scanf("%d",&nota2);


       //media tem que ser maior ou igual a 6 para ser aprovado
       mediaaluno=(nota1+nota2)/2;
       if (mediaaluno>=6)
       {
           aprovado= aprovado+1;
       }else{
           reprovado=reprovado+1;
       }

       notatotal1= notatotal1+nota1;
       notatotal2= notatotal2+nota2;


}
total = aprovado + reprovado;
percentaprovado = (100*aprovado)/total;
percentreprovado = (100*reprovado)/total;
mediageral = (notatotal1+notatotal2)/2;

printf("Total de aprovados:%d \n",aprovado);
printf("Percentual de aprovados:%.2f \n",percentaprovado);

printf("Total de reprovados:%d \n",reprovado);
printf("Percentual de reprovados:%.2f \n",percentreprovado);

printf("Media geral:%.2f",mediageral);

}