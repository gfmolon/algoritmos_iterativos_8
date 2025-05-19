#include <stdio.h>

int main() {

    int n, i;

    printf("Informe o valor de n\n");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
