#include <stdio.h>

int main() {

    int n, i, aux, invertido;

    for(i = 1; i <= 10; i++) {
        printf("Informe o valor de n\n");
        scanf("%d",&n);
        
        invertido = 0;
        aux = n;
        
        while(n > 0) {
            invertido = (invertido * 10) + n % 10;
            n /= 10;
        }

        printf("Número %d invertido é %d\n", aux, invertido);

    }

return 0;

}
