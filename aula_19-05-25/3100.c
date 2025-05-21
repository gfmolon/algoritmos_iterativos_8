#include <stdio.h>

int main() {

    int i, n, aux, soma;

    for(i = 1; i <= 10; i++) {
        printf("Informe o número\n");
        scanf("%d",&n);
        
        aux = n;
        soma = 0;
        while(n > 0) {
            soma += n % 10;
            n /= 10;
        }
    
        printf("O número %d tem a soma %d\n",aux, soma);
    }


return 0;
}
