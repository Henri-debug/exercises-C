#include <stdio.h>
 
int fat, n;

void main()
{

printf("Digite o valor que queira fatorar: ");
scanf("%d",&n);
 
for(fat = 1; n > 1; n = n - 1)
fat = fat * n;
 
printf("\nFatorial calculado: %d", fat);

}