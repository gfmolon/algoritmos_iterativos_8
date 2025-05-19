#include <stdio.h>

int main() {

    int i, n, cont = 0;

    printf("Qual valor de n\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            cont++;
        }
    }

    printf("%d divisores\n", cont);

    return 0;
}
