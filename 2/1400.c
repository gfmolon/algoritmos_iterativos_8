#include <stdio.h>

int main() {

    int i, n, maior = 0;

    for (i = 1; i <= 10; i++) {
        printf("Informe o valor de n\n");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Número incorreto\n");
        }

        if (n > maior) {
            maior = n;
        }
    }

    printf("O maior número que você digitou é %d", maior);

    return 0;
}
