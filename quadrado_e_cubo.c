#include <stdio.h>
#include <math.h>

int i,n1=1,cubo,quadrado;

void main(){

    for (i = 0; i < 20; i++)
    {
       cubo=pow(n1,3);
       quadrado=pow(n1,2);
       printf("Cubo de %d:%d e Quadrado:%d \n",n1,cubo,quadrado);
       n1=n1+1;
    }
    


}