#include <stdio.h>

int i, fib1 = 1, fib2 = 1, soma,n;




void main(){
    


printf("Digite o numero para fibonacci:");
scanf("%d",&n);

    printf("1\n1\n");
    for (i = 3; i <= n; i = i + 1)
    {
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
        printf("%d\n",fib2);
    }
    
    

}


