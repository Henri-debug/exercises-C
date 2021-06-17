#include <stdio.h>

int i,tab,calculogeral;

void main(){

printf("Digite qual tabuada voce quer:");
scanf("%d",&tab);

for ( i = 0; i < 11; i++)
{
    calculogeral=tab*i;
    printf("%d x %d = %d \n",tab,i,calculogeral);

}




}