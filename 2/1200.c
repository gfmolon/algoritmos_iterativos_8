#include <stdio.h>

int main() {

    // primo
    int n, cont = 0, i;

    printf("Informe um número\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            cont++;
        }
    }

    if (cont == 2) {
        printf("1");
    } else {
        printf("2");
    }

    return 0;
}
