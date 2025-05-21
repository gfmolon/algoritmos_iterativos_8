#include <stdio.h>

int main() {

    int i, n, aux, soma, maior = 0;

    for(i = 1; i <= 10; i++) {
        
        soma = 0;
        printf("Informe o valor de n\n");  
        scanf("%d",&n);
        
        aux = n;

        while(n > 0) {
            soma += n % 10;
            n = n / 10;
        }

        if(soma > maior) {
            maior = soma;
        }

    }

    printf("A maior soma é %d", maior);


    return 0;

}
